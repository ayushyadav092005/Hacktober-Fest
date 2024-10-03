#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto it = std::remove(vec.begin(), vec.end(), 3); 
    vec.erase(it, vec.end());

    for (int i : vec) {
        std::cout << i << " ";  
    }
    std::cout << std::endl;

    return 0;
}
