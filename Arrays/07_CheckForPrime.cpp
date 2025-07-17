//Aman Kumar Sharma
//Check for prime number

#include<bits/stdc++.h>
using namespace std;

bool CheckPrime(int n){
    vector<int> ans;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0) ans.push_back(i);
        if((n%(n/i))==0 && n/i != i) ans.push_back(n/i);
    }
    if(ans.size()==2) return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<CheckPrime(n)<<endl;
}