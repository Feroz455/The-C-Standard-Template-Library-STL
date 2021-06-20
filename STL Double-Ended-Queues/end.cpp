/*
Cpp_STL_Reference
DEQUE
program end
iterator end();
const_iterator end() const;
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<char> charD;
    for(int i = 0; i < 10; i++)
    {
        charD.push_back(i + 65);
    }
    //Display the list
    deque<char>:: iterator theIterator;
    for(theIterator = charD.begin(); theIterator != charD.end(); theIterator++)
    {
        cout << *theIterator << " ";
    }
    cout << "\n";

    deque<int> d(5,789);
    deque<int>::iterator it;
    for(it = d.begin(); it != d.end(); it++)
    {
        cout << *it << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
A B C D E F G H I J
789
789
789
789
789


Process returned 0 (0x0)   execution time : 1.984 s
Press any key to continue.

*/

