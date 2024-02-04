#include "main.h"
#include <iostream>

int main() {
    struct Coordinate {
      int x, y, z;
    };
    struct Coordinate origin = {0, 0, 0};
    struct Coordinate *origin_pointer = &origin;
    std::cout << origin.x << std::endl;
    return 0;
 }
