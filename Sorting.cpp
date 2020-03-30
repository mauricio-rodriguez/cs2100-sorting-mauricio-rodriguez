
#include "Sorting.h"
void Sorting::combine(std::vector<int> &cont,std::vector<int> lcont,const int &first,int &mit,const int &mit1, const int &last) {
    int i1 = first ;int i2 = mit1;
    int temp;
   /* for (int i =0 ;i <last;i++)
        std::cout<<lcont[i];
    std::cout<<std::endl;*/
    if (first>mit || mit1>last){}
    else{
        for (int k=first;k<last;k++){
            if (lcont[i1]<=lcont[i2]){
                cont[k]= lcont[i1];
                if (i1<mit)
                    i1++;
                else
                    lcont[i1] = max(lcont);
            }
            else{
                cont[k] = lcont[i2];
                if (i2<last)
                    i2++;
                else
                    lcont[i2] = max(lcont);
            }
        }
    }
}

void Sorting::mergeSort(const int first, const int last) {
    if (first<last){
        int mitad = (first+(last))/2;
        mergeSort(first,mitad);
        mergeSort(mitad+1,last);
        combine(mainContainer,mainContainer,first,mitad,mitad+1,last);
    }
}

int Sorting::max(std::vector<int> cont2) {
    auto max = cont2[0];
    std::cout<<max;
    for (int i =0 ;i<cont2.size();i++)
        if (cont2[i]>max)
            max = cont2[i];
    return max;
}
