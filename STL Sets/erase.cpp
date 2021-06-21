/*
Cpp_STL_Reference
SET
program erase
void erase(iterator pos)
void erase(iterator start, iterator end)
size_type erase(conts key_type& key);

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //sum variable declaration
    int sum = 0;
    //set declaration
    set<int> myset{1,5,6,3,9,2};
    //finding sum of elements
    while(!myset.empty())
    {
        sum += *myset.begin();
        myset.erase(myset.begin());
    }

    //Print sum
    cout << sum << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
26


Process returned 0 (0x0)   execution time : 1.085 s
Press any key to continue.
*/
