
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push
    void push(int value) {
        Node* newNode = new Node(value);

        newNode->next = top;
        top = newNode;
    }

    // Pop
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }

        Node* temp = top;

        cout << "Deleted: " << top->data << endl;

        top = top->next;
        delete temp;
    }

    // Peek
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top: " << top->data << endl;
        }
    }

    // Traversal
    void display() {
        Node* temp = top;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    ~Stack() {
        while (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.peek();

    s.pop();
    s.display();

    return 0;
}
