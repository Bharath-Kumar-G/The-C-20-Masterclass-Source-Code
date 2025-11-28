#include <iostream>

int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int subnumbers(int first_param, int second_param);
int mulnumbers(int first_param, int second_param)
{
    return first_param * second_param;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl; // 13
    std::cout << "Second number : " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; // 32

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(3,42) << std::endl;
    std::cout << "Diff : " << subnumbers(first_number, second_number) << std::endl;
    std::cout << "mul : " << mulnumbers(first_number, second_number) << std::endl;

    return 0;
}


int subnumbers(int first_param, int second_param)
{
    int result = first_param - second_param;
    return result;
}