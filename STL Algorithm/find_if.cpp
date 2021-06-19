/*
Cpp_STL_Reference
program find_if
iterator find_if(iterator start , iterator end, UnPred up);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool isOdd(int i)
{
    return i % 2;
}
//main begin
int main()
{
    int nums[] = {0,-1,-2,-3,-4,342,-5};
    int *result;

    int start = 0;
    int end = 7;

    result = find_if(nums+start, nums+end, bind2nd(greater<int>(), 0));
    if(*result == nums[end])
    {
        cout << "Did not find any number greater than zero " << endl;
    }
    else
        cout << "Found a positive non-zero number : " << *result << endl;


        cout << "\n****************\n";
 std::vector<int> vec{ 10, 25, 40, 55 };

    // Iterator to store the position of element found
    std::vector<int>::iterator it;

    // std::find_if
    it = std::find_if(vec.begin(), vec.end(), isOdd);
    std::cout << "The first odd value is " << *it << '\n';

        // Iterator to store the position of element found
        std::vector<int>::iterator ite;

    // std::find_if_not
    ite = std::find_if_not(vec.begin(), vec.end(), isOdd);

    std::cout << "The first non-odd(or even) value is " << *ite << '\n';
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Found a positive non-zero number : 342

****************
The first odd value is 25
The first non-odd(or even) value is 10

*/

