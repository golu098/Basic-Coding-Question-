/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 9
 Output:-
1
23
345
4567
56789
67891011
78910111213
89101112131415
91011121314151617
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
        int value=row;
        while (col <= row)
        {
            cout << value;
value++;
            col++;
        }
        cout << endl;
        row++;
    }

 
}