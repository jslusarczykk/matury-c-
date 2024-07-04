#include <bits/stdc++.h>
using namespace std;
ifstream dane("anagramy.txt");
ofstream wynik("wynik20.txt");
const int N=200;
string tab[N]; //1slowo
string tab2[N]; //2slowo
bool anagram(string s, string s2){
   int tab3[26]={0};
   int tab4[26]={0};
   if(s.size()!=s2.size())
      return false;
   for(int i=0; i<s.size(); i++){
      tab3[s[i]-'A']++;
      tab4[s2[i]-'A']++;
   }
   for(int i=0; i<26; i++){
      if(tab3[i]!=tab4[i])
         return false;
   }
   return true;
}
bool zamien1(string s, string s2){
   int tab3[26]={0};
   int tab4[26]={0};
   if(s.size()!=s2.size())
      return false;
   int licznik=0;
   int pozycja=0;
      for(int i=0; i<s.size(); i++){
      tab3[s[i]-'A']++;
      tab4[s2[i]-'A']++;
   }
   for(int i=0; i<26; i++){
      if(abs(tab4[i]-tab3[i])>1){
         return false;
      }
      if(tab4[i]-tab3[i]==1){
         licznik++;
         pozycja=i;
      }
   }
}
void zad20_1(){
   cout<<"zad20_1 "<<endl;
   wynik<<"zad20_1 "<<endl;
   int licznik=0;
   for(int i=0; i<N; i++){
      if(anagram(tab[i], tab2[i]))
         licznik++;
   }
   cout<<licznik<<endl;
   wynik<<licznik<<endl;
}
string s; cin>>s;
void zad20_3(){

}
int main(){
for(int i=0; i<N; i++){
   dane>>tab[i]>>tab2[i];
}
zad20_1();
dane.close();
//for(int i=0; i<10; i++){
  // cout<<tab[i]<<tab2[i];
//}
wynik.close();
return 0;
}
