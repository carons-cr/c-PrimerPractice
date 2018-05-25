#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> num1 >> num2;
    if (num1 > num2) {
        int temporary = num1;
        num1 = num2;
        num2 = temporary;

    }
    std::cout << "all nums from " << num1 << " to " << num2 << ":" << std::endl;
    while (num1 <= num2) {
	std::cout << num1++ << std::endl;
    }

    return 0;
}
