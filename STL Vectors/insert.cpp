/*
Cpp_STL_Reference
VECTOR
program insert
void insert(iterator loc, size_type num, const TYPE& val);
void insert(iterator loc, input_iterator start, input_iterator end)
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    //Create a vector, load it with the first 10 characters of the alphabet
    vector<char> alphaVector;

    for(int i = 0; i < 10; i++)
    {
        alphaVector.push_back(i+65);
        cout << alphaVector[i];
    }
    cout << "\n\n\n";
    //Insert four C's into the vector
    vector<char>::iterator theIterator = alphaVector.begin();
    alphaVector.insert(theIterator, 4, 'C');
    //Display the vector
    for(theIterator = alphaVector.begin(); theIterator != alphaVector.end(); theIterator++)
    {
        cout << *theIterator;
    }

    /*******************************************/
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);

    cout << endl;

    v2.insert(v2.end(), v1.begin(), v1.end());
    cout << "After , v2 is : ";
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
ABCDEFGHIJ


CCCCABCDEFGHIJ

Process returned 0 (0x0)   execution time : 13.520 s
Press any key to continue.
*/

