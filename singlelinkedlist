#include <iostream>
using namespace std;

struct Buku{
    string author, judul;
    int tahun;

    Buku *next;
}*head, *tail, *cur, *newNode, *lastNode, *del;

void SingleLinkedList(string author, string judul, int tahun){
    head = new Buku();
    head->author = author;
    head->judul = judul;
    head->tahun = tahun;
    head->next = NULL;
    tail = head;}

void addFirst(string author, string judul, int tahun){
    newNode = new Buku();
    newNode->author = author;
    newNode->judul = judul;
    newNode->tahun = tahun;
    newNode->next = head;
    head = newNode;
}

void addLast(string author, string judul, int tahun){
    lastNode = new Buku();
    lastNode->author = author;
    lastNode->judul = judul;
    lastNode->tahun = tahun;
    lastNode->next = NULL;
    tail->next = lastNode;
    tail = lastNode;

}

void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

void removeLast(){
    del = tail;
    cur = head;
    while (cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
}

void changeFirst(string author, string judul, int tahun){
    head->author = author;
    head->judul = judul;
    head->tahun = tahun;
}

void changeLast(string author, string judul, int tahun){
    tail->author = author;
    tail->judul = judul;
    tail->tahun = tahun;
}

void printSingleLinkedList(){
    cur = head;
    while (cur != NULL){
        cout << "Author  = " << cur->author << endl;
        cout << "Judul   = " << cur->judul << endl;
        cout << "Tahun   = " << cur->tahun << endl;
        cur = cur->next;
    }
}

int main(){
    SingleLinkedList("Layla","Belajar Sejarah",2019);
    printSingleLinkedList();
    cout << endl;

    addFirst("Siska","Berbagi Itu Indah",2020);
    printSingleLinkedList();
    cout << endl;

    addLast("Reza","Belajar Musik",2020);
    printSingleLinkedList();
    cout << endl;

//    removeFirst();
//    printSingleLinkedList();
//    cout << endl;

//    removeLast();
//    printSingleLinkedList();
//    cout << endl;
//
   changeFirst("Mika","Cerita Horrorku",2021);
   printSingleLinkedList();
   cout << endl;

    changeLast("Riksa","Hidup Itu Menyenangkan", 2021);
    printSingleLinkedList();
    cout << endl;

 return 0;
}
