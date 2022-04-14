/* created by shiv kant kumar
insta id:- real_warrrior_golu
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number";
    cin>>a>>b>>c;
     if(a >= b && a >= c){
         cout<<a<<"is the largest number";
     }
         else if (b >= a && b >= c ){
             cout << b << "is the largest number";
         }
         else if(c>=a && c>=b){
             cout << c<< "is the largest number";
         }
     
 return 0;
}