#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
int main(){
    std::string numbers;
    std::getline(std::cin, numbers); // Read lines 4 input
    std::istringstream iss(numbers);
    std::vector<int>list; 
    int num;
    while (iss>>num) {
        list.push_back(num);
    }

    QuickSort sortingg;
    std::vector<int>result=sortingg.sort(list);
    RecursiveBinarySearch searching;
    bool iffound=searching.search(result, 1); // Search 4 num 1 in list
    std::cout << (iffound ? "true" : "false");
    for (int value : result) {
        std::cout << " " << value;
    }
    std::cout << std::endl;
    return 0;
}