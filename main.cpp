#include "main.h"

int main() {
    curl_global_init(CURL_GLOBAL_SSL);
    struct Coordinate {
      int x, y, z;
    };
    struct Coordinate origin = {0, 0, 0};
    struct Coordinate *origin_pointer = &origin;
    std::cout << origin.x << std::endl;
    curl_global_cleanup();
    return 0;
 }
