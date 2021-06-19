/*
Cpp_STL_Reference
VECTOR
program capacity
size_type capacity() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v1(10);
    cout << "The capacity of v1 is " << v1.capacity() << endl;
    vector<int> v2;
    v2.reserve(20);
    cout << "The capacity of v2 is " << v2.capacity() << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The capacity of v1 is 10
The capacity of v2 is 20


Process returned 0 (0x0)   execution time : 1.275 s
Press any key to continue.
*/

