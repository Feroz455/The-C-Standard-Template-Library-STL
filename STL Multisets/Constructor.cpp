/*
Cpp_STL_Reference
MULTISETS
program Multisets
Multisets constructor();

container();
container(const container &c);
~container();
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
bool fncomp(int Lhs, int Rhs)
{
    cout << "Hello\n";
    return Lhs < Rhs;
}
struct classcomp
{
    bool operator()(const int& Lhs, const int& Rhs) const
    {
            cout << "Bye Hello\n";
        return Lhs < Rhs;
    }
};
//main begin
int main()
{
    multiset<int> first; //empty multiset of ints

    int myints[] = {10,20,30,20,20};

    multiset<int> second(myints, myints+5); // pointers used as iterators
    multiset<int> third(second); // a copy of second
    multiset<int> fourth(second.begin(), second.end()); //iterator ctor
    multiset<int, classcomp> fifth; // class as compare
    bool(*fn_pt)(int, int) = fncomp;

    multiset<int, bool(*)(int, int)> sixth(fn_pt); //Function pointer as compare

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
