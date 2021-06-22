/*
Cpp_STL_Reference
MAP
program lower_bound
iterator lower_bound(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
     //Creating a map named m;

    map<char, int> m;

    //inserting elements into map
    m['a'] = 10;
    m['b'] = 20;
    m['c'] = 30;
    m['d'] = 40;


    map<char,int>::iterator it ;

    for(it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " => " << it->second << endl;
    }
    it = m.lower_bound('b');

    cout << "The lower bound of key 'b' is ";
    cout << (*it).first << " " << (*it).second << endl;

    it = m.upper_bound('b');

    cout << "The upper bound of key 'b' is ";
    cout << (*it).first << " " << (*it).second << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
a => 10
b => 20
c => 30
d => 40
The lower bound of key 'b' is b 20
The upper bound of key 'b' is c 30

*/
