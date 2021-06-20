/*
Cpp_STL_Reference
DEQUE
program resize;
void resize(size_type num, const TYPE & val = TYPE());
*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
   deque<int> dq = { 10, 20, 30, 40, 50 };

    cout << "Size before resize " << dq.size() << "\n";

    // Prints the deque elements
    cout << "The contents of deque :";
    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << *it << " ";
        //resize
        dq.resize(7);

        //Print the deque elements after resize
        cout << "Size after resize " << dq.size() << "\n";

        cout << "The content of deque : ";
         for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << *it << " ";

    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

