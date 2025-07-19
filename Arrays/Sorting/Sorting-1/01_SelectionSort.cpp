//Aman Kumar Sharma
//Selection Sort
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        int min=i;
        for(int curr=min+1; curr<n; curr++){
            if(arr[curr]<arr[min])min=curr;
        }
        swap(arr[i], arr[min]);
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
    SelectionSort(arr);
    for(int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}