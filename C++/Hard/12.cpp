#include <iostream>

class Node {
public:
    int value;
    Node* next;

    Node(int v) : value(v), next(nullptr) {}
};

class CircularList {
private:
    Node* head;

public:
    CircularList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            head->next = head;  
        } else {
            Node* temp = head;
            while (temp->next != head) {  
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteNode(int value) {
        if (head == nullptr) return;

        Node* temp = head;
        Node* prev = nullptr;

        do {
            if (temp->value == value) {
                if (prev == nullptr) {  
                    Node* last = head;
                    while (last->next != head) {
                        last = last->next;
                    }
                    last->next = head->next;
                    delete head;
                    head = last->next;
                } else {
                    prev->next = temp->next;
                    delete temp;
                }
                return;
            }
            prev = temp;
            temp = temp->next;
        } while (temp != head);  
        
    }

    void printList() const {
        if (head == nullptr) return;

        Node* temp = head;
        do {
            std::cout << temp->value << " ";
            temp = temp->next;
        } while (temp != head);

        std::cout << std::endl;
    }
};

int main() {
    CircularList cl;
    cl.insert(1);
    cl.insert(2);
    cl.insert(3);
    cl.printList();

    cl.deleteNode(2);  
    cl.printList();

    cl.deleteNode(1);  
    cl.printList();

    return 0;
}
