/* created by shiv kant kumar
insta id:- real_warrrior_golu
*/

// Question :To check whether the given character is vowels or consonants

#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
//     if(n=='A'|| n=='a'|| n=='e'|| n=='E'|| n=='I'|| n=='i'|| n=='o'|| n=='O'|| n=='u'|| n=='U'){
//         cout<<" Given character is vowel";
//     }
//     else {
//         cout<<"Given character is consonant";
//     }
//  return 0;
// }
switch(n){
    case 'a':
    cout<<"Vowels";
    break;
    case 'e':
        cout << "Vowels";
        break;
    case 'i':
        cout << "Vowels";
        break;
    case 'o':
        cout << "Vowels";
        break;
    case 'u':
        cout << "Vowels";
        break;
    case 'A':
        cout << "Vowels";
        break;
    case 'E':
        cout << "Vowels";
        break;
    case 'I':
        cout << "Vowels";
        break;
    case 'O':
        cout << "Vowels";
        break;
    case 'U':
        cout << "Vowels";
        break;
        default:
        cout<<"Consonants";
        }
        return 0;
}