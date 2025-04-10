#include "RecursiveBinarySearch.h"
bool RecursiveBinarySearch::search(std::vector<int>list, int item){
    return binarySearch(list, item, 0, list.size()-1);
}
bool RecursiveBinarySearch::binarySearch(const std::vector<int>&list, int item, int low, int high){
    if (low>high) return false;
    int between=low+(high-low)/2;
    if (list[between]==item)return true;
    else if (item< list[between])
        return binarySearch(list, item, low, between-1); // calls bi search with indices
    else
        return binarySearch(list, item, between+1, high); //divide list 4 rec search

}
