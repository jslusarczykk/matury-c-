#include <bits/stdc++.h>
using namespace std;
ifstream dane("dane1.txt");
ifstream dane2("dane2.txt");
ofstream wynik("wynik4.txt");
int N=10;
int tab[1001][10];
int tab2[1001][10];
void zad4_1(){
    int licznik=0;
    for(int i=1; i<=1000; i++){
      if(tab[i][9]==tab2[i][9])
         licznik++;
   }
   cout<<licznik<<endl;
}
bool parzysta(int x){
   if(x%2==0)
      return true;
   return false;
}
void zad4_2(){
   int licznik_parz=0;
   int licznik_parz2=0;
   int wiersze=0;
   for(int i=1; i<=1000; i++){
      for(int j=0; j<10; j++){
         if(parzysta(tab[i][j])){
            licznik_parz++;
         }
      }
      if(licznik_parz==5){
         for(int z=0; z<10; z++){
            if(parzysta(tab2[i][z])){
               licznik_parz2++;
            }
         }
      }
      licznik_parz=0;
      if(licznik_parz2==5){
         wiersze++;
      }
      licznik_parz2=0;
   }
  cout<<wiersze<<endl;
}
void zad4_3(){
   cout<<"zad4_3: "<<endl;
   wynik<<"zad4_3: "<<endl;
   int pomocnicza=0;
   for(int i=1; i<=1000; i++){
      set<int> s1,s2;
      for(int j=0; j<10; j++){
         s1.insert(tab[i][j]);
         s2.insert(tab2[i][j]);
      }
      if(s1==s2){
         cout<<i<<endl;
         pomocnicza++;
      }
   }
   cout<<"ilosc par ciagow: "<<pomocnicza<<endl;
}
void zad4_4(){
   ofstream wynik4("wynik4_4.txt");
   //cout<<"zad4_4: "<<endl;
   wynik4<<"zad4_4: "<<endl;
   for(int i=1; i<=1000; i++){
      vector<int> c3;
      int j1=0, j2=0;
      for(int j=0; j<20; j++){
         if(j1==10){
            c3.push_back(tab2[i][j2]);
            j2++;
         }
         else if(j2==10){
            c3.push_back(tab[i][j1]);
            j1++;
         }
         else if(tab[i][j1]<=tab2[i][j2]){
            c3.push_back(tab[i][j1]);
            j1++;
         }
         else{
            c3.push_back(tab2[i][j2]);
            j2++;
         }
      }
      for(int z=0; z<20; z++){
         wynik4<<c3[z]<<" ";
      }
      wynik4<<endl;
   }
   wynik4.close();
}
int main(){
   for(int i=1; i<=1000; i++){
      for(int j=0; j<10; j++){
         dane>>tab[i][j];
         dane2>>tab2[i][j];
      }
   }
   zad4_1();
   zad4_2();
   zad4_3();
   zad4_4();
   dane.close();
   dane2.close();
   wynik.close();
   return 0;
}
