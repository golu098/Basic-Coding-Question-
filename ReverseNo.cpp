/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)
*/
// Question:-  to reverse a number using while & for loop
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, rev = 0;

    // Reading a number from user
    cout << "Enter any number:";
    cin >> num;

    // finding reverse number using while loop
    while (num > 0)
    {
        rev = rev * 10;
        rev = rev + num % 10;
        num = num / 10;
    }

    cout << "Reversed number is: " << rev;

    return 0;
}