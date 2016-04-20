//
//  TreeNode.hpp
//  NodesDebug
//
//  Created by Barrowes, Luke on 4/11/16.
//  Copyright © 2016 Luke.Barrowes. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <stdio.h>
#include "Node.h"

template <class Type>
class TreeNode : public Node<Type>
{
private:
    TreeNode<Type> * leftChild;
    TreeNode<Type> * rightChild;
    TreeNode<Type> * parent;
public:
    TreeNode();
    TreeNode(const Type & value);
    TreeNode(const Type & value, TreeNode<Type> * parent);
    
};



#endif /* TreeNode_hpp */
