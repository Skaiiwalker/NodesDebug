//
//  HashTable.hpp
//  NodesDebug
//
//  Created by Barrowes, Luke on 5/27/16.
//  Copyright © 2016 Luke.Barrowes. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

namespace CTECData
{
    template <class Type>
    class HashTable
    {
    private:
        int size;
        int capacity;
        HashNode<Type> * internalStorage;
        
        int chainedCapacity;
        int chainedSize;
        CTECList<HashNode<Type>> * chainedStorage;
        void updateChainedCapacity();
        
        double efficiencyPercentage;
        
        int findPosition(HashNode<Type> currentNode);
        int handleCollision(HashNode<Type> currentNode);
        void updateCapacity();
        int getNextPrime();
        bool isPrime(int candidateNumber);
    public:
        CTECHashTable();
        ~CTECHashTable();
        void add(HashNode<Type> currentNode);
        void addChained(HashNode<Type> currentNode);
        bool remove(HashNode<Type> currentNode);
        bool contains(HashNode<Type> currentNode);
        int getSize();
    };
}


#endif /* HashTable_hpp */
