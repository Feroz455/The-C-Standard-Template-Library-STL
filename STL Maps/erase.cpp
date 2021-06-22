/*
Cpp_STL_Reference
MAP
program  erase
void erase(iterator pos)
void erase(iterator start, iterator end);
size_type erase(const key_type & key);

*/
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
struct strCmp {
    bool operator()( const char* s1, const char* s2 ) const {
    return strcmp( s1, s2 ) < 0;
    }
};
//main begin
int main()
{
    map<const char*, int, strCmp> ages;
    ages["Homer"] = 38;
    ages["Marge"] = 37;
    ages["Lisa"] = 8;
    ages["Maggie"] = 1;

    while(!ages.empty())
    {
         cout << "Erasing : " << (*ages.begin()).first << " , " <<  (*ages.begin()).second << endl;
        ages.erase(ages.begin());
    }


    getchar();
    return 0;
}
//main end
///Program end

/*
output

Erasing : Homer , 38
Erasing : Lisa , 8
Erasing : Maggie , 1
Erasing : Marge , 37
*/
