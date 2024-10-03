#include <iostream>

class DeepCopy {
private:
    int* data;

public:
    DeepCopy(int value) {
        data = new int(value);
    }

    ~DeepCopy() {
        delete data;
    }

    Deep
