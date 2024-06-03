//Check Palindrome
#include<iostream>
using namespace std;
bool checkPalindrome(string str, int n, int i) {
    if (i >= n/2) return true;
    if (str[i] != str[n - i - 1]) return false;
    return checkPalindrome(str, n, i+1);
}
int main()
{
    string str;
    cin >> str;
    cout << checkPalindrome(str, str.length(), 0);

    return 0;
}