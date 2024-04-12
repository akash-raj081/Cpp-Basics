// video 6 >> count of an element in a sorted array....
#include<iostream>
using namespace std;

int main ()
{
    int a[] = {1,2,3,4,4,5,5,7,7,7,7,7,9};
    int start = 0;
    int end = sizeof(a) / sizeof(a[0]) -1 ;
    int target = 1 ;
    int first = -1;
    int last = -1;

    // First occurence of element in a sorted array  ...
    while ( start <= end )
    {
        int mid = start + (end - start) / 2;

        if(a[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (a[mid]<target )
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }

    }

    // Last occurence of element in sorted array.....
    // reset the value of START and  END ..

    start = 0;
    end = sizeof(a) / sizeof(a[0]) - 1;

    while (start <=end)
    {
        int mid = start + (end - start) / 2;

        if(a[mid]== target )
        {
            last = mid;
            start = mid + 1;
        }
        else if(a[mid]< target )
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    int count;
    if(last!= -1 && first!=-1){
          cout << "count of target element [ " << target << " ]is in a sorted array is  :" << (last -first )+1  <<endl;
    }
    else 
    {
        cout << "element is not found ." << endl;
    }
}