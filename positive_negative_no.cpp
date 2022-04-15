/* created by shiv kant kumar
insta id:- real_warrrior_golu
*/
#include <iostream>
using namespace std;
int main()
{
    double a;
    cin >> a;
    if (a > 0)
    {
        cout << a << 'p';
    }
         else if (a < 0)
    {
        cout << a << 'n';
    }
         else if (a == 0)
    {
        cout << '0';
    }
            else
    {
        cout << "no valid no.";
    }
    return 0;
}