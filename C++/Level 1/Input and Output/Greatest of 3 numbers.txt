#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin>>a>>b>>c;
  int temp;
  (a>b)? temp = a : temp = b;
  (temp>c)? cout<<temp : cout<<"";
  (c>a)? temp = c : 0;
  (c>b)? cout<<c : cout<<"";
  return 0;
}