/*
Cpp_STL_Reference
SET
program pair<iterator , iterator> equal_range(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);

    //Prints the set elements
    cout << "The set elements are: ";
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    //Function returns lower bound and upper bund
    auto it = s.equal_range(2);
    cout << "\nThe lower bound of 2 is " << *it.first << endl;
    cout << "\nThe upper bound of 2 is " << *it.second <<endl;



     it = s.equal_range(8);
    cout << "\nThe lower bound of 8 is " << *it.first << endl;
    cout << "\nThe upper bound of 8is " << *it.second <<endl;


    it = s.equal_range(0);
    cout << "\nThe lower bound of 0 is " << *it.first << endl;
    cout << "\nThe upper bound of 0 is " << *it.second <<endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The set elements are: 1 2 3 4 5
The lower bound of 2 is 2

The upper bound of 2 is 3

*/
