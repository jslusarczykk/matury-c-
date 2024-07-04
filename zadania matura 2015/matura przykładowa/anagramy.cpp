#include <bits/stdc++.h>
using namespace std;
ifstream dane("dane_anagramy.txt");
ofstream wynik("wyniki_anagramy.txt");
int tab1[1000];
int tab2[1000];
bool czyA(int x, int y){
   int liczby[10]={0};
   int liczby2[10]={0};
   while(x>0){
      int c=x%10;
      liczby[c]++;
      x=x/10;
   }
   while(y>0){
      int c=y%10;
      liczby2[c]++;
      y=y/10;
   }
   for(int i=0; i<10; i++){
      if(liczby[i]!=liczby2[i])
         return false
   }
   return true;
}
void zad4a(){
   int licznik=0;
   for(int i=0; i<1000; i++)
      if(anagram(tab[i],tab2[i]))
         licznik++;
   wynik<<licznik<<endl;
   cout<<licznik<<endl;
}
int main(){
for(int i=0; i<1000; i++){
   dane>>tab1[i];
   dane>>tab2[i];
}
return 0;
}
