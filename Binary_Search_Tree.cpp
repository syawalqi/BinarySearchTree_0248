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
};

