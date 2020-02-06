#include<iostream>
#include "list.h"
using namespace std;

node::node()
{
    int data=0;
    right=NULL;
    left=NULL;
}
node::~node()
{
    if(right)
    {
        delete right;
        right=NULL;
    }
    if(left)
    {
        delete left;
        left=NULL;
    }
}
BST::BST()
{
    root=NULL;
}
BST::~BST()
{
    delete root;
    root=NULL;
}
int BST::add_data(int option1)
{
    return add_data(root,option1);
}

int BST::add_data(node *root,int value1)
{

    if(root==NULL)
    { 
        node*new_node=new node;
        new_node->data=value1;
        new_node->right=NULL;
        new_node->left=NULL;

        return 1;
    }
    else if(root->data>value1)
    {
        return add_data(root->left,value1);
    }
    else
    {
        return add_data(root->right,value1);
    }
}
int BST::print_tree()
{
    return print_tree(root);
}
int BST::print_tree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    cout<<" test ***************"<<endl;
    print_tree(root->left); 
    cout<<root->data<<endl;
    print_tree(root->right);
}

















