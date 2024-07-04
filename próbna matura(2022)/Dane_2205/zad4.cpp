#include <bits/stdc++.h>
using namespace std;
ifstream dane("liczby.txt");
ofstream wynik("wyniki4.txt");
int tab[201];
bool palindrom(int x){
   int ostatnia = x%10;
   while(x>=10){
      x=x/10;
   }
   if(x==ostatnia)
      return true;
   return false;
}
void zad4_1(){
   cout<<"zad4_1: "<<endl;
   wynik<<"zad4_1: "<<endl;
   int licznik=0;
   for(int i=1; i<=200; i++){
      if(palindrom(tab[i]))
         licznik++;
   }
   cout<<licznik<<" ";
   wynik<<licznik<<" ";
   for(int i=1; i<=200; i++){
         if(palindrom(tab[i])){
            cout<<tab[i]<<endl;
            wynik<<tab[i]<<endl;
            break;
         }
   }
}
int rozklad2(int x){ //powtarzalne liczby
   int czynniki=0;
    for(int i=2; i<=x; i++){
      if(x%i==0){
         //cout<<i<<" ";
         czynniki++;
         x=x/i;
         i=1;
      }
   }
   return czynniki;
}
int rozklad1(int x){ //niepowtarzalne liczby
   int czynniki=0;
   for(int i=2; i<=x; i++){
      if(x%i==0){
         //cout<<i<<" ";
         czynniki++;
         x=x/i;
      }
   }
   return czynniki;
}
void zad4_2(){
   cout<<"zad4_2: "<<endl;
   wynik<<"zad4_2: "<<endl;
   int maxczynnik=0;
   int liczbamc=0;
   int unikalnymaxczynnik=0;
   int pliczbamc=0;
   for(int i=1; i<=200; i++){
      if(rozklad2(tab[i])>maxczynnik){
         maxczynnik=rozklad2(tab[i]);
         liczbamc=tab[i];
      }
      if(rozklad1(tab[i])>unikalnymaxczynnik){
         unikalnymaxczynnik=rozklad1(tab[i]);
         pliczbamc=tab[i];
      }
   }
   cout<<liczbamc<<" "<<maxczynnik<<" "<<pliczbamc<<" "<<unikalnymaxczynnik<<endl;
   wynik<<liczbamc<<" "<<maxczynnik<<" "<<pliczbamc<<" "<<unikalnymaxczynnik<<endl;
}
void zad4_3(){
   ofstream trojki("trojki.txt");
   int licznik=0;
   cout<<"zad4_3: "<<endl;
   wynik<<"zad4_3: "<<endl;
   sort(tab+1,tab+201);
   for(int i=1; i<=200; i++){
      int x=tab[i];
      for(int j=i+1; j<=200; j++){
         int y=tab[j];
         if(y%x==0){
            for(int k=j+1; k<=200; k++){
               int z=tab[k];
               if(z%y==0){
                  licznik++;
                  trojki<<x<<" "<<y<<" "<<z<<endl;
               }
            }
         }
      }
   }
   int piatki=0;
   for(int a=1; a<=200; a++){
      int aa=tab[a];
      for(int b=a+1; b<=200; b++){
         int bb=tab[b];
         if(bb%aa==0){
            for(int c=b+1; c<=200; c++){
               int cc=tab[c];
               if(cc%bb==0){
                  for(int d=c+1; d<=200; d++){
                     int dd=tab[d];
                     if(dd%cc==0){
                        for(int e=d+1; e<=200; e++){
                           int ee=tab[e];
                           if(ee%dd==0){
                              piatki++;
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   trojki.close();
   cout<<licznik<<" "<<piatki<<endl;
   wynik<<licznik<<" "<<piatki<<endl;
}
int main(){
for(int i=1; i<=200; i++){
   dane>>tab[i];
}
zad4_1();
zad4_2();
zad4_3();
//cout<<rozklad1(32)<<endl;
//cout<<rozklad2(32);
dane.close();
wynik.close();
return 0;
}
