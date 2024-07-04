#include <bits/stdc++.h>
using namespace std; //k=107 //tekst litera tekst[1]+=7
ifstream dane("dane_6_1.TXT") ;
ofstream wyniki1("wyniki_6_1.TXT");
ofstream wyniki2("wyniki_6_2.TXT");
ofstream wyniki3("wyniki_6_3.TXT");
string slowa[100];
string zaszyfruj (string s, int k){
   k=k%26;
   for(int i=0; i<s.size();i++){
      s[i]+=k;
      if(s[i]>'Z')
         s[i]-=26;
   }
   return s;
}
string odszyfruj(string s, int k){
   k=k%26;
   for(int i=0;i<s.size();i++){
      s[i]-=k;
      if(s[i]<'A')
         s[i]+=26;
   }
   return s;
}

int main()
{
for(int i=0; i<100; i++){
   dane>>slowa[i];
}
dane.close();
cout<<zaszyfruj("INTERPRETOWANIE",107)<<endl;
cout<<odszyfruj("BCYKUNCM",1718);
wyniki1.close();
wyniki2.close();
wyniki3.close();
return 0;
}
