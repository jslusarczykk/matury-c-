#include <bits/stdc++.h>
using namespace std;
int tab[1000];
void zad4_1(){
   cout<<"zad4_1"<<endl;
   int maximum=abs(tab[1]-tab[0]), minimum=abs(tab[1]-tab[0]);
   for(int i=0; i<999; i++){
      int luka=abs(tab[i+1]-tab[i]);
      if(luka>maximum)
         maximum=luka;
      if(luka<minimum)
         minimum=luka;
   }
   cout<<maximum<<" "<<minimum<<endl;
}
void zad4_3(){
   cout<<"zad4_3"<<endl;
   int tab_luki[999];
   for(int i=0; i<999; i++){
      int luka=abs(tab[i+1]-tab[i]);
      tab_luki[i]=luka;
   }
   //sort(tab_luki,tab_luki+999);
   int tab_ilosc[999];
   for(int i=0; i<999; i++){
      int licznik=0;
      int x=tab_luki[i];
      for(int j=0; j<999; j++){
         if(tab_luki[j]==x)
            licznik++;
      }
      tab_ilosc[i]=licznik;
   }
   sort(tab_ilosc, tab_ilosc+999);
   cout<<tab_ilosc[998]<<endl;
}
int main()
{
ifstream plik("dane4.txt");
for(int i=0; i<1000; i++){
   plik>>tab[i];
}
plik.close();
zad4_1();
zad4_3();
return 0;
}
