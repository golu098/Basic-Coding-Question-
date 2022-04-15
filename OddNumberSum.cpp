/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)
*/
// Question:-  To find sum of odd  numbers between 1 to n

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    cout << sum;

    return 0;
}