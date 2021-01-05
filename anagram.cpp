#include <bits/stdc++.h>
using namespace std;

int anag(string s1,string s2){
	//array to store frequency of 26 characters,initialized to 0
	int arr1[26],arr2[26]={0}; 
    if(s1.length()!=s2.length()){
        return 0;
    } 
    for(int i=0;i<s1.length();i++){
        arr1[s1[i]-'a']++;
    }
    for(int i=0;i<s1.length();i++){
        arr2[s2[i]-'a']++;   		
    }
    for(int i=0;i<s1.length();i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    } 
    return 1;
}
int main(){
    string s1;
    string s2;
    cout<<"enter first string\n";
    cin>>s1;
    cout<<"enter second string\n";
    cin>>s2;
    if(anag(s1,s2)==0){
        cout<<"anagram";
    }else{
        cout<<"not anagram";
    }
    return 0;
}