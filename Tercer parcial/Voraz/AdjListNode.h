#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <iostream>

using namespace std;

class AdjListNode{
    private:
        int dest;
        int weight;
        AdjListNode* next;
    public:
        AdjListNode(int d, int w){
            dest = d;
            weight = w;
        }
        int getDest(){
            return dest;
        }
        int getWeight(){
            return weight;
        }
        AdjListNode* getAdjListNode(){
            return next;
        }

        void setDest(int _dest){
            dest = _dest;
        }
        void setWeight(int _weight){
            weight = _weight;
        }
        void setAdjListNode(AdjListNode* _next){
            next = _next;
        }
};