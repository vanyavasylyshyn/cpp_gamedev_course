#include <iostream>
#include <numbers>

void part_1();
void part_2();
void part_3();
void part_4();
void part_5();

int main() {
    // Homework part 1:
    part_1();

    // Homework part 2:
    part_2();

    // Homework part 3:
    part_3();

    // Homework part 4:
    part_4();

    // Homework part 5:
    part_5();

    return 0;
}

void part_1() {
    int seconds;

    std::cout << "Enter number of seconds player have been in game: ";
    std::cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remained_seconds = seconds % 60;

    std::cout << hours << " hour, " << minutes << " minutes, " << remained_seconds << " seconds"<< std::endl;
}

void part_2() {
    int first_i, second_i, third_i;

    std::cout << "Enter three numbers: ";
    std::cin >> first_i >> second_i >> third_i;

    std::cout << "Sum: " << first_i + second_i + third_i << std::endl;
    std::cout << "Multiplication: " << first_i * second_i * third_i << std::endl;
    std::cout << "Arithmetic mean: " << (first_i + second_i + third_i) / 3 << std::endl;
}

void part_3() {
    int first_i, second_i;

    std::cout << "Enter two numbers: ";
    std::cin >> first_i >> second_i;

    bool lessThan = first_i < second_i;
    bool equal = first_i == second_i;
    bool moreThan = first_i > second_i;
    bool lessOrEqual = first_i <= second_i;

    std::cout << "Less than: " << std::boolalpha << lessThan << std::endl;
    std::cout << "Equal: " << std::boolalpha << equal << std::endl;
    std::cout << "More than: " << std::boolalpha << moreThan << std::endl;
    std::cout << "Less or Equal: " << std::boolalpha << lessOrEqual << std::endl;
}

void part_4() {
    int width, height;

    std::cout << "Enter width and height: ";
    std::cin >> width >> height;

    std::cout << "Area: " << width * height << std::endl;
    std::cout << "Perimeter: " << (width * 2) + (height * 2) << std::endl;
}

void part_5() {
    int circle_radius;

    std::cout << "Enter radius: ";
    std::cin >> circle_radius;

    std::cout << "Area of circle: " << (circle_radius * circle_radius) * std::numbers::pi_v<double> << std::endl;
    std::cout << "Circle length: " << 2 * std::numbers::pi_v<double> * circle_radius << std::endl;
}