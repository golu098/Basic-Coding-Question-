/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query) 
*/
// Question:-  
#include<iostream>
using namespace std;
int main(){
 int n,i;
 cout<<"Enter any number";
 cin>>n;
 for(i=0;n>0;n=n/10){
     i=i+(n%10);
     cout<<i;
 }   
 return 0;
}