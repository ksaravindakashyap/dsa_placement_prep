#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "Geeks";
  cout<<"original"<<str<<endl;
  int n=str.length();
  int low = 0;
  int high = n-1;
  for(int i=0;i<n;++i)
  {
    if(low<high)
    {
      swap(str[low++], str[high--]);
    }
  }
  cout<<str<<endl;
  return 0;
}
