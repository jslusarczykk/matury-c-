#include <bits/stdc++.h>
using namespace std;
const int N=1000;
ifstream dane("liczby.txt");
ofstream wynik("wynik4.txt");
string tab[N+1];
bool wieksza(string s1, string s2){
   if(s1.size()>s2.size())
      return true;
   if(s1.size()<s2.size())
      return false;
   if(s1>s2)
      return true;
   else
      return false;
}
bool zera(string s){
   int zero=0,jeden=0;
   for(int i=0; i<=s.size()-1; i++){
      if(s[i]=='0')
         zero++;
      else
         jeden++;
   }
   if(zero>jeden)
      return true;
   return false;
}
bool p2(string s){
   if(s[s.size()-1]=='0')
      return true;
   else
      return false;
}
bool p8(string s){
   if(s=="0")
      return true;
   if(s.size()<=3)
      return false;
   if(s[s.size()-1]=='0'&&s[s.size()-2]=='0'&&s[s.size()-3]=='0')
      return true;
    else
      return false;
}
void zad4_1(){
   cout<<"Zad4_1: "<<endl;
   wynik<<"Zad4_1: "<<endl;
   int liczby=0;
   for(int i=1; i<=N; i++){
      if(zera(tab[i]))
         liczby++;
   }
   cout<<liczby<<endl;
   wynik<<liczby<<endl;
}
void zad4_2(){
   cout<<"Zad4_2: "<<endl;
   wynik<<"Zad4_2: "<<endl;
   int l2=0, l8=0;
   for(int i=1; i<=N; i++){
      if(p2(tab[i]))
         l2++;
      if(p8(tab[i]))
         l8++;
   }
   cout<<l2<<" "<<l8<<endl;
   wynik<<l2<<"  "<<l8<<endl;
}
void zad4_3(){
   cout<<"Zad4_3: "<<endl;
   wynik<<"Zad4_3: "<<endl;
   int minimalna=1; int maksymalna=1;
   for(int i=1; i<=N; i++){
      if(wieksza(tab[i],tab[maksymalna]))
         maksymalna=i;
      if(wieksza(tab[minimalna],tab[i]))
         minimalna=i;
   }
   cout<<minimalna<<" "<<maksymalna<<endl;
   wynik<<minimalna<<" "<<maksymalna<<endl;
}
int main(){
   for(int i=1; i<=N; i++){
      dane>>tab[i];
   }
zad4_1();
zad4_2();
zad4_3();
dane.close();
wynik.close();
return 0;
}
