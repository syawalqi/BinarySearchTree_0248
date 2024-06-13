#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    string info;
    Node *leftchild;
    Node *rightchild;

    Node(string i, Node *l, Node *r )
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }

};

class BinaryTree
{
public:
    Node* ROOT;
    BinaryTree()
    {
        ROOT = nullptr;    //initially ROOT is null
    }

    void Insert(string element)    //insert a node to the tree
    {
        Node* newNode = new Node(element, nullptr, nullptr);    //allocate memory for the node
        newNode ->info = element; //set the value of the node
        newNode ->leftchild = nullptr; //set the left child to null
        newNode ->rightchild = nullptr; //set the right child to null

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);  //locate the node which will be the parent of the new node

        if(parent == nullptr)    //if the tree is empty
        {
            ROOT = newNode;  //set the new node as the root
            return;
        }

        if (element < parent->info)    //if the new node is less than the parent
    }
};

