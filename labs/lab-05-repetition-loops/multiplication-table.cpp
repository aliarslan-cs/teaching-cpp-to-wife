#include <iostream>

void printTable(int number) {
    
    for (int multiplier = 1; multiplier <= 10; multiplier++) 
        std::cout << number << "x" << multiplier << "=" << result << "\n";
}

int main() {
    int number = 2;
    printTable(number);
    return 0;
}
