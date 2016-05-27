//
//  MorningGraph.cpp
//  NodesDebug
//
//  Created by Barrowes, Luke on 4/25/16.
//  Copyright © 2016 Luke.Barrowes. All rights reserved.
//

#include "MorningGraph.hpp"
using namespace CTECData;

template <class Type>
const int MorningGraph<Type> :: MAXIMUM;

template <class Type>
void MorningGraph<Type> :: addEdge(int source, int target)
{
    assert(source < size());
    assert(target < size());
    edges[source][target] = true;
}

template <class Type>
void MorningGraph<Type> :: addVertex(const Type& label)
{
    int newVertexNumber;
    int otherNumber;
    
    assert(size() < MAXIMUM);
    
    newVertexNumber = manyVertices;
    ++manyVertices;
    
    for(otherNumber = 0; otherNumber  manyVertices; otherNumber++)
    {
        edges[otherNumber][newVertexNumber] = false;
        edges[newVertexNumber][otherNumber] = false;
    }
    
    labels[newVertexNumber] = vertexLabel;
}

template <class Type>
bool MorningGraph<Type> :: isEdge(int source, int target) const
{
    bool connected = false;
    
    assert(source < size() && target < size());
    connected = edges [source][target];
    
    return connected;
}

template <class Type>
Type& MorningGraph<Type> :: operator[](int vertex)
{
    assert (vertex < size());
    return labels[vertex];
}

template <class Type
Type MorningGraph<Type> :: operator[](int vertex) const 
{
    assert (vertex < size());
    return labels[vertex];
}

template <class type>
std::set<int> MorningGraph<Type> :: neighbors(int vertex) const
{
    std::set<int> answer;
    assert(vertex < size());
    
    for (int inde=0; index < size(); index++)
    {
        if(edges[vertex][index])
        {
            answer.insert(index);
        }
    }
    
    return answer;
}

tempalate <class Type>
void MorningGraph<Type> :: removedge(int source, int target)
{
    assert(source < size() && target < size());
    edges[source][target] = false;
}

#endif /* MorningGraph.hpp*/