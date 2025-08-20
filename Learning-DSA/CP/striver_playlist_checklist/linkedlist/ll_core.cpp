#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* data2) {
        data = data1;
        next = data2;
    }

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convrtArrayToLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);

    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; //  mover = mover-> next this is the same thing
    }
    return head;
}

// never tamper the head of the ll
void TraverstheLL(Node* head){
    Node* temp = head;
    while(temp) {
        cout<<temp->data<<" ->  ";
        temp = temp->next;
    }
    cout<<endl;
}

void LengthofLL(Node* head){
    Node* temp = head;
    int count = 0; // for the length of the ll
    while(temp) {
        temp = temp->next;
        count++;
    }
    cout<<count<<endl;
}

void searchinLL(Node* head, int element){
    Node* temp = head;
    int index = -1;
    while(temp) {
        if(temp->data == element) {
            cout<<"Element found at node"<<endl;
            index = 0;
        }
        temp = temp->next;
    }
    if(index<0)
    cout<<"element not found"<<endl;
}

int main() {

    vector<int> arr = {2, 5, 7, 9};

    Node* head = convrtArrayToLL(arr);
    // cout<<head->data;

    TraverstheLL(head);

    LengthofLL(head);

    searchinLL(head, 5);

}

