#include <iostream>
#include <string>

int main() {
    std::string snackName;
    int quantity;
    double price;


    std::cout << "Name of the snack: ";
    std::cin >> snackName;
    

    std::cout << "Quantity of the snack: ";
    std::cin >> quantity;


    std::cout << "price of one snack: ";
    std::cin >> price;

    double totalcost = quantity * price;

    std::cout << "Snack: " << snackName <<  std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Totalcost: " << totalcost << std::endl;



    return 0;
}

