#include <iostream>
#include <string>

int main() {
    std::string snackName;
    int quantity;
    double price;


    std::cout << "Lays: ";
    std::cin >> snackName;
    

    std::cout << "3: ";
    std::cin >> quantity;


    std::cout << "5: ";
    std::cin >> price;

    double totalcost = quantity * price;

    std::cout << "Snack: " << snackName <<  std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Totalcost: " << totalcost << std::endl;



    return 0;
}

