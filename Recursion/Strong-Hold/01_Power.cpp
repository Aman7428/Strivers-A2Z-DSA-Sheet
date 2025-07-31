//Aman Kumar Sharma
//Pow(x, n) (leetcode-50)
#include<bits/stdc++.h>
using namespace std;

double Pow(double x, long long n){
    double ans=1.0;

    if(n<0){
        x=1/x;
        n=-1*n;
    }

    while(n>0){
        if(n%2==0){
            x *= x;
            n = n/2;
        }
        else{
            ans=ans*x;
            n=n-1;
        }
    }
    return ans;
}
int main(){
    double x;
    cin>>x;
    long long n;
    cin>>n;
    cout<<Pow(x, n)<<endl;
    return 0;
}