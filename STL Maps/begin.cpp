/*
Cpp_STL_Reference
MAP
program  begin
iterator
const_iterator begin() const;
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
#include<string>
using namespace std;
struct strCmp
{
    bool operator()(const char* s1, const char* s2) const
    {

        return strcmp(s1, s2) < 0;
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

    cout << "In alphabetically order: " <<endl;

    map<const char *, int , strCmp>::iterator iter;
    for(iter =ages.begin(); iter != ages.end(); iter++)
    {
        cout << (*iter).first << " is " << (*iter).second << " years old " << endl;
    }
    /****************************/
    cout << "\n\n";

    map<string, int> stringCounts;
    string str;
    while(cin >> str) stringCounts[str]++;
    map<string, int>::iterator it;
    for(it = stringCounts.begin(); it != stringCounts.end(); it++)
    {
        cout << "Word : " << it->first << " , count : " << it->second << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Bart is 11 years old
In alphabetically order:
Bart is 11 years old
Homer is 38 years old
Lisa is 8 years old
Maggie is 1 years old
Marge is 37 years old


here are some words and here are some more words
^Z
Word : and , count : 1
Word : are , count : 2
Word : here , count : 2
Word : more , count : 1
Word : some , count : 2
Word : words , count : 2


Process returned 0 (0x0)   execution time : 199.487 s
Press any key to continue.

*/
