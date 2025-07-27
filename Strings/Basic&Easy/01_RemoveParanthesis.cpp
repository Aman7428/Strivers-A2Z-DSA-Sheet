//Aman Kumar Sharma
//Remove Outermost Parentheses (leetcode-1021)
#include<bits/stdc++.h>
using namespace std;

string RemoveParanthesis(string s){
    string ans;
    int n=s.size();
    stack<char>st;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            if(!st.empty()){
                ans.push_back('(');
            }
            st.push('(');
        }
        else if(s[i]==')'){
            if(st.size()>1){
                ans.push_back(')');
            }
            st.pop();
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string result=RemoveParanthesis(s);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<endl;
    }
    return 0;
}