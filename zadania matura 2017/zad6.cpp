#include <bits/stdc++.h>
using namespace std;
ifstream dane("przyklad.txt");
ofstream wynik("wyniki6.txt");
int pixele[200][320];
void zad61(){
   int minpix=255;
   int maxpix=0;
   for(int wiersz=0; wiersz<200; wiersz++){
      for(int kolumna=0; kolumna<320; kolumna++){
         if(pixele[wiersz][kolumna]>maxpix)
            maxpix=pixele[wiersz][kolumna];
         if(pixele[wiersz][kolumna]<minpix)
            minpix=pixele[wiersz][kolumna];
      }
   }
   cout<<"zad6_1"<<" "<<maxpix<<" "<<minpix<<endl;
   wynik<<"zad6_1"<<" "<<maxpix<<" "<<minpix<<endl;
}
bool palindrom(int wiersz){
   for(int i=0, j=319;i<j;i++,j--)
      if(pixele[wiersz][i]!=pixele[wiersz][j])
         return false;
   return true;
}
void zad62(){
   int licznik=0;
    for(int wiersz=0; wiersz<200; wiersz++){
      if(!palindrom(wiersz)){
         licznik++;
      }
    }
    cout<<"zad6_2"<<" "<<licznik<<endl;
   wynik<<"zad6_2"<<" "<<licznik<<endl;
}
bool kontrast(int wiersz, int kolumna){
   if(pixele[wiersz][kolumna])
}
void zad63(){
   int licznik=0;
   for(int wiersz=0; wiersz<200; wiersz++){
      for(int kolumna=0; kolumna<320; kolumna++){
         if(kontrast(wiersz, kolumna))
            licznik++;
      }
   }
   cout<<"zad6_3"<<" "<<licznik<<endl;
   wynik<<"zad6_3"<<" "<<licznik<<endl;
}
}
int main(){
for(int wiersz=0; wiersz<200; wiersz++){
   for(int kolumna=0; kolumna<320; kolumna++)
      dane>>pixele[wiersz][kolumna];
}
zad61();
zad62();
zad63();
wynik.close();
dane.close();
return 0;
}
