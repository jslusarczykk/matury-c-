#include <bits/stdc++.h>
using namespace std;
const int N=10;
ifstream dane("odcinki.txt");
ofstream wynik("wyniki3.txt");
int tab[N+1][3];
bool trojkat(int a, int b, int c){
   if(a+b<=c)
      return false;
   if(c+b<=a)
      return false;
   if(a+c<=b)
      return false;
   return true;
}
bool polpierwsza(int a){
   int iloscp=2;
   for(int i=2; i<a; i++){
      if(a%i==0)
         iloscp++;
   }
   if(iloscp==4){
      return true;
   }
   return false;
}
double heron(int a, int b, int c){
   if(!trojkat(a,b,c))
      return -1;
   double p=0.5*(a+b+c);
   double pole=sqrt(p*(p-a)*(p-b)*(p-c));
   //cout<<"Heron: "<<p*(p-a)*(p-b)*(p-c)<<endl;
   return pole;
}
int obwod(int a, int b, int c){
   if(!trojkat)
      return 0;
   return a+b+c;
}
void zad3_1(){
   cout<<"Zad3_1: "<<endl;
   wynik<<"Zad3_1: "<<endl;
   int licznik=0;
   for(int i=1; i<=N; i++){
      //cout<<i<<" "<<trojkat(tab[i][0],tab[i][1],tab[i][2])<<endl;
      if(trojkat(tab[i][0],tab[i][1],tab[i][2])){
         licznik++;
      }
   }
   cout<<licznik<<endl;
   wynik<<licznik<<endl;
}
void zad3_2(){
   cout<<"Zad3_2: "<<endl;
   wynik<<"Zad3_2: "<<endl;

   int numerw=0;
   int maxlicznik=0;
   for(int i=1; i<=N; i++){
      int licznik=0;
      if(polpierwsza(tab[i][0]))
         licznik++;
      if(polpierwsza(tab[i][1]))
         licznik++;
      if(polpierwsza(tab[i][2]))
         licznik++;
      if(licznik>maxlicznik){
         maxlicznik=licznik;
         numerw=i;
      }
   }
   for(int i=1; i<=N; i++){
      int licznik=0;
      if(polpierwsza(tab[i][0]))
         licznik++;
      if(polpierwsza(tab[i][1]))
         licznik++;
      if(polpierwsza(tab[i][2]))
         licznik++;
      if(licznik==maxlicznik){
         cout<<i<<endl;
         wynik<<i<<endl;
      }
   }

}
void zad3_3(){
   cout<<"Zad3_3: "<<endl;
   wynik<<"Zad3_3: "<<endl;
   double maxpole=0;
   for(int i=1; i<=N; i++){
      double p=heron(tab[i][0],tab[i][1],tab[i][2]);
      //cout<<p<<endl;
      if(maxpole<p){
         maxpole=p;
      }
   }
   for(int i=1; i<=N; i++){
      if(maxpole==heron(tab[i][0],tab[i][1],tab[i][2])){
         cout<<i<<endl;
         wynik<<i<<endl;
      }
   }
}
void zad3_4(){
   cout<<"Zad3_4: "<<endl;
   wynik<<"Zad3_4: "<<endl;
   int max_obwod=0;
   int licznik=0;
   for(int i=1; i<=N; i++){
      if(max_obwod<obwod(tab[i][0],tab[i][1],tab[i][2])){
         max_obwod=obwod(tab[i][0],tab[i][1],tab[i][2]);
      }
   }
   for(int i=1; i<=N; i++){
      if(obwod(tab[i][0],tab[i][1],tab[i][2])==max_obwod){
         licznik++;
      }
   }
   cout<<max_obwod<<" "<<licznik<<endl;
}
int main(){
for(int i=1; i<=N; i++){
   dane>>tab[i][0]>>tab[i][1]>>tab[i][2];
}
dane.close();
zad3_1();
zad3_2();
zad3_3();
zad3_4();
wynik.close();
return 0;
}
