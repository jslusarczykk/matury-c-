#include <bits/stdc++.h>
using namespace std;
ifstream dane("binarne.txt");
ofstream wynik("zadanie4.txt");
vector<string>napisy(500);
bool dwucykliczna(string s){
   int dlugosc=s.size();
   if(s.substr(0,dlugosc/2)==s.substr(dlugosc/2,dlugosc))
      return true;
   return false;

}
void zad4_1(){
   string najdluzszy; int dlugosc=0, licznik=0;
   for(int i=0; i<500; i++){
      if(dwucykliczna(napisy[i])){
         licznik++;
         if(napisy[i].size()>dlugosc){
            dlugosc=napisy[i].size();
            najdluzszy=napisy[i];
         }
      }

   }
   cout<<"zad4_1"<<endl;
   wynik<<"zad4_1"<<endl;
   cout<<licznik<<" "<<najdluzszy<<" "<<dlugosc<<endl;
   wynik<<licznik<<" "<<najdluzszy<<" "<<dlugosc<<endl;

}
bool BCD(string s){
   int licznik=0;
   for(int i=0; i<s.size()-1;){
      licznik=0;
      if(s[i]=='1')
         licznik=licznik+8;
      if(s[i+1]=='1')
         licznik=licznik+4;
      if(s[i+2]=='1')
         licznik=licznik+2;
      if(s[i+3]=='1')
         licznik++;
      if(licznik>9){
         return false;
      }
      i=i+4;
   }
   return true;
}
void zad4_2(){
   int niepoprawne=0, MIN_dl=999999;
   for(int i=0; i<500; i++){
      if(!BCD(napisy[i])){
         if(napisy[i].size()<MIN_dl)
            MIN_dl=napisy[i].size();
         niepoprawne++;
      }
   }
   cout<<"zad4_2 "<<niepoprawne<<" "<<MIN_dl<<endl;
   wynik<<"zad4_2 "<<niepoprawne<<" "<<MIN_dl<<endl;

}
int main(){
for(int i=0; i<500; i++){
   dane>>napisy[i];
}
zad4_1();
zad4_2();
dane.close();
wynik.close();
return 0;
}
