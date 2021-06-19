/*
Cpp_STL_Reference
VECTOR
program iterator begin();
const_iterator begin() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//main begin
int main()
{
    vector<string> words;
    string str;

    while(cin >> str) words.push_back(str);

    vector<string>::iterator iter;

    for(iter = words.begin(); iter != words.end(); iter++)
    {
        cout << *iter << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Hay mickey you're so fine
^Z
Hay mickey you're so fine

Process returned 0 (0x0)   execution time : 20.793 s
Press any key to continue.

*/

