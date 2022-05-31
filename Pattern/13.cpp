/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 5
 Output:-
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
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
        while (col <= n)
        {
           char ch='A'+row-1;
            cout << ch<< " ";
            // value++;
            col++;
        }
        cout << endl;
        row++;
    }
}