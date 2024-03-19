#include<bits/stdc++.h>
using namespace std;

void print(int start,int end)
{
  cout<<start<<" -> "<<end;
}
void towers_of_hanoi(int start,int end,int n)
{
  if(n==1)
  {print(start,end);
  return;}
  else{  
  int other = n-(start+end);
  towers_of_hanoi(start,other,n-1);
  print(start,end);
  towers_of_hanoi(other,end,n-1);
  }
}
int main()
{
  towers_of_hanoi(1,3,4);
  return 0;
}

//Pseudo Code : 
