
// C++ program to illustrate
// Function Templates
#include <iostream>
using namespace std;

// Function that take
// datatype as an argument
// T is the variable and
// can be extended to multiple types
// limit accept an integer value
template <typename T, int limit>

// Function of type as this Function
// is going to return an array element
// of type T
T arrMax(T arr[], int n)
{
    // Program exits if limit exceeds
    if (n > limit) {
        cout << "limit exceeded";
        return 0;
    }
    // res variable to store the max
    // element of type T
    T res = arr[0];

    // Loop traversing through the array
    // Fincding max element
    for (int i = 1; i < n; i++)
        if (arr[i] > res)
            res = arr[i];

    // Returning the maximum element
    return res;
}

// Drivers Method
int main()
{
    // Integer Array
    int arr1[] = { 10, 40, 3 };

    // cout << arrMax<int, 100>(arr1, 3) << endl;

    // Floatig point array
    float arr2[] = { 10.5, 3.5, 1.5, 30.5 };
    cout << arrMax<float, 50>(arr2, 4);

    return 0;
}
