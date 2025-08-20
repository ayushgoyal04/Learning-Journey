#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;


    Node(int n){
        data=n;
        next=NULL;
    }

};

void insertHead(Node* &head,int n){

    Node* curr=head;

    while(curr->next!=NULL){
        curr=curr->next;
    }

    Node* neww=new Node(n);
    curr->next=neww;
}

void printLL(Node* head){

    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<< " ";
        cout<< temp->next<< "-> ";

        temp=temp->next;

    }

}

int main(){

    Node* ll=new Node(50);
    Node* head=ll;

    insertHead(head,38);
    insertHead(head,55);
    insertHead(head,77);
    insertHead(head,99);
    insertHead(head,33);


    printLL(head);





}







