#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin>>ws, s);
  int max{1}, counter{1};
  for(size_t i =1; i<s.length(); i++) {
    if(s.at(i)==s.at(i-1)) {
      counter++;
    if(max<counter)
      max = counter;
    }
    else counter =1;
  }
  cout<<max;
  return 0;
}
