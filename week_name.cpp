/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)
*/
// Question:- To print day name of week

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "monday";
    }

    else if (n == 2)
    {
        cout << "Tuesday";
    }
    else if (n ==3)
    {
        cout << "wednesday";
    }
    else if (n ==4)
    {
        cout << "thursday";
    }
    else if (n ==5)
    {
        cout << "friday";
    }
    else if (n ==6)
    {
        cout << "saturday";
    }
    else if (n ==7)
    {
        cout << "Sunday";
    }
    else{
        cout<<"Sorry ! Friend you have entered wrong day";
    }
    return 0;
}