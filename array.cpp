#include<iostream>
using namespace std;

// int main()
// {
//     // Array 
//     // initialisation of a array

//     int arr[] = {1, 2, 3, 4};
//     for (int i = 0; i < sizeof(arr)/sizeof(int) ; i++)
//     {
//         cout << arr[i] << " " << endl;

//     }
        
// }

int main()
{
    // insert an element at user  specific position

    int a[] ={1,0,3,4,5,6,7,8};
    int count;
    cout << "before any insertion in array\n";
    for (int i = 0; i < 8;i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nnow we insert element at user specific position with their value\n";

    for (int i = 0; i < 2;i++)
    {
        int count;
        int pos;
        cin >> pos;
        int value;
        cin >> value;

        if(a[pos] != 0)
        {
            a[pos] = value;
            count++;
        }
        
    }
    
    cout << count  ;

    cout << "\nafter insert element at specific position with there value\n";

    for (int i = 0; i < 8;i++)
    {
        cout << a[i] << " ";
    }
}