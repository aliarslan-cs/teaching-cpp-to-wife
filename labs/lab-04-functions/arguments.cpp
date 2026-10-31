#include <iostream>

void increaseCopy(int& value) {
    value = 5 + value;
    std::cout << "we are inside fumction:" << value<< "\n";

}
int addScores(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int score = 5;
    increaseCopy(score);
    std::cout << "we are outside function:" << score<< "\n";
    int a = addScores(3, 2);
    std::cout << "kuch bhe:" << a<< "\n";
    return 0;
}