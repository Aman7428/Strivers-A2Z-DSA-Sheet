//Aman Kumar Sharma
//Fibonacci Number
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1)return n;
    int last=fib(n-1);
    int slast=fib(n-1);
    return last + slast;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}