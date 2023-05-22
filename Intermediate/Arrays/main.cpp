#include <iostream>

using namespace std;

//PASSING ARRAYS TO FUNCTIONS//
//int[] -> int*
void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}

//* linear search algorithm
int find(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (numbers[i] == target)
            return i;
    return -1;
}

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void bubbleSort(int numbers[], int size) {
    for (int pass = 0; pass < size; pass++) {
        for (int i = 1; i < size; i++)
            if (numbers[i] < numbers[i - 1])
                swap(numbers, i, i -1);
    }
}
const int rows = 2;
const int cols = 3;
void printMatrix(int matrix[rows][cols]) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++)
            cout << matrix[row][col] << endl;
    }
}

int main() {
    //* Pointer is address in memeory (first element for array)
    //* Nothing will stop you from try to access element not in arr

    //DETERMINING THE SIZE OF ARRAYS//
//    int numbers[] = { 10, 20 };
//
//    for (int i = 0; i < size(numbers); i++) {
//        cout <<  numbers[i] << endl;
//    }

    //COPYING ARRAYS//
//    int first[] = { 10, 20, 30 };
//    int second[size(first)];
//
//    for (int i = 0; i < size(first); i++)
//        second[i] = first[i];

    //COMPARING ARRAYS//
//    int first[] = { 10, 20, 30 };
//    int second[] = { 10, 20, 30 };
//
//    bool areEqual = true;
//    for (int i = 0; i < size(first); i++)
//        if (second[i] != first[i]) {
//            areEqual = false;
//            break;
//        }
//
//    cout << boolalpha << areEqual << endl;

    //PASSING ARRAYS TO FUNCTIONS//
//    int numbers[] = { 10, 20, 30 };
//    printNumbers(numbers, size(numbers));

    //UNDERSTANDING size_t//
//    int numbers[] = { 10, 20, 30 };
//
//    //*size_t always positive, = unsigned long long (64bit compiler), unsigned int (32bit compiler),
//    cout << numeric_limits<long long>::min() << endl;
//    cout << numeric_limits<long long>::max() << endl;
//    cout << numeric_limits<size_t>::min() << endl;
//    //* large enough to hand this size of the largest object the system can handle
//    cout << numeric_limits<size_t>::max() << endl;

    //UNPACKING ARRAYS//
//    int values[3] = { 10, 20, 30 };

//    int x = values[0];
//    int y = values[0];
//    int z = values[0];

    //* C++: structured binding
    //* JS: destructuring
    //* Python: unpacking
//
//    auto [x, y, z] = values;
//    cout << x << ", " << y << ", " << z;

    //SEARCHING ARRAYS//
//    cout << find(values, size(values), 2);

    //SORTING ARRAYS//
    //* Types: bubble, selection, insertion, merge, quick!
//    int numbers[] = { 10,  2,20, 1, 30 };
//    bubbleSort(numbers, size(numbers));
//
//    for (int number: numbers)
//        cout << number << endl;

    //MULTI-DIMENSIONAL ARRAYS//
    //2x3
    int matrix[2][3] ={
            {11,12, 13},
            {21, 22, 23}
    };
    //* Not need size
    printMatrix(matrix);

    return 0;
}