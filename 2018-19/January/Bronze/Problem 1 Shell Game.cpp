#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> 
using namespace std;
int main() {
freopen("shell.in", "r", stdin);
freopen("shell.out", "w", stdout);
int N,a[101],b[101],g[101],intial_shell=1,current_shell,best=0,ans=0;
cin >> N;
for(int i=0; i<N; i++){
cin >> a[i] >> b[i] >> g[i];
}
while (intial_shell!=4){
ans=0;
current_shell=intial_shell;
for(int i=0; i<N; i++){
if(a[i]==current_shell||b[i]==current_shell){
 if(a[i]==current_shell){
   current_shell=b[i];
 }
 else{
   current_shell=a[i];
 }
}
if(current_shell==g[i]){
  ans++;
}
}
if(ans>best){
  best=ans;
}
intial_shell++;
}
cout << best;
}
