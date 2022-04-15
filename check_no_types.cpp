/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query) 
*/

// Question:-  TO check whether a character is alphabet, digit or special character

#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    if((n>='a'&& n<='z') || (n >= 'A' && n <= 'Z') ){
        cout<<"The given character is alphabet";
    }
    else if(n>='0' && n<='9'){
        cout<<"The  given character is Digit";
    }
    else{
        cout<<"special character";
    }
    
    
    return 0;
}