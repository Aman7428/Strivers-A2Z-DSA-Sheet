//Aman Kumar Sharma
//Print Name N times
#include<bits/stdc++.h>
using namespace std;

void PrintNameHelperFunction(int x, int N){
    if(x>N) return ;
    cout<<"Name"<<" ";
    PrintNameHelperFunction(x+1, N);
}

void PrintName(int N){
    PrintNameHelperFunction(1, N);
}

int main(){
    int N;
    cin>>N;
    PrintName(N);
    return 0;
}