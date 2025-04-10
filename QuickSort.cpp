#include "QuickSort.h"
std::vector<int>QuickSort::sort(std::vector<int>list){
    quickSort(list, 0, list.size()-1); //sort the full list quicksorthelp
    return list;
}
void QuickSort::quickSort(std::vector<int>&list, int low, int high){
    if (low<high) {
        int points= divide(list, low, high);
        quickSort(list, low, points-1);
        quickSort(list, points+1, high);
    }
}
int QuickSort::divide(std::vector<int>& list, int low, int high){ //3rdelement as pivot n partlist around it
    int points= (high-low >= 2) ? low+2 : high;
    int pointValue= list[points];
    std::swap(list[points], list[high]);
    int i=low-1;
    for (int j=low;j<high;++j) {
        if (list[j]<=pointValue) {
            ++i;
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i+1], list[high]);
    return i + 1;
}