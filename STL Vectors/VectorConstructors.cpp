/*
Cpp_STL_Reference
VECTOR
program Vector constructors

vector();
vector(const vector& c);
vector(size_Type num, const TYPE& val = TYPE());
vector(input_iterator start, input_iterator end);
~vector();
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    //Create a vector of random integers
    cout << "Original vector: ";

    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        int num = (int) rand()%10;
        cout << num << " ";
        v.push_back(num);
    }
    cout << endl;


    //Find the first element of v that is even
    vector<int>::iterator iter1 = v.begin();
    while(iter1 != v.end() && *iter1 %2 != 0)
    {
        iter1++;
    }

    //Find the last element of v that is even
    vector<int>::iterator iter2 = v.end();
    do
    {
        iter2--;
    }while(iter2 != v.begin() && *iter2 % 2 != 0);


    //only proceed if we find both numbers
    if(iter1 != v.end() && iter2 != v.begin())
    {
        cout << "first even number: " << *iter1 << ", last even number: "<< *iter2 << endl;

            cout << "New vector: ";
            vector<int> v2(iter1, iter2);
            for(int i = 0; i < v2.size(); i++)
            {
                cout << v2[i] << " ";
            }
            cout << endl;
    }

    /*****************/
    //Create an empty vector
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

    for(int x: vect)
        cout << x << " ";
    cout << "\n";
    /******************/
    int n = 3;
    //Create a vector of size n with all value as 10
    vector<int> vect1(n, 10);
    for(int x : vect1)
        cout << x << " ";
        cout << "\n";
    /*****************/
    vector<int> vect2{10,20,30};
    for(int x : vect2)
        cout << x  << " ";
    cout << "\n";
    /*****************/
    int arr[] = {10,20,30};
      n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect3(arr, arr + n);

    for(int x : vect3)
            cout << x << " ";
    cout << "\n";
    /******************/
    vector<int> vect4{10,20,30};
    vector<int> vect5(vect4.begin(), vect4.end());
    for(int x : vect5)
        cout << x << " ";
    cout << "\n";
    /**************/

    vector<int> vect6(10);
    int value = 5;
    fill(vect6.begin(), vect6.end(), value);
    for(int x: vect6)
        cout << x << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Original vector: 1 7 4 0 9 4 8 8 2 4
first even number: 4, last even number: 4
New vector: 4 0 9 4 8 8 2
10 20 30
10 10 10
10 20 30
10 20 30
10 20 30
5 5 5 5 5 5 5 5 5 5

Process returned 0 (0x0)   execution time : 2.414 s
Press any key to continue.

*/

