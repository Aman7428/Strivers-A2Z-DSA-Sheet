//Aman Kumar Sharma
//Find the factorial of n
#include<bits/stdc++.h>
using namespace std;

int factorial(int x, int prod){
    if(x<=1)return prod;
    return factorial(x-1, prod*x);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n,1)<<" ";
    return 0;
}