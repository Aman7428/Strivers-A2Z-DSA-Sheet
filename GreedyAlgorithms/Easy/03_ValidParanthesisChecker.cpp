//Aman Kumar Sharma
//Valid Parenthesis String (leetcode-678)
#include<bits/stdc++.h>
using namespace std;

bool ValidParanthesis(string s){
    int n=s.size();
    int low=0, high=0;
    for(char c:s){
        if(c=='('){
            low++;
            high++;
        }
        else if(c=='*'){
            low--;
            high++;
        }
        else if(c==')'){
            low--;
            high--;
        }
        if(high<0)return false;
        if(low<0)low=0;
    }
    return low==0;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<ValidParanthesis(s)<<endl;
    return 0;
}