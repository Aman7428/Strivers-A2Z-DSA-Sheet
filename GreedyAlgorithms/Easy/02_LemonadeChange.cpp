//Aman Kumar Sharma
//Lemonade Change (leetcode-860)
#include<bits/stdc++.h>
using namespace std;

bool LemonadeChange(vector<int>& bills){
    int n=bills.size();
    int five=0, ten=0;
    for(int i=0; i<n; i++){
        if(bills[i]==5)five++;
        else if(bills[i]==10){
            if(five==0)return false;
            else{
                five--;
                ten++;
            }
        }
        else if(bills[i]==20){
            if(five>0 && ten>0){
                five--;
                ten--;
            }
            else if(five>=3)five=five-3;
            else return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>bills(n);
    for(int i=0; i<n; i++)cin>>bills[i];
    cout<<LemonadeChange(bills)<<endl;
    return 0;
}