/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 7
 Output:-
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35
36 37 38 39 40 41 42
43 44 45 46 47 48 49

 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
 return 0;
}