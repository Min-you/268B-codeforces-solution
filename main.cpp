#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n; 
  cin >> n;
  // use dp
  cout << (n - 1) * n * (n + 1) / 6 + n << endl;
}
