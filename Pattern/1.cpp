/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

Question:-  Input :-
5
output:-
*****
*****
*****
*****
*****

*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  // i = row and row aligns horizonatlly
  while(i<=n){
      int j=1;
      // j = columns and it aligns vertically
      while(j<=n){
          cout<<"*";
          j++;
      }
      cout<<endl;
      i++;
  }  
 return 0;
}