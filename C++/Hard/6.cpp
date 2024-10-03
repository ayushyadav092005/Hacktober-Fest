#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->left = newNode->right = NULL;
        return root;
    }
    if (val < root->data)
    {
        insert(root->left, val);
    }
    else
    {
        insert(root->right, val);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 20);
    return 0;
}
