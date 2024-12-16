#include <iostream>

void part_1();
void part_2();
void part_3();
void part_4();
void part_5();
void part_6();

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

    // Homework part 6:
    part_6();

    return 0;
}

void part_1() {
    int first_number, second_number, third_number;

    std::cout << "Enter three numbers: ";
    std::cin >> first_number >> second_number >> third_number;

    if (first_number > second_number && first_number > third_number) {
        std::cout << "The first number is the biggest: " << first_number << std::endl;
    } else if (second_number > first_number && second_number > third_number) {
        std::cout << "The second number is the biggest: " << second_number << std::endl;
    } else if (third_number > first_number && third_number > second_number) {
        std::cout << "The third number is the biggest: " << third_number << std::endl;
    }
}

void part_2() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 5 == 0 && number % 11 == 0) {
        std::cout << "Number is divisible by 5 and 11 simultaneously: " << number << std::endl;
    } else {
        std::cout << "Number is not divisible by 5 and 11 simultaneously" << std::endl;
    }
}

void part_3() {
    int first_angle, second_angle, third_angle;

    std::cout << "Enter three angles: ";
    std::cin >> first_angle >> second_angle >> third_angle;

    if ((first_angle + second_angle + third_angle) == 180) {
        std::cout << "Angles are able to make triangle" << std::endl;
    } else {
        std::cout << "Angles are not able to make triangle" << std::endl;
    }
}

void part_4() {
    int month_number;

    std::cout << "Enter a month number: ";
    std::cin >> month_number;

    switch (month_number) {
        case 12:
        case 1:
        case 2:
            std::cout << "Winter" << std::endl;
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Spring" << std::endl;
            break;
        case 6:
        case 7:
        case 8:
            std::cout << "Summer" << std::endl;
            break;
        case 9:
        case 10:
        case 11:
            std::cout << "Autumn" << std::endl;
            break;
        default:
            std::cout << "Unknown month" << std::endl;
    }
}

void part_5() {
    int first_number, second_number;

    std::cout << "Enter two numbers: ";
    std::cin >> first_number >> second_number;

    std::cout << "Min: " << (first_number < second_number ? first_number : second_number) << std::endl;
}

void part_6() {
    enum class Month {
        January = 1,
        February = 2,
        March = 3,
        April = 4,
        May = 5,
        June = 6,
        July = 7,
        August = 8,
        September = 9,
        October = 10,
        November = 11,
        December = 12
    };

    int month_number;

    std::cout << "Enter a month number: ";
    std::cin >> month_number;

    Month entered_month = static_cast<Month>(month_number);

    switch (entered_month) {
        case Month::January:
            std::cout << "January" << std::endl;
            break;
        case Month::February:
            std::cout << "February" << std::endl;
            break;
        case Month::March:
            std::cout << "March" << std::endl;
            break;
        case Month::April:
            std::cout << "April" << std::endl;
            break;
        case Month::May:
            std::cout << "May" << std::endl;
            break;
        case Month::June:
            std::cout << "June" << std::endl;
            break;
        case Month::July:
            std::cout << "July" << std::endl;
            break;
        case Month::August:
            std::cout << "August" << std::endl;
            break;
        case Month::September:
            std::cout << "September" << std::endl;
            break;
        case Month::October:
            std::cout << "October" << std::endl;
            break;
        case Month::November:
            std::cout << "November" << std::endl;
            break;
        case Month::December:
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Unknown month" << std::endl;
    }
}