// Doubly linkedlist  = Additional node (prev node) we can move t0 prv one

// implementation
// 5 func
/*-------------
| value     |
| next      |
| previous  |
-------------*/

#include<iostream>
using namespace std;

class Node{
public: // accecsible in next class
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        prev = next = NULL;
    }
};

class DoublyList{
private: // by default its always private
    Node* head;
    Node* tail;
   
public:
    DoublyList(){
        head = tail = NULL;
    }

    // actual logic
    void push_front(int val){ // Push at head
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            // build connection between them
            newnode->next = head; // 1st link with head
            head->prev = newnode; // 2nd linked with prev
            // Now assigning head to new Node
            head = newnode;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }
        else{
           newnode->prev = tail;
           tail->next = newnode;
           tail = newnode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"DLL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        // For single node 
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp; // Using(new) DMA = so need To DELETE address
    }

    void pop_back(){
        if(head == NULL){
            cout<<"DLL is empty\n";
            return;
        }
    
        Node* temp = tail;
        tail = tail->prev;
        // edge case
        if(tail != NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    // display
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" "<<endl;
            temp = temp->next;
        }
        cout<<"Complete Doubly LinkedList"<<endl;
    }
};


int main()
{  
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);

    dll.push_back(10);
    dll.push_back(12);

    dll.pop_front();

    dll.pop_back();
    
    dll.display();
    return 0;
}