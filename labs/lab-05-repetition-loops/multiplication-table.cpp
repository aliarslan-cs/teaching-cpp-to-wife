#include <iostream>

void printTable(int number) {
    int result;
    for (int multiplier = 1; multiplier <= 10; multiplier++) {
    result = number * multiplier; 
    
        std::cout << number << "x" << multiplier << "=" << result << "\n";
    }
}


int main() {
    int number =4;
    printTable(number);
    return 0;
}
