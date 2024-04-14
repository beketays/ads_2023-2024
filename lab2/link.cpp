#include <iostream>
using namespace std;



// struct node{
//     int value; //data, val
//     node* next;

//     node(){
//         value = 0;
//         next = nullptr;
//     }

//     node(int value){
//         this->value = value;
//         next = nullptr;
//     }

//     node(int value, node* next){
//         this->value = value;
//         this->next = next;
//     }
// }

// struct LinkedList{
//     node* head;
//     node* tail;

//     LinkedList(){
//         head = nullptr;
//         tail = nullptr;
//     }

//     void push(node*)\

// };





struct node{
    int data;
    node* nxt;

    node() {
        data = 0;
        nxt = nullptr;
    }

    node(int _data){
        data = _data;
        nxt = nullptr;
    }

    node(int _data, node *_nxt){
        data = _data;
        nxt = _nxt;
    }
};

struct List{
    node* head;
    node* tail;

    List(){
        head = nullptr;
        tail = nullptr;
    }

    void push_back(int data){
        node* new_node = new node(data);
        if(head == nullptr) {
            head = new_node;
        }
        else {
            node* cur = head;
            while(cur->nxt != nullptr) {
                cur->nxt = new_node;
            }
        }
    }
    
    // void insertTail(int data){
    //     if(head == nullptr){
    //         head = new node(data);
    //         tail = head;
    //     }
    //     else{
    //         node* new_node = new node(data);
    //         tail->nxt = new_node;
    //         tail = new_node;
    //     }
    // }


    void insertHead(int data) {
        if(head == nullptr) {
            head = new node(data);
            tail = head;
        }
        else {
                node* new_node = new node(data);
                new_node->nxt = head;
                head = new_node;
        }
    }

    void insertTail(int data){
        node* new_node = new node(data);
        node* cur = head;
        if(head!=nullptr){
            while(cur != nullptr) {
                if(cur->nxt == nullptr){
                    cur->nxt = new_node;
                    tail = new_node;
                }
                cur = cur->nxt;
            }
        }
        else {
            head = new_node;
            tail = head;
        }
    }

    void insertByIndex(int data, int index) {
        
        node* new_data = new node(data);

        node* cur = head;
        if(head == nullptr) {
            head = new_data;
        }else if(index == 0){
            new_data->nxt = head;
            head = new_data;
        }
        else {
            int cnt = 0;
            while(cur != nullptr) {
                if(cnt == index - 1){
                    node* temp = cur->nxt;
                    cur->nxt = new_data;
                    new_data->nxt = temp;
                }
                cnt++;
                cur = cur->nxt;
            }   
        }
        
    }

    void deleteHead() {
        if(head == nullptr) {
            cout << "There is no head";
        }
        else {
            node* temp = head->nxt;
            head->nxt = nullptr;
            head = temp;
            //nodex->head->headNext->
        }
    }

    void deletTail() {

        if(head != nullptr) {
            node* cur = head;
            while(cur->nxt != nullptr) {
                if(cur->nxt->nxt == nullptr){
                    cur->nxt = nullptr;
                }
                cur = cur->nxt;
            }
            if(head->nxt == nullptr){
                head = nullptr;
            }
        }
    }










    // void insertHead(int data){
    //     if(head == nullptr){
    //         head = new node(data);
    //         tail = head;

    //     }
    //     else{
    //         node* new_node = new node(data);
    //         new_node->nxt = head;
    //         head = new_node;
    //     }
    // }
    // void insertByIndex(int index, int data){

    //         if(head == nullptr){            
    //             head = new node(data);
    //             tail = head;
    //         }else if(index == 0){
    //             node* new_node = new node(data);
    //             new_node->nxt = head;
    //             head = new_node;
    //         }else{
    //             int i = 0;
    //             node* cur = head;
    //             node* new_node = new node(data);
    //             while(cur!=nullptr){
    //                 if(i == index - 1){
    //                     node* temp = cur->nxt;
    //                     cur->nxt = new_node;
    //                     new_node->nxt = temp;
    //                 }
    //                 cur = cur->nxt;
    //                 i++;
    //             }    
    //     }
        
    // }        
    // void deleteHead(){
    //     if(head == nullptr){
    //         cout<<"there is not element";
    //     }else{
    //         node* temp = head->nxt;
    //         head->nxt = nullptr;
    //         head = temp;
    //     }
    // }

    // void deleteTail(){
    //     if(head != nullptr){
    //         node* cur = head;
    //         while(cur!=nullptr){
    //             cur = cur->nxt;
    //             if(cur->nxt == tail){
    //                 cur->nxt = nullptr;
    //                 tail = cur;
    //                 break;
    //             }
    //         }
    //     }
    // }

    // void deleteHead(){
    //     if(head == nullptr){
    //         node* temp = head->nxt;
    //         head->nxt = nullptr;
    //         head = temp;
    //     }
    // }

    // void deleteTail(){
    //     if(tail!=nullptr){
    //         node* cur = head;
    //         while(cur!=nullptr){
    //             if(cur->nxt==tail){
    //                 cur->nxt=nullptr;
    //                 tail = cur;
    //             }
    //         }
    //     }
    // }

    // void deleteByIndex(int index){

    //     if(head != nullptr){
    //         int i = 0;
    //         node* cur = head;
    //         while(cur!=nullptr){
    //             if(i == index - 1){
    //                 if(cur->nxt == tail){
    //                     cur->nxt = nullptr;
    //                     tail = cur;
    //                 }
    //                 if(cur->nxt != nullptr){
    //                     node* temp = cur->nxt->nxt;
    //                     cur->nxt->nxt = nullptr;
    //                     cur->nxt = temp;
    //                 }
    //             }
    //             cur = cur->nxt;
    //             i++;
    //         }
    //     }
    // }
};

int main(){
    List a;

    a.insertTail(3);
    a.insertTail(4);
    a.insertTail(5);
    a.insertTail(6);

    node *cur = a.head;

    while(cur!=nullptr){
        cout << cur->data << " ";
        cur = cur->nxt;
    }

    a.insertHead(2);
    cout << endl;

    cur = a.head;
    a.insertByIndex(0, 1);
    a.insertByIndex(3, 10);
    cur = a.head;

    a.deletTail();
    a.deletTail();
    a.deletTail();
    a.deletTail();
    a.deletTail();


    while(cur!=nullptr){
        cout << cur->data << " ";
        cur = cur->nxt;
    }
    cout<<a.tail->data;
}

