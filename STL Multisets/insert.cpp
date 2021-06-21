/*
Cpp_STL_Reference
MULTISETS
program insert
iterator insert(const type & key);
iterator insert(iterator pos, const TYPE& val)
void insert(input_iterator start, input_iterator end);
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
     multiset<int> m;

    //Inserting elements
    m.insert(1);
    m.insert(6);
    m.insert(2);
    m.insert(5);
    m.insert(3);
    m.insert(3);
    m.insert(5);
    m.insert(3);

    //Prints the multiset elements
    cout << "The multiset elements are : ";
    for(int n:m)
        cout << n << " ";
    cout << "\n";

    multiset<int>::iterator i =  m.find(7);

    if(i != m.end())
        cout << "Math found\n";
    else
        cout << "Match not found\n";




        multiset<int> s;
        //Function to insert elements
        //in the set container

        auto itr = s.insert(s.begin(), 1);
        //the time taken to insert is very less as the correct position for insertion is given
    itr = s.insert(itr, 4);
    itr = s.insert(itr, 1);
    itr = s.insert(itr, 5);


    //slow insertion as position is not given correctly
    itr = s.insert(s.begin(), 3);



    cout << "The elements in multiset are : ";
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << "\n";



    s.insert(m.begin(), m.end());
    for(int n:s)
        cout << n << " ";
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The multiset elements are : 1 2 3 3 3 5 5 6
Match not found
The elements in multiset are : 1
1
3
4
5
1 1 1 2 3 3 3 3 4 5 5 5 6


Process returned 0 (0x0)   execution time : 2.176 s
Press any key to continue.
*/
