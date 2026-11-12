#include <iostream>

void printTable(int number) {
    int result;
    for (int multiplier = 1; multiplier <= 10; multiplier++) {
    result = number*multiplier; 
    
        std::cout << number << "x" << multiplier << "=" << number*multiplier << "\n";
    }
}


int main() {
    int number = 2;
    printTable(number);
    return 0;
}
