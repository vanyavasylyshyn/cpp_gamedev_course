#include <iostream>

void build_triangle(int rows_num);

int main() {
    std::cout << "I love C++!" << std::endl;

    build_triangle(10);
}

void build_triangle(const int rows_num) {
    for(int i = 0; i < rows_num; i++) {
        std::cout << std::string(i, '*') << std::endl;
    }
}
