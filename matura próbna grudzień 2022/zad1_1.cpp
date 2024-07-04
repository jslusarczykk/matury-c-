#include <bits/stdc++.h>
using namespace std;
ifstream dane("mecz.txt");
string s;
int main()
{
dane>>s;
int licznik=0;
for(int i=1; i<s.size()-1; i++){
   if(s[i+1]!=s[i])
      licznik++;
}
cout<<licznik;
dane.close();
return 0;
}
