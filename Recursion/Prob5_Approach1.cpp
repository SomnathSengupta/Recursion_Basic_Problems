//Reverse an Array
#include<iostream>
using namespace std;
void rev(int* arr, int i, int j) {
    if (i >= j) return;
    swap(arr[i], arr[j]);
    rev(arr, i+1, j-1);
}
int main()
{
    int arr[5] = {1, 2, 7, 4, 3};
    int n = sizeof(arr)/sizeof(int);
    rev(arr, 0, n - 1);
    for (int i: arr) {
        cout << i << " ";
    }
    return 0;
}