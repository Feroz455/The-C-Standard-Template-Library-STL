/*
Cpp_STL_Reference
program iterator lower_bound(iterator first  , iterator last, const TYPE &val);
program iterator lower_bound(iterator first  , iterator last, const TYPE &val, compFn f);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> nums;
    nums.push_back(-242);
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(8);
    nums.push_back(11);

    cout << "Before nums is : ";
    for(int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    cout << endl;

    vector<int>::iterator result;

    int new_val = 7;
    result = lower_bound(nums.begin(), nums.end(), new_val);
    nums.insert(result, new_val);
    cout << "After , nums is : ";
    for(int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Before nums is : -242 -1 0 5 8 8 11
After , nums is : -242 -1 0 5 7 8 8 11
*/

