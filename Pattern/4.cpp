/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

// Question:-
Input:-
7
output:-

7654321
7654321
7654321
7654321
7654321
7654321
7654321
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
            cout << n-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
