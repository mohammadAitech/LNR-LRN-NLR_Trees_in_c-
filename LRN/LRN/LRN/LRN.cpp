#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = left;
        this->right = right;
    }

};

class BinaryTree {
public:
    Node* root;
    BinaryTree() { root = nullptr; }

    void postorder(Node* node) {
        if (node != nullptr) {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }
};


int main()
{
    BinaryTree btree;
    btree.root = new Node(1);
    btree.root->left = new Node(3);
    btree.root->right = new Node(4);
    btree.root->left->left = new Node(7);
    btree.root->left->right = new Node(8);

    cout << "postorder (LRN)" << endl;
    btree.postorder(btree.root);
    cout << endl;


    return 0;
}

