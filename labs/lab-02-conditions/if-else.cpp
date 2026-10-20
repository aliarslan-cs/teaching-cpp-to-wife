#include <iostream>

int main () {
    int age = 54;

    if (age <= 13) {
        std::cout << "You are a child!\n";
    }
    else if (age <= 18) {
        std::cout << "You are a teenager!\n";
    }    
    else {
    std::cout << "You are an adult!\n";    
    }     

    return 0;
}
