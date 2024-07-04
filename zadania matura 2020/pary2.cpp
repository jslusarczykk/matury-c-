#include <bits/stdc++.h>
using namespace std;
ifstream pary("przyklad.txt");
ofstream wynik4("wynik4.txt");
vector<int>liczba(101);
vector<string>slowo(101);
bool pierwsza(int n){
   int podzielniki=2;
   for(int i=2;i<n; i++){
      if(n%i==0){
         podzielniki++;
      }
   }
   if(podzielniki==2){
      return true;
   }
   else
      return false;
}
void zad4_1(){
   cout<<"Zad4_1"<<endl;
   wynik4<<"Zad4_1"<<endl;
   for(int i=1; i<=100; i++){
      if(liczba[i]%2>0)
         continue;
      for(int j=3; j<liczba[i]; j+=2){
         if(pierwsza(j)&&pierwsza(liczba[i]-j)){
            cout<<liczba[i]<<" "<<j<<" "<<liczba[i]-j<<endl;
            wynik4<<liczba[i]<<" "<<j<<" "<<liczba[i]-j<<endl;
            break;
         }
      }
   }
}
void fragment(string s){
   vector<int> licznik(s.size());
   int imax=0;
   for(int i=1; i<s.size(); i++){
      if(s[i-1]==s[i]){
         licznik[i]=1+licznik[i-1];
      }
      else licznik[i] =1;
      if(licznik[i]>licznik[imax]){
         imax=i;
      }
   }
   cout<<string(licznik[imax],s[imax])<<" "<<licznik[imax]<<endl;
}
void zad4_2(){
   cout<<"Zad4_2"<<endl;
   wynik4<<"Zad4_2"<<endl;
   for(int i=1; i<=100; i++){
      fragment(slowo[i]);
   }
}
bool mniejsza(int a, b){
   for(int i=1; i<=100 ; i++){
      if(liczba[i]<liczba[i+1]){
         return true;
      }
   }
   else return false;
}
bool krotsza(string s, z){
   for(int i=1; i<=100 ; i++){
      if(slowo[i]<slowo[i+1])
         return true;
   }
   else return false;
}
void zad4_3(){
   cout<<"Zad4_3"<<endl;
   wynik4<<"Zad4_3"<<endl;
}
int main()
{
   for(int i=1; i<=100; i++){
      pary>>liczba[i]>>slowo[i];
   }
   //for(int i=2; i<=20; i++)
      //cout<<i<<" "<<pierwsza(i)<<endl;
   //for(int i=1; i<=10;i++){
      //cout<<liczba[i]<<" "<<slowo[i]<<endl;
   //}
   pary.close();
   zad4_1();
   zad4_2();
   wynik4.close();
   return 0;
}
