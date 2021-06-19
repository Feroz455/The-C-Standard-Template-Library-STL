/*
Cpp_STL_Reference
program transform
iterator transform(iterator start, iterator end, iterator result, unaryFunction f);
iterator transform(iterator start, iterator end, iterator result, BinaryFunction f);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int increment(int x)
{
    return (x+1);
}
//main begin
int main()
{
    /***********************/

  int arr1[] = {1, 2, 3};
  int arr2[] = {4, 5, 6};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int res[n];

  // Single line code to add arr1[] and arr2[] and
  // store result in res[]
  transform(arr1, arr1+n, arr2, res, plus<int>());

  for (int i=0; i<n; i++)
    cout << res[i] << " ";
        int arr[] = {1, 2, 3, 4, 5};
    int nn = sizeof(arr)/sizeof(arr[0]);

    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr+nn, arr, increment);
    cout << "\n\n\n";
    for (int i=0; i<nn; i++)
        cout << arr[i] << " ";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

