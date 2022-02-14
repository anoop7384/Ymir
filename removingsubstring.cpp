#include<iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
    string s="daabcaababcc";
    string part="abc";
    while(s.length()!=0 && s.find(part)< s.length()){
        s.erase(s.find(part),part.length());  //(leftmost index,no of indices)

    }
    cout<<s; 

    return 0;
}