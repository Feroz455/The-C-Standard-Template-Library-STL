/*
Cpp_STL_Reference
VECTOR
program front
TYPE & front();
const TYPE& front() const;
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//main begin
int main()
{
    vector<string>words;
    string str;

    while(cin >> str) words.push_back(str);
    sort(words.begin(), words.end());
    cout << "In alphabetical order, the first word is '" << words.front() << "'." << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
now is the time for all good men to come to the aid of their country
^Z
In alphabetical order, the first word is 'aid'.


Process returned 0 (0x0)   execution time : 75.188 s
Press any key to continue.

*/

