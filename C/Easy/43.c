#include <stdio.h>

union MyUnion {
    int x;
    char c;
};

int main() {
    union MyUnion myUnion;
    MyUnion.x = 10;
    MyUnion.c = 'A'; 
    return 0;
}
