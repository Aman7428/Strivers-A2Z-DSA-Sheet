//Aman Kumar Sharma
//Power of Two (leetcode-231)
#include<bits/stdc++.h>
using namespace std;

bool PowerOfTwo(int n){
    long long val=1;
    if(n<=0)return false;
    while(val<n){
        val*=2;
    }
    return val==n;
}
int main(){
    int n;
    cin>>n;
    cout<<PowerOfTwo(n)<<endl;
    return 0;
}