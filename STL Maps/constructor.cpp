/*
Cpp_STL_Reference
MAP
program Constructor
map();
map(const map & m);
map(iterator start, iterator end, const key_compare& comp);
map(const key_compare& cmp)
~map();
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
struct strCmp
{
    bool operator()(const char* s1, const char* s2) const
    {

        return strcmp(s1, s2) < 0;
    }
};
bool fncomp(char Lhs, char Rhs)
{
     cout << "Hello from fnComp\n";
    return Lhs < Rhs;
}
struct classComp
{
    bool operator()(const char& Lhs, const char& Rhs) const
    {
          cout << "Hello from ClassComp\n";
        return Lhs < Rhs;
    }
};
//main begin
int main()
{
    map<const char *, int , strCmp> ages;

    ages["Homer"] = 38;
    ages["Marge"] = 37;
    ages["Lisa"] = 8;
    ages["Maggie"] = 1;
    ages["Bart"] = 11;


    cout << "Bart is " << ages["Bart"] <<  " years old " << endl;

    /*********************************/

    cout << "\n\n\n";

    map<char, int> first;

    first['a'] = 10;
    first['b'] = 30;
    first['c'] = 50;
    first['d'] = 70;


    map<char, int> second(first.begin(), first.end());
    map<char,int> third(second);
    map<char,int, classComp> fourth; // class as compare
    bool(*fn_pt)(char, char) = fncomp;
    map<char, int, bool(*)(char, char)> fifth(fn_pt); // Function pointer as compare
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Bart is 11 years old

*/
