#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};
void insert(Node* &head,int n){
    Node* newnode = new Node(n);
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp -> next = newnode;
    return;
}
void display(Node* head){
    if(head == NULL){
        cout<<"No elements are present "<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main(){
    int t = 3;
    Node* head = NULL;
    while(t--){
        int n;
        cin >> n;
        insert(head,n);
    }
    display(head);
}