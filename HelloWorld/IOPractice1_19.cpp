#include <iostream>

int main()
{
    int startNum = 0;
    int endNum = 0;
    std::cout << "enter two numbers" << std::endl;
    std::cin >> startNum >> endNum;
    if (startNum > endNum) {
        int temporary = startNum;
        startNum = endNum;
        endNum = temporary;

    }
    std::cout << "all nums from " << startNum << " to " << endNum << ":" << std::endl;
    while (startNum <= endNum) {
        std::cout << startNum++ << std::endl;
    }
 
    return 0;
}





