/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 7
 Output:-
1
22
333
4444
55555
666666
7777777
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // int count=1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout <<row;
            
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}