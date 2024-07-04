#include <bits/stdc++.h>
using namespace std;
ifstream dane("mecz.txt");
string s;
int main()
{
dane>>s;
int licznikA=0; int licznikB=0;
for(int i=0; i<s.size(); i++){
   if(s[i]=='A'){
      licznikA++;
   }
   else
      licznikB++;
   if(licznikA>=1000&&licznikB<=licznikA-3){
      cout<<"A"<<" "<<licznikA<<": "<<licznikB<<endl;
      break;
   }
   if(licznikB>=1000&&licznikA<=licznikB-3){
      cout<<"B"<<" "<<licznikA<<": "<<licznikB<<endl;
      break;
   }
}
dane.close();
return 0;
}
