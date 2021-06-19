/*
Cpp_STL_Reference
program binaray_search

bool binary_search(iterator start, iterator end, const TYPE &val)
bool binary_search(iterator start, iterator end, const TYPE &val, Comp f);

*/
#include<iostream>
#include<algorithm>
using namespace std;
template<class T>
void show(T a[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        cout << a[i] << " ";
    }
}
//main begin
int main()
{
    int nums[] = {-242,-1,0,5,8,9,11};
    int start = 0;
    int end = 7;
    for(int i = 0; i < 10; i++)
    {
        if(binary_search(nums+start, nums+end, i))
        {
            cout << "nums[] contains " << i << endl;
        }
        else
            cout << "nums[] DOES NOT contain " << i << endl;
     }

     cout << "\n\n";

     int a[] = {1,5,8,9,6,7,3,4,2,0};
     int asize = sizeof(a)/sizeof(a[0]);
     cout << "\nThe array is : ";
     show(a, asize);

     cout << "\n\nLet't say we want to search for : ";
     cout << "n2 in the array so, we first sort the array ";
     sort(a,a+asize);

     cout << "\nThe array after sorting is : \n";
     show(a, asize);
     cout << "\n\nNow we do the binary search \n";
     if(binary_search(a, a+asize, 2))
        cout << "\nElement found in the array;";
    else
        cout << "\nElement not found int the array\n";

    cout << "\nNow say we want to search for 10\n";
    if(binary_search(a, a+ asize, 10))
     cout << "\nElement found in the array: \n";
    else
        cout << "\nElement not found int the array\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

