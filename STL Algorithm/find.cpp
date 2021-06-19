/*
Cpp_STL_Reference
program find
iterator find(iterator start, iterator end, const TYPE &val)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    int num_to_find = 3;
    vector<int> v1;
    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    v1.push_back(3);
    v1.push_back(3);
    vector<int>::iterator result;
    result = find(v1.begin(), v1.end(), num_to_find);
    if(result == v1.end())
    {
        cout << "Did not find any element matching " << num_to_find << endl;

    }
    else
        cout << "Found a matching element : " << *result << endl;

        cout << "\n\n";

        /*******************/
    int nums[] = {3,1,4,1,5,9};
    num_to_find = 5;
    int start = 0;
    int end =5;
    int *Result;
    Result = find(nums + start, nums+end, num_to_find);
    if(Result == nums+end)
    {
        cout << "Did not find any number matching " << num_to_find << endl;

    }
    else
        cout << "Found a matching number: " << *Result << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Found a matching element : 3


Found a matching number: 5


Process returned 0 (0x0)   execution time : 2.813 s
Press any key to continue.

*/

