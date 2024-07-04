#include <bits/stdc++.h>
using namespace std;
ifstream przyklad("dane.txt");
vector<string> liczby(5000);
ofstream wynik("wyniki6.txt");
void pktA(){
   int ilosc=0;
   for(int i=0; i<5000; i++){
      if(liczby[i][0]==liczby[i][liczby[i].size()-1])
         ilosc++;
   }
   cout<<"pktA: "<<ilosc<<endl;
   wynik<<"pktA: "<<ilosc<<endl;
}
int konwersja8_10(string x){
      int p8=1, suma=0;
      for(int j=x.size()-1; j>=0; j--){
         suma+=p8*(x[j]-'0');
         p8*=8;
      }
   return suma;
}
void pktB(){
   int ilosc=0;
   for(int i=0; i<5000; i++){
      int y=konwersja8_10(liczby[i]);
      int pierwsza, ostatnia=y%10;
      while(y>=10){
         y=y/10;
      }
      pierwsza=y;
      if(pierwsza==ostatnia){
         ilosc++;
      }
   }
   cout<<"pktB: "<<ilosc<<endl;
   wynik<<"pktB: "<<ilosc<<endl;
}
bool digits(string x){
   for(int i=0; i<=x.size()-2; i++){
      if(x[i]>x[i+1])
         return false;
   }
   return true;
}
bool bigger(string x, string y){
   if(x.size()>y.size()){
      return true;
   }
   if(x.size()<y.size()){
      return false;
   }
   if(x>y){
      return true;
   }
   else
      return false;

}
void pktC(){
   int ilosc=0;
   string xmax="1", xmin="3000000";
   for(int i=0; i<5000; i++){
      if(digits(liczby[i])){
         ilosc++;
         if(bigger(liczby[i],xmax)){
            xmax=liczby[i];
         }
         if(bigger(xmin,liczby[i])){
            xmin=liczby[i];
         }
      }
   }
   cout<<"pktC: "<<ilosc<<" Wartosc Max:"<<xmax<<" Wartosc min:"<<xmin<<endl;
   wynik<<"pktC: "<<ilosc<<" Wartosc Max:"<<xmax<<" Wartosc min:"<<xmin<<endl;
}
int main()
{
for(int i=0; i<5000; i++){
   przyklad>>liczby[i];
}
przyklad.close();
pktA();
pktB();
pktC();
wynik.close();
return 0;
}
