//Aman Kumar Sharma
//Reverse Integer
#include<bits/stdc++.h>
using namespace std;

int ReverseInteger(int x){
    int ans=0;
    while(x != 0){
        if(x<INT_MIN/10 || x>INT_MAX/10)return 0;
        int digit=x % 10;
        ans=(ans * 10)+ digit;
        x/=10;
    }
    return ans;
}

int main(){
    int x;
    cin>>x;
    cout<<ReverseInteger(x)<<endl;
    return 0;
}