#include <iostream>

int main()
{
    int sum = 0;
    int value = 0;
    std::cout << "enter some numbers: " << std::endl;
    while (std::cin >> value) {
	sum += value;
        std::cout << sum << std::endl;
    }
    std::cout << "their sum is: " << sum << std::endl;
    return 0;
}
