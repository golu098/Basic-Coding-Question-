/* created by shiv kant kumar
Follow on insta id:- real_warrrior_golu(For any query)

 Question:-
 Input:-
 5
 Output:-
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y

 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    char count = 'A';
    while (row <= n)
    {
        int col = 1;
        // char value = row;

        while (col <= n)
        {
            
            cout <<count<<" " ;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}