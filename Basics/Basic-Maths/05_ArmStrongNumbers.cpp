//Aman Kumar Sharma
//Armstrong Number
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int sum=0, num=n;
    while(n != 0){
        int digit = n%10;
        sum += (digit * digit * digit);
        n /= 10;
    }
    if(sum == num) return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<isArmstrong(n)<<endl;
    return 0;
}