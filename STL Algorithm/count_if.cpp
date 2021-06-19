/*
Cpp_STL_Reference
program count_if

size_t count_if(iterator start, iterator end, unnaryPred p)

The count_if funtion return the number of elements between start and end for which the predicate p returns true
The count_if function takes three parameters, the first two of which are the first and the last position of the sequence of the elements (where the last position is not included in the range) while the third parameter is an unary predicate ( takes single argument to check the condition and returns true or false ) that takes the element of given sequence one by one as a parameter and returns a boolean value on the basis of condition
specified in that function.  One thing we should keep in mind is that type of the predicate should be same as the type of the container.

Then, count_if() returns the number of elements in the given sequence for which the comparator function
(third parameter) returns true.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isEven(int i)
{
    if(i%2 == 0)
        return true;
    else
        return false;
}
//main begin
int main()
{
    int nums[] = {0,1,2,3,4,5,9,3,13};
    int start = 0;
    int end = sizeof(nums) / sizeof(nums[0]);

    int target_value = 3;
    int num_items = count_if(nums+start, nums+end, bind2nd(equal_to<int>(), target_value));
    cout << "nums[] contains " << num_items << " items matching " << target_value << endl;

    /**********************/
    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    int noEven = count_if(v.begin(), v.end(), isEven);
    cout << "Total no of even number is : " << noEven;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
nums[] contains 2 items matching 3


Process returned 0 (0x0)   execution time : 2.265 s
Press any key to continue.
*/
