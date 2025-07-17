// Aman Kumar Sharma
// Count the number of digits in a number
#include<bits/stdc++.h>
using namespace std;

int CountDigits(int n){
    if(n==0) return 1;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<CountDigits(n)<<endl;
    return 0;
}