// Write a program to find and display the biggest number(element) in an array of integers. 
// Hint the size of the array is unimportant as long as there's a way to check that the number displayed is definitely the biggest number.

#include <iostream>
using namespace std;

void populateArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int getLargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int numsArray[5] = {};

    cout << "Please enter a series of 5 whole numbers:" << endl;
    populateArr(numsArray, 5);

    cout << "The largest number you entered is: " << getLargest(numsArray, 5) << "." << endl;
}
