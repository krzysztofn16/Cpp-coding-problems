#include <bits/stdc++.h>
using namespace std;

string search_prefix(string x, string y){
    if(x==""||y==""){
        return "";
    }
    string result="";

    if(x.length() < y.length()){
        for(int i=0;i<x.length();i++){
            if(x[i]==y[i]){
                result+=x[i];
            }
        }
    }else{
        for(int i=0;i<y.length();i++){
            if(y[i]==x[i]){
                result+=y[i];
            }else{
                return result;
            }
        }
    }
    return result;
}
string longestCommonPrefix(vector<string>& strs){
    if(strs.size()==0)return "";
    if(strs.size()==1)return strs[0];
    string prefix = strs[0];
    for(int i =1;i<strs.size();i++){
        prefix = search_prefix(prefix,strs[i]);
        if(prefix=="") return prefix;
    }
    return prefix;
}
int main(){
    int n;
    cout<<"enter num of string\n";
    cin>>n;

    string s;
    vector<string> v;
    cout<<"enter "<<n<<" strings\n";

    while(n--){
        cin>>s;
        v.push_back(s);
    }

    if(longestCommonPrefix(v)==""){
        cout<<"no common prefix between strings\n";
    }else{
        cout<<"longest common prefix: "<<longestCommonPrefix(v)<<endl;
    }
    return 0;
}
