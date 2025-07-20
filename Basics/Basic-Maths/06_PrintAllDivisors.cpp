//Aman Kumar Sharma
//Print All Divisors of a Number
#include<bits/stdc++.h>
using namespace std;

void PrintAllDivisors(int n){
    vector<int>ans;
    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0) ans.push_back(i);

        if((n%(n/i))==0 && n/i != i) ans.push_back(n/i);
    }
    sort(ans.begin(), ans.end());

    for(int num: ans){
        cout<< num<< " ";
    }
}

int main(){
    int n;
    cin>>n;
    PrintAllDivisors(n);
    return 0;
}