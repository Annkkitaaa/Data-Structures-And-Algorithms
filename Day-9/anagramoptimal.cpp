#include<bits/stdc++.h>
using namespace std;

bool CheckAnagrams(string str1,string str2){
    //check if the length is same

    if(str1.length()!= str2.length()) return false;
    int fre[26]={0};
    for(int i=0;i<str1.length();i++){
        fre[str1[i]-'A']++;
    }
    for(int i=0;i<str2.length();i++){
        fre[str2[i]-'A']--;
    }

    for(int i=0;i<26;i++){
        if(fre[i]!=0){
            return false;
        }
        return true;
    }
}

int main()
{
  string Str1 = "INTEGER";
  string Str2 = "TEGERNI";
  if(CheckAnagrams(Str1, Str2))
  cout << "True" << endl;
  else
  cout<<"False"<<endl;
  return 0;
}