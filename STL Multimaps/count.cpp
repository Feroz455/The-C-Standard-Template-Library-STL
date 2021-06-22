/*
Cpp_STL_Reference
MULTIMAP
program  count;
size_type(const  key_type & key)


*/
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

//main begin
int main()
{
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
    return 0;
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


Process returned 0 (0x0)   execution time : 1.221 s
Press any key to continue.




*/
