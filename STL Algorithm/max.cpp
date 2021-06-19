/*
Cpp_STL_Reference
program max
const TYPE & max(const TYPE & x, const TYPE & y);
const TYPE & max(const TYPE & x, const TYPE & y, Binpred p);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    cout << "Max of 1 and 9999 is " << max(1,9999) << endl;
    cout << "Max of 'a' and 'b' is " << max ('a', 'b') << endl;
    cout << "Max of 3.14159 and 2.71828 is " << max (3.14159, 2.71828) << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Max of 1 and 9999 is 9999
Max of 'a' and 'b' is b
Max of 3.14159 and 2.71828 is 3.14159


Process returned 0 (0x0)   execution time : 1.781 s
Press any key to continue.
*/

