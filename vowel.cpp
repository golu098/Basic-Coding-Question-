/* created by shiv kant kumar
insta id:- real_warrrior_golu
*/

// Question :To check whether the given character is vowels or consonants

#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    if(n=='A'|| n=='a'|| n=='e'|| n=='E'|| n=='I'|| n=='i'|| n=='o'|| n=='O'|| n=='u'|| n=='U'){
        cout<<" Given character is vowel";
    }
    else {
        cout<<"Given character is consonant";
    }
 return 0;
}