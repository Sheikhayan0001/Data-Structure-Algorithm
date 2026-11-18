
#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Insert element
    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = value;
        cout << value << " pushed\n";
    }

    // Remove element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << arr[top] << endl;
        top--;
    }

    // Display top element
    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top: " << arr[top] << endl;
        }
    }

    // Traverse stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
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
