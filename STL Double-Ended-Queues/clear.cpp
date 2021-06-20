/*
Cpp_STL_Reference
DEQUE
program clear
void clear();

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
    charD.clear();
    for(int i = 0; i < 10; i++)
    {
        cout << charD.at(i) << " ";
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
A B C D E F G H I J
terminate called after throwing an instance of 'std::out_of_range'
  what():  deque::_M_range_check: __n (which is 0)>= this->size() (which is 0)

Process returned 3 (0x3)   execution time : 0.422 s
Press any key to continue.
*/

