
#ifndef CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H
#define CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H

#include <iostream>
#include <vector>
class Sorting {
private:
    std::vector<int> &mainContainer;
    int prim;
    int ult;
    void swap(const int first, const int second);
    void push(const int &first,const int &last,const int i);
public:
    explicit Sorting(std::vector<int> &container,const int &prim,const int &ult) : mainContainer(container),
    prim(prim), ult(ult){heapSort(prim,ult);}

    void heapSort(const int first,const int last );
    void doHeap(const int &first,const int &last);
};


#endif 