#include <bits/stdc++.h>
using namespace std;
   int fibonacci[1000];
char znak(int k){
   return char(k);
}
int kod(char c){
   return int(c);
}
int main()
{
   fibonacci[1]=1;
   fibonacci[2]=1;
   for(int i=3; i<1000; i++){
      fibonacci[i]=(fibonacci[i-2]+fibonacci[i-1])%26;
   }
   string s,szyfr; cin>>s;
   int d=s.size();
   s='@'+s;
   szyfr=s;
   for(int i=1; i<=d; i++){
      if(s[i]>='A'&&s[i]<='Z'){
         szyfr[i]=znak(65+(kod(s[i])-65+fibonacci[i])%26);
      }
   }
   szyfr.erase(0,1);
   cout<<szyfr<<endl;
   return 0;
}
