#include <iostream>

int main()
{
    int newValue = 0;
    int value = 0;
    std::cout << "enter some numbers, i will caculate number`s count: " << std::endl;
    if (std::cin >> newValue) {
	int count = 1;
	while (std::cin >> value) {
	    if (value == newValue) {
		++count;
	    } else {
		std::cout << newValue << " occurs " << count << " times" << std::endl;
		newValue = value;
		count = 1;
	    }
	}
	std::cout << newValue << " occurs " << count << " times" << std::endl;
    }
    return 0;
}
