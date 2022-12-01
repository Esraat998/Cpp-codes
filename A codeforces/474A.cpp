#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cin>>a;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s1;
    cin>>s1;
    if(a=='R'){
        for(int i=0; i<s1.size(); i++){
            for(int j=0; j<s.size(); j++){
				if(s1[i]==s[j]){
					cout<<s[j-1];
				}
			}
        }
    }
    else{
        for(int i=0; i<s1.size(); i++){
            for(int j=0; j<s.size(); j++){
				if(s1[i]==s[j])
					cout<<s[j+1];
			}
        }
    }
    return 0;
}
