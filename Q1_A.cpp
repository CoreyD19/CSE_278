
#include <iostream>
// declare variables 
unsigned int width;
unsigned int length;
unsigned int perimeter;
unsigned int area;


int main() {
    std::cout << "Type the length of the rectangle: "; // get input 
    std::cin >> length; // store answer 
    std::cout << "Type the width of the rectangle: "; 
    std::cin >> width;
    perimeter = (width*2) + (length*2); // add up the sides 
    area = (width*length); // multiply together 
    std::cout << "The perimeter is: " << perimeter << "\n"; // output
    std::cout << "The area is: " << area << "\n";

    return 0;
}

