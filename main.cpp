
#include <iostream>
using namespace std;

int main(int, char*[]){
    vector<int> vec{1,7,9,2,0,3,5,0,3,4};
    Sorting sort(vec,0,vec.size());
    for (int  i = 0;i<vec.size();i++)
        cout<<vec[i];
    return 0;
}