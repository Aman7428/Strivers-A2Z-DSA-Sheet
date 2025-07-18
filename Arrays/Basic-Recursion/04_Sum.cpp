//Aman Kumar Sharma
//Sum of Natural Numbers
#include<bits/stdc++.h>
using namespace std;

int findSum(int x, int sum){
    if(x<1) return sum;
    return findSum(x-1, sum+x);
}

int main(){
    int n;
    cin>>n;
    cout<<findSum(n, 0);
}