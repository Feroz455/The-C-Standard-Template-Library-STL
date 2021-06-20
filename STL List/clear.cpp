/*
Cpp_STL_Reference
LIST
program clear();
void clear();
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
     //Declaration of list container
    list<int> mylist{1,2,3,4,5};

    //Using begin() to print

    for(auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << " \n";

    /*****************************/
    //Create a list of character

    list<char> charList;
    for(int i = 0; i < 10; i++)
    {
        charList.push_front(i+65);
    }

    //Display the list
     for(auto it = charList.begin(); it != charList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << " \n";

    charList.clear();

    cout << "After clear list \n";

    //Display the list
     for(auto it = charList.begin(); it != charList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << " \n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
1 2 3 4 5
J I H G F E D C B A
After clear list



Process returned 0 (0x0)   execution time : 1.867 s
Press any key to continue.

*/

