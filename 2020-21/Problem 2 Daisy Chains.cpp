#include <iostream>
using namespace std;
int main() {
  int n, num[100],ans=0,length=0;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  for(int i=0; i<n; i++){
   for(int k=i; k<n; k++){
     float test=0,nwlf; // nwlf == number we looking for
     length=0;
     for(int z=i; z<=k; z++){
      test+=num[z];
      length++;  
    }
     nwlf=test/length;
     for(int j=i; j<=k; j++){
       if(nwlf==num[j]){
         ans++;
         break;
         }
       }
   } 
 }
 cout << ans;
 } 
