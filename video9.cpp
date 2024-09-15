//Searching in a nearly sorted array 
#include<iostream>
using namespace std;

int main ()
{
    int a[] = {5,4,6,7,7};
    int start = 0;
    int end = sizeof(a) / sizeof(a[0]) - 1;
    int target = 4;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(a[mid]==target)
            {
                cout << mid;
                break ;
            }
        if(mid-1 >= start && a[mid-1] == target)
        {
            cout << mid - 1;
            break;
        }
        if(mid+1 <= end && a[mid+1]==target)
           { cout <<mid + 1;
            break;
           }
        
        if(a[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;

}