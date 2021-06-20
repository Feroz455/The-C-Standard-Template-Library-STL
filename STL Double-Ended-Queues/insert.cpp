/*
Cpp_STL_Reference
DEQUE
program  insert
void insert (iterator loc, size_type num, const TYPE& val);
template<TYPE> void insert(iterator loc, input_iterator start, input_iterator end)
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    //Create a vector, load it with the first 10 characters of the alphabet
    deque<char>  alphaDeque;
    for(int i = 0; i < 10; i++)
    {
        alphaDeque.push_back(i+65);
    }

    //Insert four C's into the deque

    deque<char>::iterator theIterator = alphaDeque.begin();
    alphaDeque.insert(theIterator, 4, 'C');

    //Display the vector
    for(theIterator = alphaDeque.begin(); theIterator != alphaDeque.end(); theIterator++)
    {
        cout << *theIterator;
    }
    cout << '\n';
    getchar();
    return 0;
}
//main end
///Program end

/*
output
CCCCABCDEFGHIJ


Process returned 0 (0x0)   execution time : 1.906 s
Press any key to continue.
*/
