#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
      
       vector<vector<char>> map(10, vector<char>(10));

        
       for(int i=0;i<10;i++)
       {
         for(int j=0;j<10;j++)
         {
           cin>>map[i][j];
         }
       }
       
       int pts=0;
       for(int i=0;i<10;i++)
       {
         for(int j=0;j<10;j++)
         {
         if(map[i][j]=='X')
         {
           int layer=min({i,j,9-i,9-j});
           pts+=layer+1;
         }
         }
       }
       cout<<pts<<endl;
    }
    return 0;
}
