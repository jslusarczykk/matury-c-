#include <bits/stdc++.h>
using namespace std;

int main()
{
int liczba; cin>>liczba;
int potega=1;
int wartosc=0;
while(liczba>0){
   int cyfra=liczba%10;
   int numer=9-cyfra;
   liczba=liczba/10;
   wartosc+=numer*potega;
   potega=potega*10;
}
cout<<wartosc;
return 0;
}
