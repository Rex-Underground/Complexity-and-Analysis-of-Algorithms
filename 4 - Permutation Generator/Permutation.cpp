#include<bits/stdc++.h>
using namespace std;

void print(int* arr , int n)
{
  for(int i=0 ; i<n ; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void Pg(int* arr , int n , int k)
{
  if(k == n)
  {
  print(arr,n);
  return;
  }
  else{
    int i;
    for(i=k ; i<n ; i++)
    {
        swap(arr[i],arr[k]);
        Pg(arr,n,k+1);
        swap(arr[i],arr[k]); 
    }
  }
}
int main()
{
 int arr[3] ={1,2,3};
 Pg(arr,3,0); 
}