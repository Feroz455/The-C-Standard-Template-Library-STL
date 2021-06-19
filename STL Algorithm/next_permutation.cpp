/*
Cpp_STL_Reference
program next_permutation
bool next_permutation(iterator start, iterator end)
bool next_permutation(iterator start, iterator end, StricWeakOrdering cmp);


*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int arr[] = {1,2,3};
    sort(arr, arr+3);
    cout << "The 3! possible permutations with 3 elements: \n";
    do
    {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    }while(next_permutation(arr, arr+3));

    cout << "After loop : " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << "\n";

    reverse(arr , arr+3);
    cout << "The 3! possible permutations with 3 elements: \n";
    do
    {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    }while(prev_permutation(arr, arr+3));

    cout << "After loop : " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << "\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The 3! possible permutations with 3 elements:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
After loop : 1 2 3
The 3! possible permutations with 3 elements:
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
After loop : 3 2 1


Process returned 0 (0x0)   execution time : 7.528 s
Press any key to continue.
*/

