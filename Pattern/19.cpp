/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 5
 Output:-
A
B C
C D E
D E F G
E F G H I

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
        // int value = row;

        while (col <= row)
        {
            char ch = 'A' + row+col - 2;
            cout << ch << " ";
            // value++;
            col++;
        }
        cout << endl;
        row++;
    }
}