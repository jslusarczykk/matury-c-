#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> s1, s2;
string neon;
void shift(char znak){
   for(int i=0; i<neon.size(); i++)
      if(neon[i]==znak){
         if(neon[i]=='Z')
            neon[i]='A' ;
         else
            neon[i] ++;
         return ;
      }
}
void zad4()
{
  for(int i=0; i<n; i++){
      if(s1[i]=="DOPISZ")
         neon += s2[i] ;
      else if(s1[i]=="USUN")
         neon.erase(neon.size()-1, 1);
      else if(s1[i]=="ZMIEN")
         neon[neon.size()-1]=s2[i][0];
      else if(s1[i]=="PRZESUN")
         shift(s2[i][0]);
  }
}
void zad4_1()
{
  cout << "Zad.4.1" << endl;
  cout<<neon.size()<<endl;
}
void zad4_2_nieaktualne()
{
  cout << "Zad.4.2" << endl;
  int licznik_d=0, licznik_z=0, licznik_p=0, licznik_u=0;
  for(int i=0; i<n; i++)
      if(s1[1]=="DOPISZ")
         licznik_d+=1;
      else if(s1[1]=="USUN")
         licznik_u+=1;
      else if(s1[1]=="ZMIEN")
         licznik_z+=1;
      else if(s1[1]=="PRZESUN")
         licznik_p+=1;
int a, b;
a=max(licznik_d, licznik_u);
b=max(licznik_z, licznik_p);
if(licznik_d==max(a,b))
   cout<<"DOPISZ"<<" "<<max(a,b)<<endl;
else if(licznik_u==max(a,b))
   cout<<"USUN"<<" "<<max(a,b)<<endl;
else if(licznik_z==max(a,b))
   cout<<"ZMIEN"<<" "<<max(a,b)<<endl;
else if(licznik_p==max(a,b))
   cout<<"PRZESUN"<<" "<<max(a,b)<<endl;
}
void zad4_2()
{
  cout << "Zad. 4.2" << endl;
  string prev_instruction = "";
  int prev_count = 0;
  string max_instruction;
  int max_count = 0;
  for(int i=0; i<n; i++)
  {
    if(s1[i] == prev_instruction)
    {
      prev_count++;
    }
    else
    {
      if(prev_count > max_count)
      {
        max_count = prev_count;
        max_instruction = prev_instruction;
      }
      /*
      DOPISZ A
      DOPISZ B
      DOPISZ C
      USUN 1   prev_count=3  prev_instruction="DOPISZ"
      USUN 1
      USUN 1
      USUN 1
      */
      prev_count = 1;
      prev_instruction = s1[i];
    }
  }
  // po pêtli
  if(prev_count > max_count)
  {
    max_count = prev_count; // 4
    max_instruction = prev_instruction; // "USUN"
  }
  cout << "Najdluzsza sekwencja: " << max_instruction << " " << max_count << endl;
}
void zad4_3()
{
  cout << "Zad.4.3" << endl;
  vector<int> licznik(26);
  for(int i=0; i<n; i++)
      if(s1[i]=="DOPISZ")
         licznik[s2[i][0]-'A']++;
  int numer_licznika=0;
  for(int i=0; i<26; i++)
   if(licznik[i]>licznik[numer_licznika])
      numer_licznika=i;
   cout<<char(numer_licznika +'A')<<" "<<licznik[numer_licznika]<<endl;
}
void zad4_4()
{
  cout << "Zad.4.4" << endl;
  cout<<neon<<endl;
}


int main()
{
  ifstream f("instrukcje.txt");
  n = 2000;
  s1.resize(n);
  s2.resize(n);
  for(int i=0; i<n; i++)
    f >> s1[i] >> s2[i];
  f.close();
  zad4();
  zad4_1();
  zad4_2();
  zad4_3();
  zad4_4();
  return 0;
}
