#include <bits/stdc++.h>
using namespace std;
ifstream dane("kopalniautf8.txt");
ifstream dane2("fabryka.txt");
ofstream wynik("wynik1.txt");
int bintodec(string s){
   int p2=1;
   int wynik=0;
   for(int i=s.size()-1; i>=0; i--){
      if(s[i]=='1')
         wynik+=p2;
      p2=p2*2;
   }
   return wynik;
}
int N;
vector<string>tab1;
vector<string>tab2;
void zad1_1(){
   string godz, minu, sek, tony;
   for(int i=0; i<N; i++){
      cout<<i<<" "<<tab1[i]<<endl;
      godz=tab1[i].substr(0,5);
      minu=tab1[i].substr(6,5);
      sek=tab1[i].substr(12,5);
      tony=tab2[i];
     // cout<<godz<<"/"<<minu<<"/"<<sek<<"/"<<tony<<"/"<<endl;
     int kwarta=godz[0]-'A'+1;
     string binarny=godz.substr(1,4);
     int g=bintodec(binarny)+(kwarta-1)*6;
     int kwarta2=minu[0]-'A'+1;
     string binarny2=minu.substr(1,4);
     int g2=bintodec(binarny2)+(kwarta2-1)*15;
     int kwarta3=sek[0]-'A'+1;
     string binarny3=sek.substr(1,4);
     int g3=bintodec(binarny3)+(kwarta3-1)*15;
     int kwarta4=tony[0]-'A'+1;
     string binarny4=tony.substr(1,8);
     int g4=bintodec(binarny4)+(kwarta4-1)*250;
     cout<<g<<" "<<g2<<" "<<g3<<" "<<g4<<endl;
   }
}
int main(){
   string s; dane>>s;
   N=bintodec(s);
   tab1.resize(N);
   tab2.resize(N);
   for(int i=0; i<N; i++){
      dane>>tab1[i]>>tab2[i];
      //cout<<i<<" "<<tab1[i]<<endl;
   }
   dane.close();
   dane2.close();
   wynik.close();
   zad1_1();
   return 0;
}
