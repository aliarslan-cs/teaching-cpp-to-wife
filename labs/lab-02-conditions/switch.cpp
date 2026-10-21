#include <iostream>

int main () {
    
    int menuNumber = 5;

    switch (menuNumber)  {
        case 1:
            std::cout << "Water\n";
            
    
        case 2:
            std::cout << "Juice\n";
            break;

        case 3:
            std::cout << "Tea\n";
            break;
        default:
             std::cout << "That Drint is Not In The Menu\n";
             break;
    }
    return 0;
}   