#include <bits/stdc++.h>
using namespace std;
ifstream dane("liczby.txt") ;
vector<string> liczby(999);
void zad6_1(){
   ofstream wynik("wyniki_6_1.txt");
   int licznik=0;
   for(int i=0;i<999;i++){
      int ost=liczby[i].size()-1;
      if(liczby[i][ost]=='8'){
         licznik++;
      }
   }
   cout<<"Zad6_1 "<<licznik<<endl;
   wynik<<"Zad6_1 "<<licznik<<endl;
   wynik.close();
}
bool brak_zera(string s){
   for(int i=0; i<s.size(); i++){
      if(s[i]=='0')
      return false;
   }
   return true;
}
void zad6_2(){
   ofstream wynik("wyniki_6_2.txt");
   int licznik=0;
   for(int i=0;i<999;i++){
      int ost=liczby[i].size()-1;
      //cout<<i<<endl;
      if(liczby[i][ost]=='4'&&brak_zera(liczby[i])){
         licznik++;
      }
   }
   cout<<"Zad6_2 "<<licznik<<endl;
   wynik<<"Zad6_2 "<<licznik<<endl;
   wynik.close();
}
long long int konwersja(string n){
   long long int p8=1;
   long long int wynik=0;
   for(int i=n.size()-2;i>=0; i--){
      wynik+=p8*(n[i]-'0');
      p8=p8*8;
   }
   return wynik;
}
long long int konwersja2(string n, int podst){
   long long int p=1;
   long long int wynik=0;
   for(int i=n.size()-2;i>=0; i--){
      wynik+=p*(n[i]-'0');
      p=podst*p;
   }
   return wynik;
}
void zad6_3(){
   ofstream wynik("wyniki_6_3.txt");
   int licznik=0;
   for(int i=0;i<999;i++){
      int ost=liczby[i].size()-1;
      if(konwersja2(liczby[i][ost],2)%2==0){
         licznik++;
      }
   }
   cout<<"Zad6_3 "<<licznik<<endl;
   wynik<<"Zad6_3 "<<licznik<<endl;
   wynik.close();
}
void zad6_4(){
   ofstream wynik("wyniki_6_4.txt");
   int suma=0;
   for(int i=0;i<999;i++){
      int ost=liczby[i].size()-1;
      //cout<<i<<endl;
      if(liczby[i][ost]=='8'){
         suma+=konwersja(liczby[i]);
      }
   }
   cout<<"Zad6_4 "<<suma<<endl;
   wynik<<"Zad6_4 "<<suma<<endl;
   wynik.close();
}
//long long int konwersja2(string n, int podst){
  // long long int p=1;
  // long long int wynik=0;
  // for(int i=n.size()-2;i>=0; i--){
  //    wynik+=p*(n[i]-'0');
  //    p=podst*p;
 //  }
//   return wynik;
//}
//void zad6_5(){
   //ofstream wynik("wyniki_6_5.txt");
   //string kod_max=liczby[0], kod_min=liczby[0];
  // int x_max=konwersja2(kod_max,), x_min;
   //for(int i=1;i<999;i++){
      //int ost=liczby[i].size()-1;
      //long long int x=konwersja2(liczby[i],liczby[i][ost]-'0');
     // if(x<)
  // }
  // cout<<"Zad6_5 "<<suma<<endl;
  // wynik<<"Zad6_5 "<<suma<<endl;
  // wynik.close();
//}
int main()
{
   for(int i=0; i<999; i++){
      dane>>liczby[i];
      }
   dane.close();
   zad6_1();
   zad6_2();
   zad6_4();
   //string x;
   //cin>>x;
   //cout<<konwersja(x)<<endl;
  // cout<<parzystosc(4234333);
   return 0;
}
