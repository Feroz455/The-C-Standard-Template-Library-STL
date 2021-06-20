/*
Cpp_STL_Reference
VECTOR
program Deque constructor
deque();
deque(const container &c);
deque(size_type num, const TYPE & val = TYPE());
deque(input_iterator start, input_iterator end);
~container();

*/
#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

//main begin
int main()
{
    int i;
    //Constructor use
    deque<int> first; // Empty deque of ints
    deque<int> second(4,100); //Four ints with value 100
    deque<int> third(second.begin(), second.end()); //Iterating through second
    deque<int> fourth(third); // a copy of third


    //The iterator constructor can be used to copy array

    int myints[] = {16,2,77,29};
    deque<int> fifth(myints , myints+4);
    cout << "The contents of fifth are: ";


    for(deque<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
        cout << " "<< *it;
    cout << "\n";

    /*************************/
   //Create a deque of random integers
    cout << "Original deque: ";

    deque<int> v;
    for(int i = 0; i < 10; i++)
    {
        int num = (int) rand()%10;
        cout << num << " ";
        v.push_back(num);
    }
    cout << endl;


    //Find the first element of v that is even
    deque<int>::iterator iter1 = v.begin();
    while(iter1 != v.end() && *iter1 %2 != 0)
    {
        iter1++;
    }

    //Find the last element of v that is even
    deque<int>::iterator iter2 = v.end();
    do
    {
        iter2--;
    }while(iter2 != v.begin() && *iter2 % 2 != 0);


    //only proceed if we find both numbers
    if(iter1 != v.end() && iter2 != v.begin())
    {
        cout << "first even number: " << *iter1 << ", last even number: "<< *iter2 << endl;

            cout << "New deque: ";
            deque<int> v2(iter1, iter2);
            for(int i = 0; i < v2.size(); i++)
            {
                cout << v2[i] << " ";
            }
            cout << endl;
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
The contents of fifth are:  16 2 77 29
Original deque: 1 7 4 0 9 4 8 8 2 4
first even number: 4, last even number: 4
New deque: 4 0 9 4 8 8 2


Process returned 0 (0x0)   execution time : 1.453 s
Press any key to continue.

*/

