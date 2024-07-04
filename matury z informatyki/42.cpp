
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
