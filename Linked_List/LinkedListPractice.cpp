#include<iostream>
using namespace std;

class Node{ // user defined data type
public:
    int val;
    Node* next; // Address of next
    // constructor
    Node(int val){
        this->val = val;
    }
};

class MyLinkedList{// user defined data type
private:
    Node* head;
    Node* tail;
    int length;
public:
    // Constructor
    MyLinkedList{
        head = tail = NULL;
        length = 0;
    }
    void display(){
        Node* temp = head; .
        while(!temp == NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
            n->next = head;
            head = n;
        }
        length ++;
    }
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        length++;
    }
    void insert(int idx , int val){
        // condition
        if(idx<0 or idx>length){
            cout<<"Invalid Iindex!"<<end;
            return; // return back without going further
        }
        if(idx == 0){
            insertAtHead(val);
            return;
        }
        if(idx == length){
            insertAtTail(val);
            return;
        }
        // Actual Code
        Node* n = new Node(val);
        Node* temp = head;
        // inserting upto index
        for(int i=1; i<=idx; i++){
            temp = temp->next // give add upto idx 
        }

        n->next = temp->next;
        temp->next = n;
        length++;
    }
    void removeAtHead(){
        // create another head and del 1st one
        if(length == 0){
            cout<<"list is empty!"<<endl;
            return -1;
        }
        Node* toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length --;
    }
    void remove(int idx){
        if(idx<0 or idx>=length){
            cout<<"Invalid Idx"<<endl;
            return;
        }
        if(idx == 0){
            removeAtHead();
            return;
        }
        // actual code
        Node* temp = head;
        for(int i=1; i<=idx-1; i++){
            temp = temp->next;
        }
        Node* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        // condition
        if(idx == length-1) tail = temp;
        delete toBeDeleted;
        length--;
    }

     int get(int idx){
        if(idx<0 or idx>=length){
            cout<<"Invalid Index!"<<endl;
            return -1;
        }
        Node* temp = head;
        for(int i=1;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }

    int size(){
        return length;
    }

}

int main()
{  
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.removeAtHead();
    list.display();
    list.insertAtHead(40);
    list.display();
    // list.length = 0; ERROR
    // list.head = NULL; ERROR
    cout<<list.size()<<endl;
    
    return 0;
}