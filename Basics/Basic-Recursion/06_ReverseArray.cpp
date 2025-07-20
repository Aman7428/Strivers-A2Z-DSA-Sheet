//Aman Kumar Sharma
//Reverse Array
#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int left, int right, vector<int>& arr){
    if(left>=right)return;
    swap(arr[left], arr[right]);
    return ReverseArray(left+1, right-1, arr);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    ReverseArray(0, n-1, arr);
    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}