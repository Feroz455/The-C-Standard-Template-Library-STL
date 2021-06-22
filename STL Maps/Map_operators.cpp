/*
Cpp_STL_Reference
MAP
program Map_operator
TYPE& operator = (const key_type& key);
map operator = (const map& c2);
bool operator == (const map& c1, const map& c2);
bool operator != (const map& c1, const map& c2);
bool operator < (const map& c1, const map& c2);
bool operator > (const map& c1, const map& c2);
bool operator <= (const map& c1, const map& c2);
bool operator >= (const map& c1, const map& c2);
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
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
