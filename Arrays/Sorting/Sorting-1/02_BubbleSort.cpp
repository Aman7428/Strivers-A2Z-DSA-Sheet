//Aman Kumar Sharma
//Bubble Sort
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1])swap(arr[j], arr[j+1]);
        }
    }
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
    BubbleSort(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}