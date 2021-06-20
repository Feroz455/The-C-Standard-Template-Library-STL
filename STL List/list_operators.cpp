/*
Cpp_STL_Reference
LIST
program operator;
list operator=(const list& c2);
bool operator==(const list& c1, const list& c2);
bool operator!=(const list& c1, const list& c2);
bool operator<(const list& c1, const list& c2);
bool operator>(const list& c1, const list& c2);
bool operator<=(const list& c1, const list& c2);
bool operator>=(const list& c1, const list& c2);
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    list<int> L{1,2,3};
    list<int> L1{3,2,1,4};

    L = L1;

    cout << " L = ";
    for(auto it = L.begin(); it != L.end(); it++)
    {
        cout << " " << *it;
    }
    cout << "\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
 L =  3 2 1 4


Process returned 0 (0x0)   execution time : 1.226 s
Press any key to continue.
*/

