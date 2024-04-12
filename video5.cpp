// VIDEO 4 >>  First and Last occurence of element in sorted element .....

#include<iostream>
using namespace std;

int main ()
{
    int a[] = {5,6,6,7,7,7,8,8,10};
    int start = 0;
    int end = sizeof(a) / sizeof(a[0]) -1 ;
    int target = 7;
    int first = -1;
    int last = -1;  

    // First occurenece of element in a sorted array ..

    while(start <= end )
    {
        int mid = start + (end - start) / 2;
        
        if(a[mid]==target){
            first = mid;
            end = mid - 1;
        }
        else if (a[mid] < target){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // last occurence of element in a sorted array ;

     start = 0;
     end = sizeof(a) / sizeof(a[0]) - 1;

    while(start <= end ){
        int mid = start + (end - start) / 2;

        if(a[mid] == target) {
            last = mid;
            start = mid + 1;
        }
        else if(a[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(first!=-1){
        cout << "first occurence of " << target << " at index : " << first;
    }
    if( last != -1){
        cout << "\nLast occurence of " << target << " at inder :" << last;
    }
    else {
        cout << "\nElement is not found " << endl;
    }

}