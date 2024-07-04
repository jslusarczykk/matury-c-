#include <bits/stdc++.h>
using namespace std;
ifstream dane("slowa.txt");
ofstream wyniki("wyniki4.txt");
ofstream rodziny("rodziny.txt");
vector<string>slowa(2001);
bool palindrom(string s){
   int i=0, j=s.size()-1;
   while(i<j){
      if(s[i]!=s[j])
         return false;
      else{
         i++;
         j--;
      }
   }
   return true;
}
void zad4_1(){
   int licznik=0;
   for(int i=1; i<=2000; i++){
      if(palindrom(slowa[i]))
         licznik++;
   }
   cout<<"Zad4_1"<<" "<<licznik<<endl;
   wyniki<<"Zad4_1"<<" "<<licznik<<endl;
}
int tab[201];
void zad4_2(){
   for(int i=1; i<=2000; i++){
      if(palindrom(slowa[i]))
         tab[slowa[i].size()]++;
   }
   int licznik=0;
   for(int i=1; i<201; i++){
      if(tab[i]!=0)
         licznik++;
   }
   cout<<"Zad4_2"<<" "<<licznik<<endl;
   wyniki<<"Zad4_2"<<" "<<licznik<<endl;
}
vector<string>tab2[201];
zad4_3(){
   cout<<"Zad4_3"<<endl;
   for(int i=1; i<=2000; i++){
      if(palindrom(slowa[i])){
         tab2[slowa[i].size()].push_back(slowa[i]);
      }
   }
   for(int i=1; i<=200; i++){
      if(tab[i]>0)
         sort(tab2[i].begin(),tab2[i].end());
   }
   for(int i=1; i<201; i++){
      if(tab[i]>0){
         for(int j=0; j<tab[i]; j++){
            cout<<tab2[i][j]<<" ";
         }
         cout<<endl;
      }

   }
}
int main(){
   for(int i=1; i<=2000; i++){
      dane>>slowa[i];
   }
   zad4_1();
   zad4_2();
   zad4_3();
   return 0;
}
