//Print N to 1
#include<iostream>
using namespace std;
void print(int n) {
    if (n < 1) return;
    cout << n << " ";
    print(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}