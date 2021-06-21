/*
Cpp_STL_Reference
SET
program clear
void clear();
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    //Create s set of character
    set<char> charList;
    for(int i = 0; i < 10; i++)
    {
        charList.insert(i+65);
    }


    //Display the list
    set<char>::iterator theIterator;
    for(theIterator = charList.begin(); theIterator != charList.end(); theIterator++)
    {
        cout << *theIterator  << " ";
    }
    charList.clear();
    //Display the list
    cout << "After clear set\n";
    for(theIterator = charList.begin(); theIterator != charList.end(); theIterator++)
    {
        cout << *theIterator  << " ";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

A B C D E F G H I J

Process returned 0 (0x0)   execution time : 1.501 s
Press any key to continue.

*/
