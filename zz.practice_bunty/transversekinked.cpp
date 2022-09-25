#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL;

void insertatbeginning(int new_data)
{
    Node *t = new Node();

    t->data = new_data;
    t->next = head;
    head = t;

    // head = t;

    // cout<<t->data<<endl;
}
void insertatanyplace(Node *prev, int new_data)
{
    Node *t = new Node();
    t->data = new_data;
    t->next = prev->next;
    prev->next = t;
}
void atend(Node *head, int new_data)
{
    Node *t = new Node();
    t->data = new_data;
    while (head != NULL)
    {
        if (head->next == NULL)
        {
            head->next = t;
            t->next = NULL;
            break;
        }
        // else
        // {
        head = head->next;
        // }
    }
}
void prinlist(Node *s)
{

    while (s != NULL)
    {
        cout << s->data << endl;
        s = s->next;
    }
}

int main()
{
    // Node *head=NULL;

    //    int n;
    //    cin>>n;
    // int data;
    // for(int i=0;i<n;i++){
    //    cin>>data;

    insertatbeginning(1);
    insertatbeginning(2);
    insertatbeginning(3);
    insertatbeginning(4);
    insertatanyplace(head, 8);
    atend(head, 7);
    // insertatanyplace(head,8);

    prinlist(head);
    //}

    // Node *head = new Node();

    return 0;
}