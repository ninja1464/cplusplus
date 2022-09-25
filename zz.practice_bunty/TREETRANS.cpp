#include <iostream>
#include <vector>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int newdata)
{
    Node *temp = new Node();
    temp->data = newdata;
    temp->left = temp->right = NULL;
    return temp;
}

Node *Insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data < root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(Node *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if (data == root->data)
    {
        return true;
    }
    else if (data < root->data)
    {
        return Search(root->left, data);
    }
    else
    {
        return Search(root->right, data);
    }
}
//to find min element in the tree
int Findmin(Node* Min_node){
   if(Min_node==NULL){
      cout<<"noode not found"<<endl;
      return -1;
   }
   while(Min_node->left != NULL){
    Min_node=Min_node->left;
   }
   return Min_node->data;
}
 //to find max element in the tree
int Findmax(Node* Max_node){
    if(Max_node==NULL){
        cout<<"max node not found"<<endl;
        return -1;
    }
    while(Max_node->right!=NULL){
        Max_node=Max_node->right;

    }
    return Max_node->data;
}
// to find height of the node from root node .... it can be implemented in two ways one of them is loop method and another is recursion
int findheight(Node* root){
    if(root==NULL)
       return -1;
    return max(findheight(root->left),findheight(root->right))+1;
    }

// level order transversal

int breadthsearch(Node* root){
   if(root==NULL) return ;
    queue<Node*> q;
   q.push(root);

   while(!q.empty()){
   Node* current = root;
   cout<<current->data<<endl;
   if(current->left==NULL) q.push(current->left);
   if(current->right==NULL) q.push(current->right);
   q.pop();

   }

    
}

int main()
{
    Node *root = NULL;
    root = Insert(root, 11);
    root = Insert(root, 12);
    root = Insert(root, 13);
    root = Insert(root, 14);
    root = Insert(root, 15);
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    if (Search(root, num) == true)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found/" << endl;
    }
}