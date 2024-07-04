#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin>>s;
  char max_char, prev_char='&';
  int max_count=0, prev_count=0;
  for(int i=0; i<s.size(); i++){
    if(s[i]==prev_char)
      prev_count++;
    else{
      if(prev_count > max_count){
        max_count = prev_count;
        max_char = prev_char;
      }
      prev_char = s[i];
      prev_count = 1;
    }
  }
  if(prev_count > max_count){
    max_count = prev_count;
    max_char = prev_char;
  }
  cout<<max_char<<" "<<max_count<<endl;
  return 0;
}
