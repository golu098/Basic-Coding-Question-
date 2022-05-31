/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 5
 Output:-
A
B C
D E F
G H I J
K L M N O

 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    char count = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}