#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *newnode(int newdata)
{
    Node *temp = new Node();
    temp->data = newdata;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
void preorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}
void postorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    Node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

    cout << "\nPreorder traversal of binary tree is \n";
    preorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);

    return 0;
}