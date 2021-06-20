/*
Cpp_STL_Reference
LIST
program insert
iterator insert (iterator loc, conts TYPE& val);
void insert (iterator loc, size_type num, const TYPE & val)

template<TYPE>void insert (iterator  loc, inpute_iterator start, input_iterator end);

*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    //Create a vector, load it with the first 10 character of the alphabet
    list<char> alphaList;
    for(int i = 0; i < 10; i++)
    {
        alphaList.push_back(i + 65);
    }
    //Insert four C's into the list
    list<char>::iterator theIterator = alphaList.begin();
    alphaList.insert(theIterator, 4 , 'C');

    //Display the list
    for(theIterator = alphaList.begin(); theIterator != alphaList.end(); theIterator++)
    {
        cout << *theIterator << " ";
    }
    cout << "\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output

C C C C A B C D E F G H I J


Process returned 0 (0x0)   execution time : 1.270 s
Press any key to continue.
*/

