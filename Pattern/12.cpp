/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 4
 Output:-
1
21
321
4321
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // int count = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {

            cout << (row-col+1)<<" ";
            // value++;
            col++;
        }
        cout << endl;
        row++;
    }
}