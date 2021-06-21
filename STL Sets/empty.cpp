/*
Cpp_STL_Reference
SET
program

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //set declaration
    set<int> myset;

    //checking if set is empty
    if(myset.empty())
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
True

Process returned 0 (0x0)   execution time : 1.325 s
Press any key to continue.

*/
