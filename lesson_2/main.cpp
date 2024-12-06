#include <iomanip>
#include <iostream>

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
    int first_int, second_int;

    std::cout << "Enter integer 1: " << std::endl;
    std::cin >> first_int;

    std::cout << "Enter integer 2: " << std::endl;
    std::cin >> second_int;

    int buffer_int = second_int;
    second_int = first_int;
    first_int = buffer_int;

    std::cout << "Entered integer 1: " << first_int << std::endl;
    std::cout << "Entered integer 2: " << second_int << std::endl << std::endl;
}

void part_2() {
    double double_variable = 8.8282828282;

    std::cout << "Double variable: " << std::setprecision(10) << double_variable << std::endl;
    std::cout << "Double variable cased to int: " << static_cast<int>(double_variable) << std::endl;
    std::cout << "Double variable aligned right:" << std::endl;
    std::cout << std::setw(20) << std::setfill('$') << std::right << std::setprecision(5) << double_variable << std::endl << std::endl;
}

void part_3() {
    double double_variable = 8.8282828282828282828;

    std::cout << "Double variable: " << std::setprecision(2) << double_variable << std::endl;
    std::cout << "Double variable: " << std::setprecision(5) << double_variable << std::endl;
    std::cout << "Double variable: " << std::setprecision(10) << double_variable << std::endl;
    std::cout << "Double variable: " << std::fixed << double_variable << std::endl;
    std::cout << "Double variable: " << std::scientific << double_variable << std::endl << std::endl;
}

void part_4() {
    enum class WeekDay {
        Monday = 1,
        Tuesday = 2,
        Wednesday = 3,
        Thursday = 4,
        Friday = 5,
        Saturday = 6,
        Sunday = 7
    };

    std::cout << "Monday: " << static_cast<int>(WeekDay::Monday) << std::endl;
    std::cout << "Tuesday: " << static_cast<int>(WeekDay::Tuesday) << std::endl;
    std::cout << "Wednesday: " << static_cast<int>(WeekDay::Wednesday) << std::endl;
    std::cout << "Thursday: " << static_cast<int>(WeekDay::Thursday) << std::endl;
    std::cout << "Friday: " << static_cast<int>(WeekDay::Friday) << std::endl;
    std::cout << "Saturday: " << static_cast<int>(WeekDay::Saturday) << std::endl;
    std::cout << "Sunday: " << static_cast<int>(WeekDay::Sunday) << std::endl << std::endl;
}

void part_5() {
    int number;

    std::cout << "Enter integer:" << std::endl;
    std::cin >> number;

    std::cout << "Entered number casted to bool: " << std::boolalpha << static_cast<bool>(number) << std::endl << std::endl;
}
