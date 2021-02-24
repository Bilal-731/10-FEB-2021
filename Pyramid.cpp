#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 10; i <= rows; ++i)
    {
        for(int j = 10; j >= i; --j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
   
}
