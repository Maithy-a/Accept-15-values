/*Write a C++ program that takes 15 values of type integer as inputs from user, store the values in an array.
a)	Print the values stored in the array on screen.
b)	 Ask user to enter a number, check if that number (entered by user) is present in array or not. If it is present print, �the number found at index (index of the number) � and the text �number not found in this array�
c)	Create another array, copy all the elements from the existing array to the new array but in reverse order. Now print the elements of the new array on the screen
d)	Get the sum and product of all elements of your array. Print product and the sum each on its own line.
*/
#include <iostream>

using namespace std;

int main() {
    const int size = 15;
    int arr[size];

    // Input values into the array
    cout << "Enter 15 integer values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // a) Print values stored in the array
    cout << "\nValues stored in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    // b) Check if a number is present in the array
    int searchNumber;
    cout << "\nEnter a number to search in the array: ";
    cin >> searchNumber;

    bool numberFound = false;
    int index;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == searchNumber) {
            numberFound = true;
            index = i;
            break;
        }
    }

    if (numberFound) {
        cout << "The number found at index " << index << endl;
    } else {
        cout << "Number not found in this array" << endl;
    }

    // c) Create another array in reverse order
    int reverseArr[size];
    for (int i = 0; i < size; ++i) {
        reverseArr[i] = arr[size - 1 - i];
    }

    // Print elements of the new array in reverse order
    cout << "\nElements of the new array (in reverse order):" << endl;
    for (int i = 0; i < size; ++i) {
        cout << reverseArr[i] << " ";
    }

    // d) Calculate sum and product of elements in the array
    int sum = 0;
    long long product = 1;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
        product *= arr[i];
    }

    // Print sum and product
    cout << "\n\nSum of all elements: " << sum << endl;
    cout << "Product of all elements: " << product << endl;

    return 0;
}
