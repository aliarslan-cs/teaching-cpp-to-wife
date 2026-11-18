#include <iostream>
#include <string>

int main() {
    std::string snackName;
    int quantity;
    double price;


    std::cout << "Enter snack name: ";
    std::cin >> snackName;
    

    std::cout << "Enter quantity: ";
    std::cin >> quantity;


    std::cout << "Enter price of one snack: ";
    std::cin >> price;

    double total cost = quantity * price;

    std::cout << "Snack: " << snackName <<  std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Total cost: " << total cost << std::endl;



    return 0;
}

