//Aman Kumar Sharma
//Largest Odd Number in String (leetcode-1903)
#include <bits/stdc++.h>
using namespace std;

string LargestOddNumber(string num) {
    int n = num.size();
    int end = -1;

    for (int right = n - 1; right >= 0; right--) {
        if ((num[right] - '0') % 2 != 0) {
            end = right;
            break;
        }
    }

    if (end == -1) return "";

    return num.substr(0, end + 1);
}

int main() {
    int n;
    cin >> n;
    string num;
    cin >> num;
    
    string result = LargestOddNumber(num);
    cout << result << endl;
    return 0;
}
