/*
Cpp_STL_Reference
LIST
program assign
void assign(size_type num, const TYPE & val)
void assign(input_iterator start, input_iterator end)

*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

//main begin
int main()
{
    //Initailization of list
    list<int> demo_list;
    //Assigning the value 100, 5 times
    //to the list ,list_demo

    demo_list.assign(5, 100);


    //Displaying the list
    for(int i : demo_list)
    {
        cout << i << " \n";
    }

    /**************************/
    //Initialization of list
    list<int> first_list;

    //Initialization second list

    list<int> second_list;

    //Assigning the value 100 , 5 times
    //to the second_list
    second_list.assign(5,100);
    //Copying second_list to first_list


    first_list.assign(second_list.begin(), second_list.end());

    for(int i: first_list)
    {
        cout << i << " ";
    }
    cout << "\n";

    /********************/


    list<int> L;
    for(int i = 0; i < 10; i++)
    {
        L.push_back(i);
    }

     for(int i: L)
    {
        cout << i << " ";
    }
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

100
100
100
100
100
100 100 100 100 100


Process returned 0 (0x0)   execution time : 2.236 s
Press any key to continue.
*/

