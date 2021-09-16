#include <iostream>
#include <boost/algorithm/string.hpp>
int main(){
    std::string account = "21_CSE_c++_Fall";
    std::string password = "278A&B";
    std::string userAcc;
    std::string userPass;
    bool checkAcc;
    

    std::cout << "What is your Account?: "; // get input 
    std::cin >> userAcc; // store answer 
    std::cout << "What is your Password: "; 
    std::cin >> userPass;
    if(boost::iequals(account, userAcc)){ // ignore case sensitive
        checkAcc=true;
    }
    
    if(checkAcc && password==userPass){  // run check for equal
        std::cout << "Login successful"<< std::endl; // if passed
    }
    else{
        std::cout << "Login Failed"<< std::endl; // if failed 
    }
    return 0;
}

