#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int n){
        data=n;
        left=right=NULL;
    }
};

Node* insert(Node* root, int n){

    if(root==NULL){
        return new Node(n);
    }

    if(n<root->data){
        root->left=insert(root->left,n);
    }
    else{
        root->right=insert(root->right,n);
    }

    return root;

}

void prefix(Node* root){\

    if(root==NULL) return ;

    cout<< root->data<< "->";
    prefix(root->left);
    prefix(root->right);


}





int main(){
    Node* root = new Node(-1);

    root=insert(root,44);

    insert(root,44);
    insert(root,66);
    insert(root,99);
    insert(root,6);
    insert(root,50);
    insert(root,70);



}
