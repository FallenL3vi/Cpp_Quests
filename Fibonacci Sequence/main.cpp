#include <iostream>
#include <vector>

#include <cmath>

using namespace std;

const float GOLDEN_RATIO = 1.618034;

void fibonacci_sequence(std::vector<long long int> numbers){

    numbers.clear();

    unsigned long long int new_number = 0;

    numbers.push_back(0);
    numbers.push_back(1);

    while(true){
        new_number = numbers[numbers.size() - 2] + numbers[numbers.size() - 1];

        numbers.push_back(new_number);

        std::cout << numbers[numbers.size() - 1] << ", \n";
    }

}

void fibonacci_sequence_negative(std::vector<long long int>numbers){

    long long int new_number = 0;

    long long int positive_number = 0;
    long long int negative_number = 0;

    std::cout << std::pow(GOLDEN_RATIO,(-1 * new_number)) - std::pow((1.f - GOLDEN_RATIO), new_number);
    while(true){

        positive_number = std::round(
                                     (std::pow(GOLDEN_RATIO,std::abs(new_number))
                                      -std::pow((1.f - GOLDEN_RATIO), new_number))
                                     /std::sqrt(5));

        negative_number =   std::pow(-1,(new_number+1))*positive_number;

        std::cout << new_number * -1 << " : " << negative_number << ", " << std::endl;

        new_number += 1;
    }
}


void fibonacci_two_values(){

    long long int new_number = 0;
    long long int first_number;
    long long int second_number;

    std::cin >> first_number;
    std::cin >> second_number;

    std::cout << std::endl;

    std::cout << first_number << ", " << std::endl;
    std::cout << second_number << ", " << std::endl;

    while(true){

        new_number = first_number + second_number;

        std::cout << new_number << ", " << std::endl;

        first_number = second_number;
        second_number = new_number;
    }
}

void fibonacci_number(){

    int start_number = 0;
    long long int positive_number = 0;

    std::cin >> start_number;

    std::cout << std::endl;

    while(true){
    positive_number = std::round((std::pow(GOLDEN_RATIO,std::abs(start_number))
                                      -std::pow((1.f - GOLDEN_RATIO), start_number))
                                     /std::sqrt(5));

    std::cout << start_number << " : " << positive_number << ", " << std::endl;
    start_number += 1;
    }

}

int main()
{
    std::vector <long long int>  numbers;

    std::cout << "1. Fibonacci sequence \" Plus \"\n";
    std::cout << "2. Fibonacci sequence \" Negative \"\n";
    std::cout << "3. Fibonacci sequence from the two input values\n";
    std::cout << "4. Fibonacci sequence from start with the number \"n\"\n";

    int input;

    std::cin >> input;

    std::cout << std::endl;

    switch(input){
    case 1:
        {
            fibonacci_sequence(numbers);
            break;
        }
    case 2:
        {
            fibonacci_sequence_negative(numbers);
            break;
        }
    case 3:
        {
            fibonacci_two_values();
            break;
        }
    case 4:
        {
            fibonacci_number();
            break;
        }
    default:
        break;
    }

    return 0;
}
