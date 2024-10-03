#include <iostream>
#include <vector>
#include <algorithm>

bool customCompare(int a, int b) {
    return a < b;  
}

int main() {
    std::vector<int> vec = {5, 1, 4, 3, 2};

    std::sort(vec.begin(), vec.end(), customCompare);  

    for (int i : vec) {
        std::cout << i << " ";  
    }
    std::cout << std::endl;

    return 0;
}
