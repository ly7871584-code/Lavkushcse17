#include <bits/stdc++.h>

using namespace std;

class node {
    public:

        int data;
    node * next;

    node(int val) {
        data = val;
        next = NULL;
    }

};
class List {
    node * head;
    node * tail;
    public:
        List() {
            head = tail = NULL;

        }
    void push_front(int val) {
        node * newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
        }else {
        newnode->next = head;   
        head = newnode;
        }
    }
    void push_back(int val) {
        node * newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail -> next = newnode;
            tail = newnode;
        }
       
    }
     void pop_front(){
            if(head==NULL){
                cout<<"ll is empty";
                return ;
            }
        
                node*temp=head;
                head=head->next;
               temp->next=NULL;
               delete temp;
            }
            void pop_back(){
                if(head==NULL){
                    cout<<"ll is empty";
                    return;
                }
                node*temp=head;
                while(temp->next!=tail){
                    temp=temp->next;
                }
                temp->next=NULL;
                delete tail;
                tail=temp;
                    
                }
    void printll() {
        node * temp = head;
        while (temp != NULL) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }

};
int main() {
    List ll;
    ll.push_front(10);
    ll.pop_front();
    ll.push_front(67);
     ll.push_front(68);
      ll.push_front(69);
ll.push_back(76);
ll.pop_back();
    ll.printll();
    return 0;
}