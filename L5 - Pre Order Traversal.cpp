#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void preorder(Node* node) {
    if(node == NULL) {
        return;
    }
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    
    cout << root->left->data << endl;
    
    Node rooot(3);

    // Add left and right children (stack allocation)
    Node leftChild(2);
    Node rightChild(5);

    // Link children to root
    rooot.left = &leftChild;
    rooot.right = &rightChild;

    // Print values
    cout << "Root: " << rooot.data << endl;
    cout << "Left Child: " << rooot.left->data << endl;
    cout << "Right Child: " << rooot.right->data << endl;

    return 0;
    
    
}
