/*
Cpp_STL_Reference
program replace_if
void replace_if(iterator start, iterator end, Predicate p, const TYPE& new_value)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool IsOdd(int i)
{
    return ((i % 2 )== 1);
}
//main begin
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) /sizeof(arr[0]);


    //print old array
    cout << "Original array : ";
    for(int i = 0; i < n; i++)
    {
        cout << " " << arr[i];

    }
    cout << "\n";

    //replacement value
    int new_val = 0;
    //replace_if function
    replace_if(arr, arr+n, IsOdd, new_val);

    //New array after using replace
    cout << "New array: ";
    for(int i = 0; i < n; i++)
        cout << " " << arr[i];
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

