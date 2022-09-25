#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *head,*head1;
void insertNodeAtTail(int new_data){
    Node *list = new Node();
    list->data= new_data;
    // list->next = NULL;
    //  head = list;
    if(head==NULL){
        list->next=head;
        head=list;
        head1=head;;
        
    }else{
    head->next =list;
    list->next=NULL;
     head = list;

}
}
void printlist(Node*s){
    while(s!=NULL){
        cout<<s->data<<endl;
        s=s->next;
    }
    
}
int main() {
    head =NULL;
    int n;
    cin>>n;
   int new_data;
    for(int i=0;i<n;i++){
        cin>>new_data;
        insertNodeAtTail( new_data);
    //printlist(head1);

    }
    // insertNodeAtTail( 4);
    //  insertNodeAtTail( 6);

    //  insertNodeAtTail( 7);
      printlist(head1);
    //printlist(head);
    return 0;
}
