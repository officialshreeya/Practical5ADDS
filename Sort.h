#ifndef SORT_H
#define SORT_H
#include <vector>
class Sort{ //abs clss
public:
    virtual std::vector<int>sort(std::vector<int>list)=0;
    virtual ~Sort() {}
};
#endif