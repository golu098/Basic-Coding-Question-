/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

// Question:-
Input:-
7
output:-

1234567
1234567
1234567
1234567
1234567
1234567
1234567
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
