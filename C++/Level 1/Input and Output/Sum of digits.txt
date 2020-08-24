#include <iostream>
using namespace std;
int main() {
  int a, res=0;
	cin>>a;
  while(a!=0) {
    res = res + (a%10);
    a = a/10;
  }
  cout<<res;
	return 0;
}