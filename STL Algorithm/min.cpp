/*
Cpp_STL_Reference
program min
const TYPE & min(const TYPE & x, const TYPE & y);
const TYPE & min(const TYPE & x, const TYPE & y, Binpred p);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    cout << "Min of 1 and 9999 is " << min(1,9999) << endl;
    cout << "Min of 'a' and 'b' is " << min ('a', 'b') << endl;
    cout << "Min of 3.14159 and 2.71828 is " << min (3.14159, 2.71828) << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Min of 1 and 9999 is 1
Min of 'a' and 'b' is a
Min of 3.14159 and 2.71828 is 2.71828


Process returned 0 (0x0)   execution time : 1.219 s
Press any key to continue.
*/

