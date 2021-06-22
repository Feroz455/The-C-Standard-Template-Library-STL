/*
Cpp_STL_Reference
MAP
program  empty
void empty();

*/
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
struct strCmp
{
   bool operator()(const char* s1, const char* s2)const
   {
       return strcmp(s1, s2) < 0;
   }
};
//main begin
int main()
{
    map<const char*, int, strCmp> ages;
    ages["Firoz"] = 24;
    ages["Oishee"] = 23;
    ages["Ayra"] = 1;

    map<const char*, int, strCmp>::iterator iter;

    for(iter  = ages.begin(); iter != ages.end(); iter++)
    {
        cout << iter->first << " is " << iter->second << " years old" << endl;
    }

    ages.clear();

    if(ages.empty())
        cout << "ages is Empty" << endl;
    else
        cout << "Ages is not Empty " << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Ayra is 1 years old
Firoz is 24 years old
Oishee is 23 years old
ages is Empty


Process returned 0 (0x0)   execution time : 1.156 s
Press any key to continue.
*/
