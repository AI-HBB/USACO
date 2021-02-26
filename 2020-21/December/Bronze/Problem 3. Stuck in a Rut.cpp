#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> 
#include <bits/stdc++.h>
#include <numeric>
#include <math.h> 
#include <vector> 
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main() {
//freopen("swap.in", "r", stdin);
//freopen("swap.out", "w", stdout);
int n;
cin >> n;
vector<pair<int,int>>v1;
vector<pair<int,int>>v2;
vector<int>ans1; vector<int>ans2;
char dir[50];
int x[50],y[50];
for(int i=0; i<n; i++){
  cin >> dir[i] >> x[i] >> y[i];
 if(dir[i]=='E'){v1.push_back({x[i],y[i]});}
 else {v2.push_back({x[i],y[i]});ans2.push_back(0);}
 }
 sort(v2.begin(), v2.end());
 sort(v1.begin(), v1.end(),sortbysec);
for(int i=0; i<v1.size(); i++){
 for(int k=0; k<v2.size(); k++){
   int x1=v1[i].first,y1=v1[i].second,x2=v2[k].first,y2=v2[k].second;
   if(ans2[k]==0){
  if(x2>=x1&&y1>=y2&&(x2-x1)>(y1-y2)){ans1.push_back(x2-x1);break;}
  if(x2>=x1&&y1>=y2&&(x2-x1)<(y1-y2)){ans2[k]=y1-y2;}
   }
  if(k==v2.size()-1) ans1.push_back(0);
  }
 }
 for(int i=0; i<n; i++){
   if(dir[i]=='E'){
     for(int k=0; k<v1.size(); k++){
     if(x[i]==v1[k].first&&y[i]==v1[k].second){
       if(ans1[k]==0)cout << "Infinity"<<endl;
       else cout <<ans1[k]<<endl;
       break;
     }
    }
   }
 else{
   for(int k=0; k<v2.size(); k++){
     if(x[i]==v2[k].first&&y[i]==v2[k].second){
      if(ans2[k]==0)cout << "Infinity"<<endl;
      else cout <<ans2[k]<<endl;
       break;}
   }
  }
 }
}
