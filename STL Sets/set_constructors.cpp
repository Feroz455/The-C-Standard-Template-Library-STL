/*
Cpp_STL_Reference
SET
program set;

set();
set(const set&c)
~set();

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
bool fncomp(int Lhs, int Rhs)
{
    return Lhs < Rhs;
}
struct classcomp
{
    bool operator()(const int&Lhs, const int& Rhs) const
    {
        return Lhs < Rhs;
    }
};
//main begin
int main()
{
    set<int> first; //empty set of ints

    int myints[] = {10,20,30,40,50};
    set<int> second(myints, myints+5);// range
    set<int> third(second); //a copy of second

    set<int> fourth(second.begin(), second.end()); //class as compare

    set<int , classcomp> fifth;
    bool(*fn_pt)(int, int) = fncomp;
    set<int , bool(*)(int, int) > sexth(fn_pt); //function pointer as compare

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
