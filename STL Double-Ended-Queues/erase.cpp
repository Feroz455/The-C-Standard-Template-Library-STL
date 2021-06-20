/*
Cpp_STL_Reference
DEQUE
program erase
iterator erase(iterator loc)
iterator erase(iterator start, iterator end)
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    //Create a deque load it with the first ten character of teh alphabet
    deque<char> alphaDeque;
    for(int i = 0; i < 10; i++)
    {
        alphaDeque.push_back(i+65);
    }
    size_t size = alphaDeque.size();
    deque<char>::iterator startIterator;
    deque<char>::iterator tempIterator;
    for(int i = 0; i < size; i++)
    {
        startIterator = alphaDeque.begin();
        alphaDeque.erase(startIterator);
        //display the deque
        for(char n: alphaDeque)
            cout << n;
            cout << "\n";
    }

    /****************************/
    for(int i = 0; i < 10; i++)
    {
        alphaDeque.push_back(i +65);
    }
    //display the complete vector
    for(int i = 0; i < alphaDeque.size(); i++)
    {
        cout << alphaDeque [i];
    }
    cout << endl;

    //Use erase to remove all but the first two and last three elements of the vector

    alphaDeque.erase(alphaDeque.begin() + 2, alphaDeque.end() - 3);

    //Display the modified deque
         for(char n: alphaDeque)
            cout << n;
            cout << "\n";
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

ABCDEFGHIJ
ABHIJ


Process returned 0 (0x0)   execution time : 1.391 s
Press any key to continue.



*/

