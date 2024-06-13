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
    }
};

