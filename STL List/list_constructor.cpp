/*
Cpp_STL_Reference
LIST
program list_conttructors
list();
list(const list &c);
list(size_type  num, TYPE &val = TYPE());
list(input_iterator start, input_iterator end);

*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
//Function to print the list
template<class T>
void printList(list<T> mylist)
{
    //Get the iterator
  typename list<T>::iterator it;

    //Printing all the elements of the list

    for(it = mylist.begin(); it != mylist.end(); ++it)
        cout << " " << *it;
    cout << "\n";
}
//main begin
int main()
{

    //Create a list with the help of constructor
    //This will inset 100 10 times in the list
    list<int> mylist(10, 100);
    printList<int>(mylist);

    list<string> mylist1(5, "Greek");

    printList(mylist1);

    /***********************/
    list<int>first; //empty list of ints
    list<int>second(4, 100); //four ints with value 100
    list<int> third(second.begin(), second.end());
    list<int> fourth(third);
    printList<int>(second);
    int myints[] = {16,2,77,29};
    list<int> fifth(myints , myints + sizeof(myints) / sizeof(int));
    printList<int>(fifth);

    getchar();
    return 0;
}
//main end
///Program end

/*
output

 100 100 100 100 100 100 100 100 100 100
 Greek Greek Greek Greek Greek
 100 100 100 100
 16 2 77 29


Process returned 0 (0x0)   execution time : 1.893 s
Press any key to continue.
*/

