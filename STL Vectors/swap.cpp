/*
Cpp_STL_Reference
VECTOR
program swap
void swap(container& from);
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//main begin
int main()
{
    vector<string> v1;
    v1.push_back("I'm in v1");
    vector<string> v2;
    v2.push_back("And I'm in v2!");
    v1.swap(v2);
    cout << "The first elements in v1 is " << v1.front() << endl;
    cout << "The first elements in v2 is " << v2.front() << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The first elements in v1 is And I'm in v2!
The first elements in v2 is I'm in v1


Process returned 0 (0x0)   execution time : 9.740 s
Press any key to continue.
*/

