// Sample Output

// Enter no. of rows : 5
//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : ";
    cin>>row;

    for (int i=1;i<=row;i++)
    {
        for (int j=row-i;j>=1;j--)
        {
            cout<<" ";
        }

        for (int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}
