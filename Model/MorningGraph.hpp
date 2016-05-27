//
//  MorningGraph.hpp
//  NodesDebug
//
//  Created by Barrowes, Luke on 4/25/16.
//  Copyright © 2016 Luke.Barrowes. All rights reserved.
//

#ifndef MorningGraph_hpp
#define MorningGraph_hpp
#include <set>

namespace CTECData
{
    template <class Type>
    class MorningGraph
    {
    private:
        static const int MAXIMUM = 20;
        bool edges [MAXIMUM][MAXIMUM]; //This is the adjacency matrix.
        Type labels [MAXIMUM];
        int manyVertices;
    private:
        MorningGraph();
        virtual ~MorningGraph();
        
        void addVertex(const Type& label);
        void addEdge(int source, int target);
        void removeEd(int source, int target);
        Type& operator [] (int vertex);
        int size() const;
        bool isEdge(int source, int target) const;
        std::set<int> neighbors(int vertex) const;
        Type operator [] (int vertex) const;
    };
}

#endif /* MorningGraph_hpp */
