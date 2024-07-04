#include <bits/stdc++.h>
using namespace std;
int cyfry(int n){
   if(n<10)
      return 1;
   int licznik=0;
   while(n>0){
      n=n/10;
      licznik++;
   }
   return licznik;
}
int potega(int ost,int x){
   int wynik=1;
   while(ost>0){
      wynik=x*wynik;
      ost=ost-1;
   }
   return wynik;
}
bool armstrong(int n){
   int k=n;
   int iloscyfr=cyfry(n);
   int suma=0;
   while(n>0){
      int ost=n%10;
      suma=suma+potega(iloscyfr, ost);
      n=n/10;
   }
   if(suma==k)
      return true;
   else
      return false;
}
int main()
{
//cout<<potega(10,2)<<endl; //dziala
cout<<armstrong();
return 0;
}
