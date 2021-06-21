/*
Cpp_STL_Reference
SET
program rend
reverse_iterator rend();
const_reverse_iterator rend() const;

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{ //insert(elements) function
    set<int> s;
    //Function to insert elements
    //in the set container
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);


    cout << "The elements in set are: ";
    for(auto it = s.rbegin(); it != s.rend(); it++)
        cout << *it << " ";


    set<int> s2;
    //Function to insert one set to another
    //al elements from where 3 is to end is
    //inserted to set2

    s2.insert(s.find(3), s.end());

    cout << "\nThe elements in set2 are : ";
    for(auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";

        cout << "\nSize of s1 = " << s.size() << endl;
        cout << "\nSize of s2 = " << s2.size() << endl;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The elements in set are: 5 4 3 2 1
The elements in set2 are : 3 4 5
Size of s1 = 5

Size of s2 = 3

Process returned 0 (0x0)   execution time : 2.756 s
Press any key to continue.
*/

