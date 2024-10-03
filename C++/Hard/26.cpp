#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (*it == 3) {
            vec.erase(it);  
        }
    }

    for (auto& val : vec) {
        std::cout << val << " ";  
    }
    std::cout << std::endl;

    return 0;
}
