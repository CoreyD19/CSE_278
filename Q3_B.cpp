#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   // declare variables
   //const long val = 65535; did not work
   long userNum;
   int min;
   int max;
   double median;
   int n;
   
 // Please go over user validation in cpp. I tried for an hour 
   // to get a prompt to check for a custom array size but to no use

   int arr[20]; // declare array 
   for(int i=0; i<20; i++){
       std::cout << "Type a number: "<< std::endl; // prompt for user
       std::cin >> userNum; // store userNum
       //if(userNum > val){
        //std::cout << "That number is too high, please try again"<< std::endl;
       //}   User Validation Did Not Work But I Tried
       //else{
       arr[i]= userNum; // put num into array
   }
   min = 99999999; // set max
   max= -99999999;// set min
        for(int i=0; i<20; i++){ // run through array
        if (arr[i] < min) { // check for min
            min = arr[i];
        }
 
        if (arr[i] > max) { // check for max
            max = arr[i];
        }
          n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);
         if (n % 2 != 0){
        median = (double)arr[n / 2];
         }
         else{
    median =  (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
         }
        
    }

 // output min and max and size and median
    std::cout << "The size of the array is: " << n << std::endl;
    std::cout << "The min element is: " << min << std::endl;
    std::cout << "The max element is: " << max << std::endl;
    std::cout << "The median element is: " << median << std::endl;
    return 0;
}

