//
//  CTECBinaryTree.cpp
//  NodesDebug
//
//  Created by Barrowes, Luke on 4/13/16.
//  Copyright © 2016 Luke.Barrowes. All rights reserved.
//

#include "CTECBinaryTree.hpp"

using namespace std;

template <class Type>
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        inordTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << " " ;
        inorderTraversal(currentNode->getRightChild());
        
    }
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value, CTECBinaryTree<Type> * currentTree)
{
    if(currentTree->getRoot()->getValue() == value)
    {
        return true;
    }
    
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value, CTECBinaryTree<Type> * currentTree)
{
    if(currentTree == nullptr)
    {
        return false;
    }
    if(currentTree->getRoot()->getValue() == value)
    {
        return true;
    }
    else if(value < currentTree->getRoot()->Value())
    {
        return contains(value, currentTree->getRoot()->getLeftChild());
    }
    else
    {
        (return contains(value, root->getRightChild());
    }
    return false;
}

template <class Type>
bool CTECBinaryTree<Type> :: insert(const Type value)
{
    if(contains(value))
    {
        return false;
    }
    else
    {
        if(value < root->getValue())
        {
            insert(value, root->getLeftChild());
        }
        else
        {
            insert(value, root->getRightChild());
        }
        return true;
    }
}

template <class Type>
TreeNode<Type> * CTECBinaryTree :: getRightMostChild(CTECBinaryTree<Type> leftSubTree)
{
    TreeNode<Type> * rightNode = leftSubTree->getRoot();
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
            
    return rightNode;
}
         
template <class Type>
TreeNode<Type> * CTECBinaryTree :: getLeftMostChild(CTECBinaryTree<Type> rightSubTree)
{
    TreeNode<Type> * leftNode = rightSubTree->getRoot();
    while(leftNode->getLeftChild() != nullptr)
    {
        leftNode = leftNode->getLeftChild();
    }
            
    return leftNode;
}