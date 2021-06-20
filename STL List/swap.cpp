/*
Cpp_STL_Reference
LIST
program swap
void swap(container & from)
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    list<int> mylist1{1,2,3,4};
    list<int> mylist2{3,5,7,9};

    //Using swap function to swap elements of lists
    mylist1.swap(mylist2);

    //printing the first list

    cout << "mylist1 = ";
    for(int n: mylist1)
    cout << n << " ";
    cout <<  "\n";

    cout << "mylist2 = ";
    for(int i:mylist2)
    cout << i << " ";
    cout <<  "\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output

mylist1 = 3 5 7 9
mylist2 = 1 2 3 4
*/

