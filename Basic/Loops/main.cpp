#include <iostream>

using namespace std;

int main()
{
    //THE FOR LOOP//
//    cout << "Enter a positive number: ";
//    int number;
//    cin >> number;
//    if (number < 0) cout << "Error! Number is not positive.";
//    else {
//        int factorial = 1;
//        for (int i = 1; i <= number; i++)
//            factorial *= i;
//        cout << "The factorial of " << number << ": " << factorial;
//    }

    int numbers[] = {1, 2, 3, 4};
    //sizeof(numbers): 16
    //sizeof(int): 4

    //*Traditional
//    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
//            cout << numbers[i] << endl;
    //*Range-base for loop
//    for (int number: numbers)
//        cout << number << endl;

//    string name = "Salem Ezz";
//    for (char ch: name)
//        cout << ch << endl;

//    int temps[]  = {60, 80, 90 };
//    double sum = 0;
//    for (int temp: temps)
//        sum += temp;
//    short count =  sizeof(temps) /  sizeof(int);
//    double average = sum / count;
//    cout << average;

//*While loop good for two conditions and when you do not how many time it will run

    //*Do-while Loop (always gets excuted at least once
//    int number;
//    do {
//        cout << "Number: ";
//        cin >> number;
//    } while (number < 1 || number > 5);

    //*continue skips an iteration and break stop all iteration


    

    return 0;
}