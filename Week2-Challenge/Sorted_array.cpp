#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// Function to input and sort an std::array
void inputAndSortArray(array<int, 3>& arr) {
    cout << "Enter " << arr.size() << " integers: ";
    for (int i = 0; i < arr.size(); ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
}

int main() {
    // Define an std::array of integers with a size of 3
    array<int, 3> myArray;

    // Call the inputAndSortArray function to input and sort the array
    inputAndSortArray(myArray);

    // Print the sorted array
    cout << "Sorted Array: ";
    for (int i : myArray) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
