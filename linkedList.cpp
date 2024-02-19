#include <iostream>
using namespace std;


struct Node{
    int data; 
    Node* next;
};

void insertEnd(Node** head, int newData){
    Node* newNode = new Node();
    newNode->data = newData; 
    newNode->next = nullptr; 
    if (*head == nullptr){
        *head == newNode;
    } 
    else {
        Node* last = *head;
        while (last->next != nullptr){
            last = last->next;
        }
        last->next = newNode;
    }
}

void displayList(Node* node){
    while (node != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}



int main(){

    Node* head = nullptr; 
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    displayList(head);




    return 0; 
}