#include <bits/stdc++.h>
using namespace std;
ifstream dane("liczby.txt");
ofstream wynik("wyniki1.txt");
const int N=3000;
int tab[N];
int odwrotna(int x){
   int liczba=0;
   int y=x;
   int potega=1;
   while(y>=1){
      y=y/10;
      potega=potega*10;
   }
   potega=potega/10;
   //cout<<potega<<endl;
   while(x>0){
      liczba=x%10*potega+liczba;
      x=x/10;
      potega=potega/10;
      //cout<<x<<endl;
   }
   return liczba;
}
bool pierwsza(int x){
   if(x<2)
      return false;
   for(int i=2; i<x; i++){
      if(x%i==0)
         return false;
   }
   return true;
}
void zad1_1(){
   cout<<"zad1_1"<<endl;
   wynik<<"zad1_1"<<endl;
   int licznik=0;
   for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
         if(i==j||tab[i]%10==0)
            continue;
         if(odwrotna(tab[i])==tab[j]){
               licznik++;
               //cout<<tab[i]<<" "<<tab[j]<<endl;
            }
      }
   }
   cout<<licznik/2<<endl;
   wynik<<licznik/2<<endl;
}
void zad1_2(){
   cout<<"zad1_2"<<endl;
   wynik<<"zad1_2"<<endl;
   int licznik=0;
   vector<int>mniejszaZP;
   for(int i=0; i<N; i++){
      if(tab[i]<10)
         continue;
      if(pierwsza(odwrotna(tab[i]))&&pierwsza(tab[i])){
         mniejszaZP.push_back(min(odwrotna(tab[i]),tab[i]));
         }
   }
   cout<<mniejszaZP.size()<<endl;
   wynik<<mniejszaZP.size()<<endl;
   sort(mniejszaZP.begin(),mniejszaZP.end());
   for(int i=0; i<mniejszaZP.size(); i++){
      cout<<mniejszaZP[i]<<" "<<odwrotna(mniejszaZP[i])<<endl;
      wynik<<mniejszaZP[i]<<" "<<odwrotna(mniejszaZP[i])<<endl;
   }
}
int main(){
//cout<<odwrotna(160);
for(int i=0; i<N; i++){
   dane>>tab[i];
}
zad1_1();
zad1_2();
dane.close();
wynik.close();
return 0;
}
