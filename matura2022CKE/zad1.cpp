#include <bits/stdc++.h>
using namespace std;

int main(){

int n; cin>>n;
bool poprawne[n+1]={false};
int liczbaelem=0;
for(int i=1; i<=n; i++){
   int x;
   cin>>x;
   poprawne[x]=true;
}
for(int i=1; i<=n; i++){
   if(poprawne[i])
      liczbaelem++;
}
cout<<n-liczbaelem<<endl;



return 0;
}
