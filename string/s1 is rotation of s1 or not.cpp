#include <bits/stdc++.h>
using namespace std;
 bool areRotation(string s1, string s2){
     if(s1.length()!=s2.length()) return false;

     s1=s1+s1;
        return(s1.find(s2)!=string::npos);

 }
 
int main () {
 string s1, s2;
cin>>s1>>s2;
cout<<areRotation(s1,s2);
return 0;
}   