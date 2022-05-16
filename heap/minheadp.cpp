#include<iostream>
using namesapce std;
void swap(int *xp, int *yp);

class minHeap{
    int *harr; // pointer to array of elements in heap;
    int capacity; // max possible size of min heap
    int headpSize; //current number of elements in min heap

public:
    minHeap(int capacity);
    void minHeapify(int);
    int parent(int i){
        return (i - 1)/2;
    }
    int left(int i){
        return (2 * i + 1);
    }
    int right(int i){
        return (2 * i + 2);
    }
    int extractMin();
    void decreaseKey()
};
