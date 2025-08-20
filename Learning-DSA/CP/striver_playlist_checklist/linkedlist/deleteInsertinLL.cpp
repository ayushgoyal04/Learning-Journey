#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *data2)
    {
        data = data1;
        next = data2;
    }
};

Node *convertarrtoll(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);

    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void TraverstheLL(Node *head)
{
    Node *temp = head;
    int count = 10;
    while (temp && count > 0)
    {
        cout << temp->data << " ->  ";
        temp = temp->next;
        count--;
    }
    cout << endl;
}

int LengthofLL(Node *head)
{
    Node *temp = head;
    int count = 0; // for the length of the ll
    while (temp)
    {
        temp = temp->next;
        count++;
    }
    // cout<<count<<endl;
    return count;
}

// remove head of the ll
Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// remove tail of the ll
Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}

// deleting the k-th element of the ll
Node *DeleteKpos(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (k == 1)
    {
        return removeHead(head);
    }
    int len = LengthofLL(head);
    if (k == len)
    {
        return removeTail(head);
    }
    if (k > len || k < 1)
    {
        return head;
    }
    // Traverse to (k-1)-th node
    Node *prev = head;
    for (int i = 1; i < k - 1; i++)
    {
        prev = prev->next;
    }
    Node *toDelete = prev->next;
    prev->next = toDelete->next;
    delete toDelete;
    return head;
}

// delete first node with value == k
Node *DeleteKval(Node *head, int k)
{
    if (head == NULL)
        return head;

    // If head needs to be deleted
    if (head->data == k)
    {
        return removeHead(head);
    }

    Node *prev = head;
    Node *curr = head->next;
    while (curr != NULL)
    {
        if (curr->data == k)
        {
            prev->next = curr->next;
            delete curr;
            return head;
        }
        prev = curr;
        curr = curr->next;
    }
    // Value not found, return original head
    return head;
}

// Insert at the head of the ll
Node *InsertHead(Node *head, int value)
{
    if (head == NULL)
        return new Node(value, nullptr);

    Node *temp = new Node(value, head);
    return temp;
    // return new Node(value, head);
}

Node *InsertTail(Node *head, int value)
{
    if (head == NULL)
        return new Node(value, nullptr);

    Node *temp = head;
    while (temp->next != NULL)
    { // stop at the last element
        temp = temp->next;
    }
    Node *newnode = new Node(value, nullptr);
    temp->next = newnode;
    // delete temp; this line causes unexpected beaviour and memory leaks
    return head;
}

// insert at kth poition
Node *Insertkpos(Node *head, int pos, int value)
{
    if (pos <= 0)
        return head; // invalid position
    if (pos == 1)
    {
        return InsertHead(head, value);
    }
    if (head == NULL)
        return new Node(value, nullptr);

    int n = LengthofLL(head);
    if (pos > n + 1)
    {
        // If position is greater than length+1, insert at tail
        return InsertTail(head, value);
    }
    Node *prev = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prev = prev->next;
    }
    Node *newnode = new Node(value, prev->next);
    prev->next = newnode;
    return head;
}


// insert at given element
Node *InsertBeforeEL(Node *head, int element, int value)
{
    // if (head == NULL)
    //     return new Node(value, nullptr);
    // if(head->data == element) return InsertHead(head, value);

    // Node * temp = head;
    // bool ispresent = false;

    // while(temp->next->data != element ){
    //     temp = temp->next;
    // }
    // Node* newnode = new Node(value, temp->next);
    // temp->next = newnode;
    // return head;

    if(head == NULL) {
        return NULL;
    }
    if(head->data == element) {
        return new Node(value, head);
    }

    Node* temp = head;
    while(temp->next != NULL) {
        if(temp->next->data == element){
            Node* x = new Node(value, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}


int main()
{
    vector<int> arr = {12, 5, 7, 8};
    Node *head = convertarrtoll(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // cout<<LengthofLL(head)<<endl;
    // head = DeleteKpos(head, 5);
    // head = InsertHead(head, 188);
    // head = InsertTail(head, 9684);
    // head = Insertkpos(head, 4, 100);
    head = InsertBeforeEL(head, 5, 34);
    TraverstheLL(head);
}
