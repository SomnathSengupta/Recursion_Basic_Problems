//Sum of n numbers using recursion
#include<iostream>
using namespace std;
int sum(int n) {
    if (n < 1) return 0;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}