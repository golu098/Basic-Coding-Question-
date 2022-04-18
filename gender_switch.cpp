/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query) 
*/
// Question:-  To print gender Male Female program
#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    switch (a)
    {
    case 'm':
    case 'M':
  
   cout <<"Male";
        break;
    case 'F':
    case 'f':

        cout << "Female";
        break;

    default:
    cout<<"other";
       
    }
    
 return 0;
}