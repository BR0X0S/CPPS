
#include <iostream>
#include <vector>
#include <algorithm>

// for (int i : x)
//     std::cout << i << std::endl;

void printVec(std::vector<int> x)
{
    for (std::vector<int>::iterator it = x.begin(); it != x.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    // std::cout << x.capacity() << '\n' << x.size() << std::endl;
    printVec(x);
    std::reverse(x.begin(), x.end());
    x.push_back(0);
    std::reverse(x.begin(), x.end());
    printVec(x);
}
