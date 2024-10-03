#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void insert(Node **head, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        delete head;
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    print(head);
    return 0;
}
