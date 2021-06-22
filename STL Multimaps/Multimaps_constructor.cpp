/*
Cpp_STL_Reference
MULTIMAP
program  constructing multimaps
multimap();
multimap(const multimap& c);
multimap(iterator begin, iterator end , const key_compare& cmp = compare(), const allocator& alloc = Allocator ());
~multimap();
*/
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
bool fncomp(char Lhs, char Rhs)
{
    return Lhs < Rhs;
}
struct classcomp
{
    bool operator()(const char& Lhs, const char& Rhs)const
    {
        return Lhs < Rhs;
    }
};
//main begin
int main()
{
    multimap<char, int> first;
    first.insert(pair<char, int>('a', 10));
    first.insert(pair<char, int>('b', 15));
    first.insert(pair<char, int>('c', 20));
    first.insert(pair<char, int>('d', 25));

    multimap<char,int> second(first.begin(), first.end());


    multimap<char,int>third(second);
    multimap<char,int,classcomp> fourth;
    bool(*fn_pt)(char, char) = fncomp;
    multimap<char, int, bool(*)(char,char)>fifth(fn_pt);


    /********************/

    multimap<string, int> m;
    int employeeID = 0;

    m.insert(pair<string,int> ("Bob Smith", employeeID++));
    m.insert(pair<string,int> ("Bob Thompson", employeeID++));
    m.insert(pair<string,int> ("Bob smithey", employeeID++));
    m.insert(pair<string,int> ("Bob Smith", employeeID++));

    cout << "Number of employee named 'Bob smith': " << m.count("Bob Smith") << endl;
    cout << "Number of employee named 'Bob Thomson': " << m.count("Bob Thompson") << endl;
    cout << "Number of employee named 'Bob Smithey': " << m.count("Bob smithey") << endl;


    cout << "Employee list: " << endl;
    multimap<string, int>::iterator iter;
    for(iter = m.begin(); iter != m.end(); iter++)
    {
        cout << "Name: " << iter->first << " , ID #" << iter->second << endl;

    }
    getchar();
    return 0;;

}
//main end
///Program end

/*
output

Number of employee named 'Bob smith': 2
Number of employee named 'Bob Thomson': 1
Number of employee named 'Bob Smithey': 1
Employee list:
Name: Bob Smith , ID #0
Name: Bob Smith , ID #3
Name: Bob Thompson , ID #1
Name: Bob smithey , ID #2


Process returned 0 (0x0)   execution time : 1.110 s
Press any key to continue.
*/
