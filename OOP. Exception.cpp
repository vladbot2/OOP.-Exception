using namespace std;
#include <iostream>

//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
//};
//
//class DoublyLLList {
//    Node* head = nullptr;
//    Node* tail = nullptr;
//
//public:
//    void Append(int value) {
//        Node* newNode = new Node(value);
//        if (head == nullptr) head = tail = newNode;
//        else {
//            tail->next = newNode;
//            newNode->prev = tail;
//            tail = newNode;
//        }
//    }
//
//    void RemovtF() {
//        if (head == nullptr) 
//            return;
//        Node* temp = head;
//        head = head->next;
//        if (head != nullptr) 
//            head->prev = nullptr;
//        else tail = nullptr;
//    }
//
//    void PrintTest() {
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << " " << endl;
//            temp = temp->next;
//        }
//    }
//    void RemovtL() {
//        if (tail == nullptr) 
//            return;
//        Node* temp = tail;
//        tail = tail->prev;
//        if (tail != nullptr) 
//            tail->next = nullptr;
//        else head = nullptr;
//    }
//    void removeAt(int index) {
//        if (index == 0) {
//            RemovtF();
//            return;
//        }
//        Node* temp = head;
//        int i = 0;
//        while (temp != nullptr) {
//            if (i == index)
//            temp = temp->next;
//            i = i + 1;
//        }
//
//        if (temp == nullptr)
//            return;
//        if (temp == tail) RemovtL();
//        else RemovtMidle(temp);
//    }
//    void RemovtMidle(Node* temp) {
//        if (temp == nullptr)
//
//        temp->prev->next = temp->next;
//        temp->next->prev = temp->prev;
//    }
//};
//
//int main() {
//    DoublyLLList list;
//    list.Append(10);
//    list.Append(20);
//    list.Append(30);
//    list.PrintTest();
//    list.removeAt(1);
//    list.PrintTest();
//    list.removeAt(0);
//    list.PrintTest();
//}

//2
class VariousSituations {
public:

