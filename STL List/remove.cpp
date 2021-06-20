/*
Cpp_STL_Reference
LIST
program remove
void remove(const TYPE & val);
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    //Create a list
    list<int> demoList;
    //Add elements to the list
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);


     //list before removing elements

     cout << "List before removing elements : ";
     for(auto itr = demoList.begin(); itr != demoList.end(); itr++)
     {
         cout << *itr << " ";
     }

     //delete all elements with value 20
     demoList.remove(20);

     //List after removing elements

     cout << "\nlist after removing elements : ";
     for(auto itr = demoList.begin(); itr != demoList.end(); itr++)
     {
         cout << *itr << " ";
     }



     /************************/

     //Create a list that has the first 10 letters of the alphabet
     list<char> charList;
     for(int i = 0; i < 10; i++)
     {
         charList.push_front(i + 65);
     }

     cout << '\n';
    for(auto itr = charList.begin(); itr != charList.end(); itr++)
     {
         cout << *itr << " ";
     }
    cout << '\n';
     //Remove all instance of 'E'
     charList.remove('E');
     for(auto itr = charList.begin(); itr != charList.end(); itr++)
     {
         cout << *itr << " ";
     }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
List before removing elements : 10 20 20 30 40
list after removing elements : 10 30 40
J I H G F E D C B A
J I H G F D C B A

Process returned 0 (0x0)   execution time : 2.828 s
Press any key to continue.

*/

