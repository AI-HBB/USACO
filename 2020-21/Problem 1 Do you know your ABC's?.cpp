#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
//freopen(".in", "r", stdin);
//freopen(".out", "w", stdout);
int a,b,c,num[7];
for(int i=0; i<7; i++){
  cin >> num[i];
}
sort(num, num+7);
a=num[0];
b=num[1];
c=num[6]-b-a; // We need to subtract b first because b might be bigger than a;
cout << a << " " << b << " " << c;

}
