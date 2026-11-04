#include<iostream>
using namespace std;

// Node Pointers
class Node{
public:
    int val ;
    Node* next ; 

    // constructor
    Node(int val){
        this->val = val ;
        // By default it set to NULL
        next = NULL ;
    }
};

void print(Node* Head){
    // Temp Node --> Stores the address Head Node and every time move to next
    // creating temp node is good practice because further we have to using our head node it dosn't change directly change he add of Head node
    // Head --> going to my null if i want to use next time it wont be
    // thats why we storing head into temp so it can be use next time 
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next ;
    }
    cout<<endl;

    // Direct Head node
    //   while(Head != NULL){
    //     cout<<Head->val<<" ";
    //     Head = Head->next ;
    // }
    // cout<<endl;
}
void printRecursion(Node* Head){
    if(Head == NULL) return;
    cout<<Head->val<<" ";
    printRecursion(Head->next);
}
void printReverse(Node* Head){
    if(Head == NULL) return;
    printReverse (Head->next);
    cout<<Head->val<<" ";
}


int main()
// Node Pointers
// Pointer a,b etc ----> stores the add of new Node
{   // assigning value
    Node* a = new Node(7); // Head
    Node* b = new Node(0);
    Node* c = new Node(1);
    Node* d = new Node(8);
    Node* e = new Node(2);

    // attaching nodes
    a->next = b;  // addesses
    b->next = c;
    c->next = d;
    d->next = e;

    // treversing values
    // manual way 
    cout<<a->val<<endl;                         // 7
    cout<<a->next->val<<endl;                   // 0
    cout<<a->next->next->val<<endl;             // 1
    cout<<a->next->next->next->val<<endl;       // 8
    cout<<a->next->next->next->next->val<<endl; // 2

    // Traversing
    print(a);
    // recursion
    printRecursion(a);
    cout<<endl;
    // reverse
    printReverse(a);

    return 0;
} 