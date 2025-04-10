#include "BubbleSort.h"
std::vector<int>BubbleSort::sort(std::vector<int>list){
    int SizeStore=list.size();
    for (int i=0; i<SizeStore-1;++i) //sort list asc orrder
        for (int j=0;j<SizeStore-i-1;++j)
            if (list[j]> list[j+1])
                std::swap(list[j],list[j+1]); //Swap element if nextis big
    return list;
}