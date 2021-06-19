/*
Cpp_STL_Reference
program partial_sort_copy
iterator_ partial_sort_copy(iterator start, iterator end, iterator result_start, iterator result_end)
iterator_ partial_sort_copy(iterator start, iterator end, iterator result_start, iterator result_end, StrickWeakOrdering cmp);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(int a, int b)
{
    return(a > b);
}
//main begin
int main()
{
    vector<int> v = {1,1,3,10,3,3,7,7,8};
    vector<int> v1(7);

    vector<int>:: iterator ip;

    //Using partial_sort_copy
    partial_sort_copy(v.begin(), v.end(), v1.begin(), v1.end());

    //Displaying the vector after applying partial_sort_copy

    for(int n: v1)
        cout << n << " ";
    cout << "\n\n";
    /*******By comparing using a pre_defined function*********/


    //Using partial_sort_copy
    partial_sort_copy(v.begin(), v.end(), v1.begin(), v1.end(),comp);

    //Displaying the vector after applying partial_sort_copy

    for(int n: v1)
        cout << n << " ";
    cout << "\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

