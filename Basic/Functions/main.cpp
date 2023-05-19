#include <iostream>
#include "utils/greet.h"

using std::cout, std::cin;
using messaging::greet;

//OVERLOADING FUNCTIONS//
//void greet(string name) {
//    cout << "Hello" << name << endl;
//}
//void greet(string title, string name) {
//    cout << "Hello" << title << " " << name << endl;
//}

//PASSING ARGS BY VALUE OR REFERENCE
//* & = reference param (good for large amount of data). Can declare as const to void more changes.
//void increasePrice(double& price) {
//    price *= 1.2;
//}



int main() {
    //If you give a default value to a param, all following param must have one

    //OVERLOADING FUNCTIONS//
    //*Signature = name + (number and type of params)
    greet("Sal");
    //    greet("Mr.", "Most");

    //PASSING ARGS BY VALUE OR REFERENCE
    //    double price = 100;
    //    increasePrice(price);
    //    cout << price;



    return 0;
}