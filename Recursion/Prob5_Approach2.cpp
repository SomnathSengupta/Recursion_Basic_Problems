//Reverse an Array
#include<iostream>
using namespace std;
void rev(int* arr, int n, int i) {
    if (i >= n/2) return;
    swap(arr[i], arr[n - i - 1]);
    rev(arr, n, i + 1);
}
int main()
{
    int arr[5] = {1, 2, 7, 4, 3};
    int n = sizeof(arr)/sizeof(int);
    rev(arr, n, 0);
    for (int i: arr) {
        cout << i << " ";
    }
    return 0;
}