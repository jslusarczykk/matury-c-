#include <bits/stdc++.h>
using namespace std;
const int n=200;
int licznik=0;
int tab[n]={};
void zad_1(){
   int zmiana=0;
   for(int i=0; i<n; i++){
      int ostatnia=tab[i]%10;
      int pierwsza=tab[i];
      while(pierwsza>=10)
         pierwsza=pierwsza/10;
      if(pierwsza==ostatnia){
         licznik++;
         if(zmiana==0){
            zmiana=tab[i];
         };
      }


   }
   cout<<"Zad4_1"<<" "<<licznik<<" "<<zmiana<<endl;
}
void rozklad(int x, vector<int>&dzielniki){
   dzielniki.clear();
   int g=2;
   while(x>1){
      if(x%g==0){
         x=x/g;
         dzielniki.push_back(g); //zalatwia nam  to wielokrotnosci dzielenia
      }
      else
         g++;
   }
}
void rozklad2(int x, vector<int>&dzielniki){
   dzielniki.clear();
   int g=2;
   while(x>1){
      if(x%g==0){
         dzielniki.push_back(g); //zalatwia nam  to wielokrotnosci dzielenia
         while(x%g==0)
            x=x/g;
      }
      else
         g++;
   }

}
void zad_2(){
   int najwiecej=0;
   int liczba=0;
   int najwiecej_2=0;
   int liczba_2=0;
   for(int i=0; i<n; i++){
      vector <int> dzielniki;
      rozklad(tab[i],dzielniki);
      if(dzielniki.size()>najwiecej){
         najwiecej=dzielniki.size();
         liczba=tab[i];
      }
      rozklad2(tab[i],dzielniki);
      if(dzielniki.size()>najwiecej_2){
         najwiecej_2=dzielniki.size();
         liczba_2=tab[i];
      }
   }
   cout<<"zad4_2 "<<liczba<<" "<<najwiecej<<endl;
   cout<<"zad4_2_2 "<<liczba_2<<" "<<najwiecej_2<<endl;
}
void zad_3(){
   int licznik=0;
   int licznikpiatek=0;
   ofstream trojki("trojki.txt");
   sort(tab, tab+200);
   cout<<"zad_3 ";
   for(int i=0; i<n; i++){
      int x=tab[i];
      for(int j=i+1;j<n; j++){
         int y=tab[j];
         for(int k=j+1; k<n; k++){
            int z=tab[k];
            if(y%x==0&&z%y==0){
               cout<<x<<" "<<y<<" "<<z<<endl;
               licznik++;
               trojki<<x<<" "<<y<<" "<<z<<endl;
               for(int l=k+1; l<n; l++){
                  int w=tab[l];
                  for(int m=l+1; m<n; m++){
                     int u=tab[m];
                     if(w%z==0&&u%w==0){
                        cout<<x<<" "<<y<<" "<<z<<" "<<w<<" "<<u<<endl;
                        licznikpiatek++;
                     }
                  }
               }
            }
         }
      }
   }
   cout<<" "<<licznik<<endl;
   trojki.close();
   cout<<"licznik piatek "<<licznikpiatek<<endl;

}
int main()
{
ifstream przyklad("liczby.txt");
for(int i=0; i<n; i++){
   przyklad>>tab[i];
}
przyklad.close();
zad_1();
zad_2();
zad_3();
return 0;
}
