/* created by shiv kant kumar
insta id:- real_warrrior_golu
*/

// method 1:- using ladder if else

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter the number";
//     cin>>a>>b>>c;
//      if(a >= b && a >= c){
//          cout<<a<<"is the largest number";
//      }
//          else if (b >= a && b >= c ){
//              cout << b << "is the largest number";
//          }
//          else if(c>=a && c>=b){
//              cout << c<< "is the largest number";
//          }
     
//  return 0;
// }

// Method 2:- using nested if
 
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number:- "<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
        cout<<a<<"is the largest number";

    }
    else{
        cout<<b<<"is the largest number";
    }
}
   else if (b>c){
       cout<<b<<"is the largest number";
   }
   else{
       cout<<c<<"is the largest number";

   }
   return 0;
}
