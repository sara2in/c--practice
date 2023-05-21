#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
// io manipulator
#include <iomanip>

using namespace std;

int main()
{
    // //Intializing Vars//
    // double price = 99.99;
    // //Always type F and L at end of float and long or will be double or int and cause data loss. Work with auto.
    // float inerestRate = 3.67F;
    // long fileSize = 9000L;
    // char letter = 'a';
    // bool isValid = false;
    // //auto
    // auto isValid = false;

    // //Grace init. Senses uses.
    // int number {1.2};
    // cout << number;

    // //Binary numbers
    // int number = 0b11111111;
    // cout << number;
    // //Hex number
    // int number = 0xff;
    // cout << number;

    // //stay away from unsigned

    // //Narrowing//
    // int number = 1000000;
    // //would be stopped by grace init
    // short another = number;
    // cout << another;

    // //Generating randomness//
    // srand(time(0)); //seed with unix time

    // int number = rand() % 10;

    // cout << number;

    // const short minVal = 1;
    // const short maxVal = 6;
    // srand(time(0));
    // short die1 = (rand() % (maxVal - minVal +1)) + minVal;
    // short die2 = (rand() % (maxVal - minVal +1)) + minVal;
    // cout << die1 << ", " << die2;

    // 0 means success and returning a non-zero (1) number means failure

    // FORMATING OUTPUT (Stream Manipulator)//
    // // This is a sticky manupulator
    //  cout << left;
    //  cout <<  setw(10) << "Spring" << setw(10) << "Nice" << endl
    //      << setw(10) << "Summer" << setw(10) << "Hot";

    // // *Manipulating floats
    // cout <<  fixed << setprecision(2) << 12.34567 << endl
    //  << 22.123456;

    // DATA TYPES SIZE AND LIMITS//
    //  cout << sizeof(int);

    // *Generic Class
    // cout << numeric_limits<int>::min() << endl
    //      << numeric_limits<int>::max();

    // int number = numeric_limits<int>::max();
    //Will cause overflow to min (underflow is opposite)
    // number++;
    // cout << number;

    //WORKING WITH BOOLEANS
    // bool isNewUser = false;
    //     //stick manip that show T/F rather than 0/1
    //     cout << boolalpha << isNewUser;
    //     //noboolalpha does opposite

    //WORKING WITH CHARACTERS AND STRINGS
    // char ch = 'a';
    // //Prints associated number
    // cout << +ch;

    // string name;
    // cout << "Enter Name: ";
    // //Get string with spaces and after
    // getline(cin, name);
    // cout << "Hi " << name;

    //WORKING WITH ARRAYS
    //Length is set in brackets and can be blank for unknown size
    // int numbers[] = {10, 20};
    // cout << numbers[2];

    //TYPE CONVERSION//
    //Can encounter data loss when going from more precise to less precise vars
    // int x = 10;
    // int y = 3;
    //C style type casting
    //double z = static_cast<double>(x) / y;
    //C++ style type casting (safer)
    // int z = x + static_cast<int>(y);

    // cout << z;

    return 0;
}