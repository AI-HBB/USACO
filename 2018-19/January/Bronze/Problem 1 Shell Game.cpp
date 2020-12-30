#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> 
using namespace std;
int main() {
freopen("shell.in", "r", stdin);
freopen("shell.out", "w", stdout);
int N,a[101],b[101],g[101],initial_shell=1,current_shell,best=0,ans=0;
cin >> N;
for(int i=0; i<N; i++){
cin >> a[i] >> b[i] >> g[i];
}
while (initial_shell!=4){
ans=0;
current_shell=initial_shell;
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
initial_shell++;
}
cout << best;
}
