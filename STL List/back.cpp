/*
Cpp_STL_Reference
LIST
program back
TYPE & back();
const TYPE & back() const;
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    //Initialization of list
    list<int> demo_list;

    //adding elements to the list

    demo_list.push_back(10);
    demo_list.push_back(20);
    demo_list.push_back(30);

    //Print the last elements of demo_list

    cout << "The first elements is " << demo_list.front() << " and the last elements is "<< demo_list.back() << endl;;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The first elements is 10 and the last elements is 30


Process returned 0 (0x0)   execution time : 1.926 s
Press any key to continue.

*/

