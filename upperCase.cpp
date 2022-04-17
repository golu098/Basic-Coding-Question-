/* created by shiv kant kumar
insta id:- real_warrrior_golu
*/
#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    if(n >= 'A' && n<='Z'){
        cout<<"upper";
    }
    else if (n >= 'a' && n <= 'z')
    {
        cout << "lower";
    }
    else{
        cout<<"invalid";
    }
 return 0;
}