#include <bits/stdc++.h>
using namespace std;
ifstream dane("genetyka.txt");
int licznik=0;
bool czyn2(int n){
   int x=1;
   while(x<=n){
      if(x==n)
         return true;
      x=x*2;
      licznik++;
   }
   return false;
}
vector<string>kody(76);
bool poprawny(string s){
   if(!czyn2(s.size()))
      return false;
   string generacja="";
   string pusty="";
   while(s.size()!=1){
      for(int i=0; i<s.size(); i+=2){
         if(s[i]+pusty+s[i+1]=="BD")
            generacja+="A";
         else if(s[i]+pusty+s[i+1]=="CA")
            generacja+="B";
         else if(s[i]+pusty+s[i+1]=="CD")
            generacja+="B";
         else if(s[i]+pusty+s[i+1]=="DD")
            generacja+="C";
         else if(s[i]+pusty+s[i+1]=="BC")
            generacja+="D";
         else
            return false;
      }
      s=generacja;
      generacja="";
   }
   return true;
}
int main(){
   for(int i=0; i<76; i++){
      dane>>kody[i];
   }
   int niepoprawne=0;
   for(int i=0; i<76; i++){
      if(!poprawny(kody[i]))
         niepoprawne++;
   }
   cout<<niepoprawne;
   //int n; cin>>n;
   //if(czyn2(n))
    //  cout<<licznik<<endl;
   //else
      //cout<<"NIE"<<endl;
return 0;
}
