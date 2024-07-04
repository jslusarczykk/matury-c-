#include <bits/stdc++.h>
using namespace std;
ifstream dane("liczby.txt");
ofstream wynik("wyniki3_2.txt");
void sumaC(long long x){
   long long K=x;
   long long rzad=0;
   long long suma=0;
   while(K>9){
      cout<<"*"<<endl;
      suma=0;
      while(K>0){
         suma=suma+K%10;
         K=K/10;
      }
      rzad=rzad+1;
      K=suma;
   }
   cout<<"liczba "<<x<<" Nalezy do grupy "<<K<<" rzedu "<<rzad<<endl;
}
long long liczydloGR(long long x){
   if(x<=9)
      return x;
   long long K=x;
   long long rzad=0;
   long long suma=0;
   while(K>0){
      suma=suma+K%10;
      K=K/10;
   }
   rzad=rzad+1;
   K=suma;
   return liczydloGR(K);
}
int main(){
  // long long tab[100];
  // for(int i=0; i<100; i++){
     // dane>>tab[i];
   //}
   //for(int i=0; i<100; i++){
    //  liczydloGR(tab[i]);
  // }
   //long long x; cin>>x;
   //sumaC(x);
   cout<<liczydloGR(698);
return 0;
}
