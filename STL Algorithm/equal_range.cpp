/*
Cpp_STL_Reference
program equal_range
pair<iterator, iterator> equal_range(iterator first, iterator last, const TYPE &val);
pair<iterator, iterator> equal_range(iterator first, iterator last, const TYPE &val, compFn, comp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
using namespace std;
bool comp(int a, int b)
{
    return (a>b);
}
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
    pair<vector<int>::iterator, vector<int>::iterator> result;
    int new_val = 9;
    result = equal_range(nums.begin(), nums.end(), new_val);
    cout << "The first place that " << new_val << " could be inserted is before "
    << *result.first << ", and the last place that it could be "<< *result.second << endl;

    vector<int> v = {10,10,30,30,30,100,10,300,300,70,70,80};
    //Declaring an iterator to store the
    //Return value of std::equal_range
    pair<vector<int>::iterator, vector<int>::iterator> ip;
    //Sorting the vector v
    sort(v.begin(), v.end());
    // v becomes 10 10 10 30 30 30 70 70 80 100 300 300
    //using equal_range and comparing the elements

    ip = equal_range(v.begin(), v.end(), 30);
    //Displaying the subrange bounds
    cout << "30 is present in the sorted vector from index "
         << (ip.first - v.begin()) << " till "
         << (ip.second - v.begin());

    cout << "\n\n/*********************/" << endl;

    ip = equal_range(v.begin(), v.begin()+12, 10, comp);
    //Display the subrange bounds

    cout << "10 is present in the sorted vector from index "
         << (ip.first - v.begin()) << " till "
         << (ip.second - v.begin());

    getchar();
    return 0;
}
//main end
///Program end

/*
output

The first place that 8 could be inserted is before 8, and the last place that it could be 11


Process returned 0 (0x0)   execution time : 1.984 s
Press any key to continue.
*/
