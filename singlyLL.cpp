//Singly Linked List - Insertion, Deletion, Traversal
#include <bits/stdc++.h>
using namespace std;
//Node Structure
class Node{
    public:
    int data;
    Node* next;
    //Constructor    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //Destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
//To insert at the beginning
void insertAtHead(Node* & head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
//To insert at the end
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
//To insert at any given position
void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}
//To delete from any position
void deleteAtPosition(int pos, Node* &head, Node* &tail){
    
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
        
    if(curr -> next == NULL){
        prev -> next = curr -> next;
        delete curr;
        tail = prev;
        return;
    }
        
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}
//To print the list along with head and tail
void print(Node* &head, Node* &tail){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }cout << endl;
    cout<< "Head " << head -> data <<" "<<"\n";
    cout <<"Tail " << tail -> data <<" " <<"\n";
}

//MAIN
int main() {
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;
    
    insertAtPosition(head, tail, 2, 22);
    print(head, tail);
    insertAtPosition(head, tail, 1, 20);
    print(head, tail);    
    insertAtPosition(head, tail, 3, 15);
    print(head, tail);
    insertAtPosition(head, tail, 2, 45);
    print(head, tail);
    cout<<endl;
    deleteAtPosition(5, head, tail);
    print(head, tail);
    
    return 0;
}