//Aman Kumar Sharma
//Print N to 1
#include<bits/stdc++.h>
using namespace std;

void PrintNos(int x, int N){
    if(x<1)return;
    cout<<x<<" ";
    PrintNos(x-1, 1);
}

int main(){
    int N;
    cin>>N;
    PrintNos(N, 1);
    return 0;
}