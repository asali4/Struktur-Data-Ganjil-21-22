//double linked list

#include <iostream>
using namespace std;

struct user{
    string nama, password;
    user *prev;
    user *next;
}*head, *tail, *cur, *newNode, *del;

void createDoubleLinkedList(string nama, string password){
    head = new user();
    head->nama = nama;
    head->password = password;
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

void addFirst(string nama, string password){
    newNode = new user();
    newNode->nama = nama;
    newNode->password = password;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void addLast(string nama, string password){
    newNode = new user();
    newNode->nama = nama;
    newNode->password = password;
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void removeFirst(){
    del = head;
    head = head->next;
    head->prev = NULL;
    delete del;
}

void removeLast(){
    del = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete del;
}

void printDoubleLinkedList(){

    cur = head;
    while (cur != NULL){
        cout << "nama user = " << cur->nama << endl;
        cout << "password  = " << cur->password << endl;

        cur = cur->next;
    }

}

int main(){

    createDoubleLinkedList("Layla", "alstroemeria");
    printDoubleLinkedList();
    cout << endl;

    addFirst("Riksa", "dhirendra");
    printDoubleLinkedList();
    cout << endl;

    addLast("Reza", "avanluna");
    printDoubleLinkedList();
    cout << endl;

    removeFirst();
    printDoubleLinkedList();
    cout << endl;

    removeLast();
    printDoubleLinkedList();
    cout << endl;
    
    return 0;
    
}