#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* data2, Node* data3){
        data = data1;
        next = data2;
        back = data3;
    }
};

Node* ArrToDLL(vector<int> &v){
    int l = v.size();
    Node* head = new Node(v[0], nullptr, nullptr);
    Node* prev = head;

    for(int i = 1; i < l; i++){
        Node* temp = new Node(v[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void Traverse(Node* head){
    Node* temp = head;
    int security = 20;
    while(temp != NULL && security>0){
        cout<<temp->data<<" ";
        temp = temp->next;
        security--;
    }
    cout<<endl;
    cout<<endl<<security;
}

// deteion of a node (head, tail, kth index, value)
Node* DeleteHead(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* prev = head;
    head = head->next;
    head->back = NULL;
    prev->next = NULL;
    delete prev;
    return head;
}

Node* DeleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp;
    prev = prev->back;
    prev->next = NULL;
    temp->back = NULL;
    delete temp;
    // delete prev; // this line will give error (infinite loop in traversal)
    return head;
}


Node* DeleteKPos(Node* head, int k) {
    if(head==NULL) return NULL;
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev==NULL && front== NULL) return NULL;
    else if(prev==NULL) return DeleteHead(head);
    else if(front==NULL) return DeleteTail(head);

    prev->next = front;
    front->back = prev;
    temp->next = NULL;
    temp->back = NULL;

    delete temp;
    return head;
}

void DeleteElement(Node* head){
    // cannot delete head
    Node* temp = head;
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = NULL;
        temp->back = NULL;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = NULL;

    delete temp;
}

// Insertion of a node (before head, before tail, before kth index, before node)
Node* InsertBeforeHead(Node* head, int value){
    Node* newnode = new Node(value, head, nullptr);
    head->back = newnode;

    return newnode;
}


Node* InsertBeforeTail(Node* head, int value){
    if(head->next == NULL) {
        return InsertBeforeHead(head, value);
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newnode = new Node(value, temp, prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}

Node* InsertBeforeK(Node* head, int k, int val){
    if(k == 1) {
        return InsertBeforeHead(head, val);
    }
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        if(count == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newnode = new Node(val, temp, prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}

void InsertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);

    prev->next = newNode;
    node->back = newNode;

}


// Reverse a doubly ll
// we can have a stack and iterate over the link 2 times, but that will only reverse the data and not the links...



int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node* head = ArrToDLL(v);

    // head = DeleteHead(head);
    // head = DeleteTail(head);
    // head = DeleteKPos(head, 3);
    // DeleteElement(head->next);


    // head = InsertBeforeHead(head, 18);
    // head = InsertBeforeTail(head, 27);
    // head = InsertBeforeK(head, 5, 435);
    InsertBeforeNode(head->next->next->next, 867);


    Traverse(head);
}
