#include <iostream>

int main() {
    int students = 5;
    int pencilsPerstudent = 2;
    int requiredPensils = students * pencilsPerstudent;
     
    std::cout << "required pencils: " << requiredPensils << "\n";

    int pencilsPerPack = 5;

    int boxesRequired = requiredPensils / pencilsPerPack;
        
    // if we need one more box
    if ((requiredPensils % pencilsPerPack) != 0) {
        std::cout << "added 1 extra box"<< "\n";
        boxesRequired = boxesRequired + 1;
    }
    int availablePencils = boxesRequired * pencilsPerPack;
    std::cout << "boxes required: " << boxesRequired << std::endl;
    std::cout << "leftover pencils: " << availablePencils - requiredPensils << std::endl;

    double doublepricePerPack = 3.5;
    std::cout << "doubletotal: "<< doublepricePerPack * boxesRequired << std::endl;

    return 0;
}