#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void deleteNode(Node *head, int key)
{
    if (head == NULL)
        return;
    Node *temp = head;
    if (temp->data == key)
    {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->next->data != key)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return;
    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}
int main()
{
    Node *head = NULL
        deleteNode(head, 3);
    return 0;
}
