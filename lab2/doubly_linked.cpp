#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev; // doulby linked list's special

    node(){
        this->data = 0;
        next = nullptr;
        prev = nullptr;
    }
    node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

struct list{
    node* head;
    node* tail;

    list(){
        head = nullptr;
        tail = nullptr;
    }

    void push_back(int data){
        node* new_node = new node(data);
        if(head == nullptr){
            head = new_node;
            tail = head;
        }else{
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    void push_front(int data){
        node* new_node = new node(data);
        if(head == nullptr) {
            head = new_node;
            tail = head;
        }
        else{
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }
};

int main(){
    list l;
    l.push_back(4);
    l.push_back(5);
    l.push_front(3);

    cout<<l.head->data<<" ";      
    cout<<l.head->next->data<<" ";
    cout<<l.head->next->next->data;  
}