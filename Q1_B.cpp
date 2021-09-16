#include <iostream>
#include <cmath>

double PI = 3.142; // declare PI 
unsigned int radius; // make variables 
float area;


int main() {
    std::cout << "Type the radius of the circle: "; // get input from user
    std::cin >> radius; // store input 
    area = (radius*radius)*(PI); // area = PI * radius squared 
    area = std::ceil(area*100.0) / 100.0; // round to two points
    std::cout << "The area is: "  << area << std::endl; // output area

    return 0;
}

