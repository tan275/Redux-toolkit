#include<iostream>
using namespace std;
bool anagram(string s,string t){
    int frq[26]={0};
    for(int i=0;i<s.size();i++){
    char ch=s[i];
    int index=ch-'a';
    frq[index]++;
    }
    for(int i=0;i<t.size();i++){
    char ch=t[i];
    int index=ch-'a';
    frq[index]--;
    }
    for(int i=0;i<26;i++){
        if(frq[i]!=0)
        {return false;}
    }
    return true;
}
int main(){
    string s;
    string t;
    cin>>s>>t;
    cout<<anagram(s,t);
    return 0;
}