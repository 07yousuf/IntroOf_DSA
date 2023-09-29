#include <bits/stdc++.h>

using namespace std;

int main()
{
  int *sample = new int[5];
  for(int i=0; i<5; i++){
      cin>>sample[i];
  }
  int *sample2 = new int[7];
  for(int i=0; i<7; i++){
      sample2[i]=sample[i];
  }
  sample2[5]=70;
  sample2[6]=80;
  for(int i=0; i<7; i++){
      cout<<sample2[i]<<" ";
  }

   delete[] sample; //Deleting that array full memory without first index address
   return 0;
}