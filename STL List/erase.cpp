/*
Cpp_STL_Reference
LIST
program erase
iterator erase(iterator loc)
iterator erase(itator start, iterator end)
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    //Create a vector, load it with the first ten character
        list<char> alphaVector;
    for(int i = 0; i < 10; i++)
    {
        alphaVector.push_back(i + 65);
    }

    int size = alphaVector.size();

    list<char>::iterator startIterator;
    list<char>::iterator tempIterator;
    for(int i = 0; i < size; i++)
    {
        startIterator = alphaVector.begin();
        alphaVector.erase(startIterator);
        //Display the list
        for(tempIterator = alphaVector.begin(); tempIterator != alphaVector.end(); tempIterator++)
            cout << *tempIterator;
        cout << endl;
    }

    /***************************/
    for(int i = 0; i < 10; i++)
    {
        alphaVector.push_back(i + 65);
    }
    //display the complete list
    for(int i : alphaVector)
    {
        cout << i << " " ;
    }
    cout << endl;

    //use erase to remove all
    alphaVector.erase(alphaVector.begin(), alphaVector.end());
    //display the modified list
   for(int i : alphaVector)
    {
        cout << i << " " ;
    }
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

BCDEFGHIJ
CDEFGHIJ
DEFGHIJ
EFGHIJ
FGHIJ
GHIJ
HIJ
IJ
J

65 66 67 68 69 70 71 72 73 74



Process returned 0 (0x0)   execution time : 1.783 s
Press any key to continue.
*/

