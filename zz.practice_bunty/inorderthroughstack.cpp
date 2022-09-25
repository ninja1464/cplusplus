#include <iostream>
#include <vector>
#include <stack>
using namespace std; 
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int newdata){
        this->data=newdata;
        right=left=NULL;
    }
};

void Inorder(Node* root){
    stack<Node *> s;
    Node* curr = root;

    while(curr!=NULL || s.empty()==false){

        while(curr!=NULL){
            s.push(curr);
            curr =curr->left;
        }
        curr = s.top();
        s.pop();

        cout<<curr->data<<endl;
    curr=curr->right;
    }
   
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);

    Inorder(root);

return 0;
}