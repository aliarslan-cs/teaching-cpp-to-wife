#include <iostream>
int main () {

constexpr int daysInWeek = 7;
constexpr int studyHoursPerDay = 2;
constexpr int studyHoursPerWeek = studyHoursPerDay * daysInWeek;

    std::cout << "Study hours per day:" << studyHoursPerDay << std::endl;
    std::cout << "Study hours per week:" << studyHoursPerWeek << std::endl;

const double breakHoursPerDay = 0.5;
double totalBreakHours = breakHoursPerDay * daysInWeek;
    std::cout << "Break hours per day:" << breakHoursPerDay << std::endl;
    std::cout << "Total break hours per week:" << totalBreakHours << std::endl;

auto completedHours = 10;
    std::cout << "Completed hours (old):" << completedHours << std::endl;

completedHours += 5;
    std::cout << "Completed hours (updated):" << completedHours << std::endl;

    {
        int extraHours = 3;
        std::cout << "Completed + extra:" << completedHours + extraHours << std::endl;
        
    }

    return 0;
}
