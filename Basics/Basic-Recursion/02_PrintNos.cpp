//Aman Kumar Sharma
//Print 1 To n
#include<bits/stdc++.h>
using namespace std;

void PrintNos(int x, int n){
    if(x>n) return;
    cout<<x<<" ";
    PrintNos(x+1, n);
}

int main(){
    int n;
    cin>>n;
    PrintNos(1, n);
    return 0;
}