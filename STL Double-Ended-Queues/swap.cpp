/*
Cpp_STL_Reference
DEQUE
program swap
void swap(deque & from)
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    string first("This comes first");
    string second("And this is second");

    first.swap(second);

    cout << first << endl;
    cout << second << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

And this is second
This comes first


Process returned 0 (0x0)   execution time : 3.222 s
Press any key to continue.
*/
