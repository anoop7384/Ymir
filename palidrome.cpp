#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool valid(char a){
    if(('a'<= a && a <='z') || ('A'<= a && a<='Z' ) || ('0'<= a && a <='9')){
        return 1;
    }
    return 0;
}

char lowercase(char a){
    if(('a'<= a && a <='z') || ('0'<= a && a <='9')){
        return a;
    }
    else{
        char temp=a-'A'+'a';
        return temp;
    }
}

bool palindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e++;
        }
    }
    return 1;
}


int main(){
    string input="fjhvHGFD1245@#$,,";
    string name="";
    for (int i = 0; i < input.length(); i++)
    {
        if(valid(input[i])){
            name.push_back(input[i]);
        }
    }
    for (int i = 0; i < name.length(); i++)
    {
        char temp=name[i];
        name[i]=lowercase(temp);
    }


    cout<<name;
      
}