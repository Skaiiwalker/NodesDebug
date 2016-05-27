//
//  CTECBinaryTree.hpp
//  NodesDebug
//
//  Created by Barrowes, Luke on 4/13/16.
//  Copyright © 2016 Luke.Barrowes. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include <stdio.h>

namespace CTECData
{
template <class Type>
class CTECBinaryTee
    {
    private:
        TreeNode<Type> * root
        int height;
        int size;
        bool balanced;
        bool contains(Type value, CTECBinaryTree<Type> * currentTree); //Done.
        void calculatedSize(TreeNode<Type> * currentNode); //Done
        TreeNode<Type> * getRightMostChild(CTECBinaryTree * leftSubTree);
        TreeNode<Type> * getLeftMostChild(CTECBinaryTree * rightSubTree);
    public:
        CTECBinaryTree();
        ~CTECBinaryTree();
        bool insert(const Type& value); //Done
        bool contans(T value);
        Type remove(const Type& value);
        int getHeight();
        int getSize;
        bool isBalanced();
        TreeNode<Type> * getRoot();
        void inorderTraversal(TreeNode<Type> * currentNode);
        void postorderTraversal(TreeNode<Tpe> * currentNode);
        void preorderTraversal(TreeNode<Type> * currentNode);
    };
}

#endif /* CTECBinaryTree_hpp */
