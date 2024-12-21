#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* createNode(int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = nullptr;

    return newNode;
}

void printList(node* head){
    node* tmp = head;
    while (tmp != nullptr){
        cout <<tmp->data<<" -> ";
        tmp = tmp->next;
    }
}

void append(node*& head, int val){

    node* tmp = createNode(val);
    if (head == nullptr){
        head = tmp;
    
    }
    else{
        node* current = head;
        while (current->next != nullptr){
            current = current->next;
        }
        current->next = tmp;
    }
}

int main(){
    int len = 3;

    node* head = nullptr;

    append(head,1);
    append(head,2);
    append(head,3);

    printList(head);
}