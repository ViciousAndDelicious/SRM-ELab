#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int n,i,j,num;
    double mult=0;
    cin >>n;
    for(i=1;i<=n;i++)
    {
      cin >>num;
      mult=mult+(double)log10(num);
    }
    double ans;
    
    ans= mult/n;
    ans=pow(10,ans);
    
    cout << ceil(ans)<<endl;
  }
  return 0;

}