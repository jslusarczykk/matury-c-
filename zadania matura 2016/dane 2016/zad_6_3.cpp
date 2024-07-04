#include <bits/stdc++.h>
using namespace std;
bool test(string s, string k){
   int r=(s[0]-k[0]+26)%26;
   for(int i=1; i<s.size();i++){
      if((s[i]-k[i]+26)%26!=r){
         return false;
      }
   }
   return true;
}

int main()
{
vector<string>s1(3000),s2(3000);
ifstream pary("dane_6_3.txt");
for(int i=0;i<3000;i++){
   pary>>s1[i]>>s2[i];
}
pary.close();
ofstream wynik3("wyniki_6_3.txt");
for(int i=0; i<3000; i++){
   if(!test(s1[i],s2[i])){
      cout<<s1[i]<<endl;
      wynik3<<s1[i]<<endl;
   }
}
wynik3.close();
//cout<<test("ZAWISLAK","EFBNXQFP");
return 0;
}
