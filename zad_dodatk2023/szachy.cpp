#include <bits/stdc++.h>
using namespace std;
struct plansza{
   string rzad[8];
};
const int N=9;
plansza gra[N];
void wczytaj(){
   ifstream dane("szachy_przyklad.txt");
   for(int i=0; i<N; i++){
      for(int j=0;j<8;j++)
         dane>>gra[i].rzad[j];
      }
   dane.close();
}
void wypisz(){
   for(int i=0; i<N; i++){
      for(int j=0;j<8;j++)
         cout<<gra[i].rzad[j]<<endl;
      cout<<endl;
   }
}
int ilosc(int i){
   int puste_kolumny=0;
   for(int k=0; k<8; k++){
      int licznik=0;
      for(int j=0; j<8; j++){
         if(gra[i].rzad[j][k]=='.'){
            licznik++;
         }
      }
      if(licznik==8){
         puste_kolumny++;
      }
   }
   return puste_kolumny;
}
void zad1_1(){
  int liczba_plansz=0, max_puste=0;
   for(int i=0; i<N; i++){
      int x=ilosc(i);
      if(x>0){
         liczba_plansz++;
      }
      if(x>max_puste){
         max_puste=x;
      }
   }
   ofstream wynik1("zadanie1_1.txt");
   cout<<"zad1_1 "<<liczba_plansz<<" "<<max_puste<<endl;
   wynik1<<"zad1_1 "<<liczba_plansz<<" "<<max_puste<<endl;
   wynik1.close();
}
bool rownowaga(int i){
   string figury="KkSsPpWwHhGg.";
   int tab[13]={0};
   for(int j=0; j<8; j++){
      for(int k=0; k<8; k++){
         char znak=gra[i].rzad[j][k]; //[k] powoduje ze odwolujemy sie do k-tego znaku w j-tym rzedzie
         int pozycja=figury.find(znak);
         tab[pozycja]++;
      }
   }
   for(int pozycja=0; pozycja<=10 ;pozycja+=2){
      if(tab[pozycja]!=tab[pozycja+1])
         return false;
   }
   return true;
}
int bierki(int i){
   int b=0;
   for(int j=0; j<8; j++){
      for(int k=0; k<8; k++){
         char znak=gra[i].rzad[j][k];
         if(znak!='.'){
            b++;
         }
      }
   }
   return b;
}
void zad1_2(){
   int licznik=0;
   int min_ilosc=64;
   for(int i=0; i<N; i++){
      if(rownowaga(i)){
         licznik++;
         int b=bierki(i);
         if(b<min_ilosc){
            min_ilosc=b;
         }
      }
   }
   ofstream wynik2("zadanie1_2.txt");
   cout<<"zad1_2 "<<licznik<<" "<<min_ilosc<<endl;
   wynik2<<"zad1_2 "<<licznik<<" "<<min_ilosc<<endl;
   wynik2.close();
}
bool szachWk(int i){
   int j,k;
   for(j=0; j<8; j++){
      for(k=0; k<8; k++){
         char znak=gra[i].rzad[j][k];
         if(znak=='k')
            goto znaleziono;
      }
   }
   znaleziono:
   for(){};
   for(){};
   for(){};
   for(){};

}
void zad1_3(){
   ofstream wynik3("zadanie1_3.txt");
   wynik3.close();
}

int main()
{
wczytaj();
//wypisz();
zad1_1();
zad1_2();

return 0;
}
