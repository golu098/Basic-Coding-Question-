/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 6
 Output:-
*
**
***
****
*****
******
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}