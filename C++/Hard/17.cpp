#include <iostream>
#include <utility>

class Resource {
public:
    int* data;
    
    Resource() : data(new int(100)) {}
    
    ~Resource() { delete data; }

    Resource(const Resource& other) {
        data = new int(*other.data);  
    }

    Resource& operator=(const Resource&& other) {  
        delete data;
        data = other.data;  
        return *this;
    }
};

int main() {
    Resource r1;
    Resource r2;
    r2 = std::move(r1);  

    return 0;
}
