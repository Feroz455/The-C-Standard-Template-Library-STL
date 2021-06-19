/*
Cpp_STL_Reference
program merge
iterator(iterator start1 , iterator end1, iterator start2 , iterator end2, iterator result);
iterator(iterator start1 , iterator end1, iterator start2 , iterator end2, iterator result, StrictWeakOrdering cmp);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    //initializing 1st container
    vector<int> arr1 = {1,4,6,3,2};

    //Initializing 2nd container
    vector<int> arr2 = {6,2,5,7,1};

    //Declaring resultant container
    vector<int> arr3(10);

    //Sorting initial container
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());


    //Using merge() to merge the initial containers
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());

    //Printing the resultant merged container

    cout << "The container after merging initial containers is: ";

    for(int i = 0; i < arr3.size(); i++)
        cout << arr3[i] << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

The container after merging initial containers is: 1 1 2 2 3 4 5 6 6 7

Process returned 0 (0x0)   execution time : 2.359 s
Press any key to continue.
*/

