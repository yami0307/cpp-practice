//Doubly Linked List - Insertion, Deletion, Traversal
#include <bits/stdc++.h>
using namespace std;

//Node Structure
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //Constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
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
void insertAtHead(Node* &head, Node* & tail, int d){
    if(head == NULL){
        Node* node1 = new Node(d);
        head = node1;
        tail = node1;
    }
    
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
//To insert at the end
void insertAtTail(Node* &head, Node* & tail, int d){
    if(tail == NULL){
        Node* node1 = new Node(d);
        head = node1;
        tail = node1;
    }
    
    Node* temp = new Node(d);
    temp -> prev = tail;
    tail -> next = temp;
    tail = temp;
}
//To insert at any given position
void insertAtPosition(Node* &head, Node* &tail, int d, int pos){
    if(pos == 1){
        insertAtHead(head, tail, d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(head, tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> prev = temp;
    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}
//To delete from any position
void deletePosition(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        temp -> next -> prev == NULL;
        head = temp -> next;
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
        prev -> next = NULL;
        curr -> prev = NULL;
        delete curr;
        tail = prev;
        return;
    }
    
    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}
//To print the list along with head and tail
void print(Node* & head, Node* &tail){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
    cout<< "HEAD " << head -> data <<endl;
    cout<< "TAIL " << tail -> data <<endl;
}
//MAIN
int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    insertAtPosition(head, tail, 22, 2);
    print(head, tail);
    insertAtPosition(head, tail, 20, 3);
    print(head, tail);
    insertAtPosition(head, tail, 12, 4);
    print(head, tail);
    insertAtPosition(head, tail, 32, 2);
    print(head, tail);
    deletePosition(head, tail, 2);
    print(head, tail);
    deletePosition(head, tail, 4);
    print(head, tail);
    deletePosition(head, tail, 1);
    print(head, tail);
    
    return 0;
}