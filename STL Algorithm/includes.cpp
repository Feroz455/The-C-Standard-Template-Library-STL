/*
Cpp_STL_Reference
program includes

bool includes(iterator start1, iterator endl, iterator start2, iterator end2);
bool includes(iterator start1, iterator endl, iterator start2, iterator end2, strictweekordering cmp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(int i, int j)
{
    return i < j;
}
//main begin
int main()
{
    //initializing 1st container
    vector<int> arr1 = {1,4,3,6,2};
    //initializing 2nd container
    vector<int> arr2 = {1,2,4};

    //sorting initial containers
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    //using include() check if all elements of arr2 lie int arr1

    if(includes(arr1.begin(), arr1.end(), arr2.begin(), arr2.end()))
    cout << "All elements of 2nd container are in 1st container";
    else
        cout << "All elements of 2nd container are not in 1t container";

   //using includes() check if all elements of arr2 lie in arr1
   //using comparator function

   if(includes(arr1.begin(), arr1.end(), arr2.begin(), arr2.begin(), comp))
    cout << "\nAll elements of 2nd container are in 1st container";
    else
        cout << "\nAll elements of 2nd container are not in 1t container";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

