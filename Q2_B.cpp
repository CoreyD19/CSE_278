#include <iostream>

int main(){
    std::string account = "21_CSE_c++_Fall";
    std::string password = "278A&B";
    std::string userAcc;
    std::string userPass;


    std::cout << "What is your Account?: "; // get input 
    std::cin >> userAcc; // store answer 
    std::cout << "What is your Password: "; 
    std::cin >> userPass;
    
    if(account==userAcc && password==userPass){  // run check for equal
        std::cout << "Login successful"<< std::endl; // if passed
    }
    else{
        std::cout << "Login Failed"<< std::endl; // if failed 
    }
    return 0;
}

