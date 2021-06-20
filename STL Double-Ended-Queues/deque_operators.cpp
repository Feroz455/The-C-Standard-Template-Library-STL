/*
Cpp_STL_Reference
VECTOR
program deque Operator
TYPE& operator[]( size_type index );
const TYPE& operator[]( size_type index ) const;
deque  operator=(const deque& c2);
bool operator==(const deque& c1, const deque& c2);
bool operator!=(const deque& c1, const deque& c2);
bool operator<(const deque& c1, const deque& c2);
bool operator>(const deque& c1, const deque& c2);
bool operator<=(const deque& c1, const deque& c2);
bool operator>=(const deque& c1, const deque& c2);
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    deque<int> mydeque1 {1,2,3};
    deque<int> mydeque2{3,2,1,4};
    mydeque1 = mydeque2;

    cout << "mydeque1 = ";
        for(auto it = mydeque1.begin(); it != mydeque1.end(); ++it)
        {
            cout << " " << *it;
        }
        cout << "\n\n\n";
        /****************/
        deque<int> mydeque;

        mydeque.push_back(3);
        mydeque.push_back(4);
        mydeque.push_back(1);
        mydeque.push_back(7);
        mydeque.push_back(3);
        mydeque.push_back(8);

        cout << mydeque[3];
    /***************************/
    cout << "\n\n";
    for(int i = 0; i < mydeque.size(); i++)
        if(i % 2 == 0)
    {
        cout << mydeque[i];
        cout << " ";
    }
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
mydeque1 =  3 2 1 4


7

3 1 3


Process returned 0 (0x0)   execution time : 2.062 s
Press any key to continue.

*/

