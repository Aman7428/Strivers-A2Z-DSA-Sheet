//Aman Kumar Sharma
// Palindrome Number
#include<bits/stdc++.h>
using namespace std;

long long ReverseInteger(int x){
    long long ans=0;
    while(x != 0){
        int digit=x % 10;
        ans=(ans*10)+digit;
        x/=10;
    }
    return ans;
}

bool isPalindrome(int x){
    if(x>=0){
        if(x==ReverseInteger(x)) return true;
    }
    return false;
}

int main(){
    int x;
    cin>>x;
    cout<<isPalindrome(x)<<endl;
    return 0;
}