/*
Cpp_STL_Reference
MULTISETS
program find
iterator find(const key_type & key)
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
    getchar();
    return 0;
}
//main end
///Program end

/*
output

The multiset elements are : 1 2 3 3 3 5 5 6
Match not found




*/
