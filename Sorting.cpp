#include "Sorting.h"

void Sorting::doHeap(const int &first, const int &last) {
    for (int i= (last-first+1)/2 ;i>1;i--)
        push(first,last,first+i-1);
}

void Sorting::heapSort(const int first, const int last) {
    doHeap(first,last);
    for (int i=last;i>first+1;i--){
        swap(first,i);
        push(first,i-1,first);
    }
}

void Sorting::push(const int &first, const int &last, const int i) {
    int k = i-first+1;
    int j=k;
    while (j!=k){
    if (2*j<=(last-first+1) && mainContainer[2*j+first-1]> mainContainer[k+first-1])
        k= 2*j;
    if (2*j<(last-first+1) && mainContainer[2*j+first]> mainContainer[k+first-1])
        k = 2*j+1;
    swap(j+first-1,k+first-1);
    }
}

void Sorting::swap(const int first, const int second) {
    int temp = mainContainer[first];
    mainContainer[first] = mainContainer [second];
    mainContainer[second] = temp;
}

