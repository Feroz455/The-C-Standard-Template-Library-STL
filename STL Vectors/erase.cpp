/*
Cpp_STL_Reference
VECTOR
program erase
iterator erase(iterator loc);
iterator erase(iterator start , iterator end);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    //Create a vector , load it with the first ten characters of the alphabet
    vector<char> alphaVector;
    for(int i = 0; i < 10; i++)
    {
        alphaVector.push_back(i + 65);
    }

    int size = alphaVector.size();

    vector<char>::iterator startIterator;
    vector<char>::iterator tempIterator;
    for(int i = 0; i < size; i++)
    {
        startIterator = alphaVector.begin();
        alphaVector.erase(startIterator);
        //Display the vector
        for(tempIterator = alphaVector.begin(); tempIterator != alphaVector.end(); tempIterator++)
            cout << *tempIterator;
        cout << endl;
    }

    /***************************/
    for(int i = 0; i < 10; i++)
    {
        alphaVector.push_back(i + 65);
    }
    //display the complete vector
    for(int i = 0; i < alphaVector.size(); i++)
    {
        cout << alphaVector[i];
    }
    cout << endl;

    //use erase to remove all but the first two and last three elements of the vector
    alphaVector.erase(alphaVector.begin()+2, alphaVector.end()-3);
    //display the modified vector
    for(int i = 0; i < alphaVector.size(); i++)
    {
        cout << alphaVector[i];
    }
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

