#include <iostream>
int main() {
    for(int number = 1; number < 5; number++) {
        std::cout << number << "\n";
    }

    int number = 1;
    while(number < 5) { 
        std::cout << number << "\n";
        number++;
    }
    
    do{std::cout << number << "\n"; 
        number++;
    } while(number < 3);

    return 0;
}
