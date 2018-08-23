#include <bits/stdc++.h>
using namespace std;
int main() {
  int latasHarry;
  int latasLarry;
  int total;
  int noHarry;
  int noLarry;
  cin>>latasHarry;
  cin>>latasLarry;
  total=(latasHarry+latasLarry-1);
  noHarry=total-latasHarry;
  noLarry=total-latasLarry;
  cout<<noHarry<<endl;
  cout<<noLarry;
  return 0;
}
