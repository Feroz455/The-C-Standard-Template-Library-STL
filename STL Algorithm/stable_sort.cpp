/*
Cpp_STL_Reference
program stable_sort()
void stable_sort(iterator start, iterator end)
void stable_sort(iterator start, iterator end, StrictWeakOrdering cmp);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
        int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    stable_sort(arr, arr + n, greater<int>());

    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

