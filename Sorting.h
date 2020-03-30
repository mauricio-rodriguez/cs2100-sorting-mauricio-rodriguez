

#ifndef CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H
#define CS2100_SORTING_MAURICIO_RODRIGUEZ_SORTING_H

#include <iostream>
#include <vector>
class Sorting {
private:
    std::vector<int> &mainContainer;
    int prim;
    int ult;
    int max(std::vector<int> cont2);
    void combine(std::vector<int> &cont,std::vector<int> cont2,
            const int &first, int &mit,const int &mit1,const int &last);
public:
    explicit Sorting(std::vector<int> &container,const int &prim,const int &ult) : mainContainer(container),
    prim(prim), ult(ult){mergeSort(prim,ult);}

    void mergeSort(const int first,const int last );
};


#endif 