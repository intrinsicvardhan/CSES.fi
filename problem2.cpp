#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n{};
  cin>>n;
  int arr[n] {};
  for(int i = 0; i<n; ++i) {
    cin>>arr[i];
  }
  sort(arr, arr+n);
  int x{};
  for(int i =1; i<=n; ++i) {
    if(!binary_search(arr,arr+n,i)){
        x = i;
        break;
        }
      }
      cout<<x;
      return 0;
}
