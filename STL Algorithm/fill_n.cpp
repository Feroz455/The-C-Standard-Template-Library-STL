/*
Cpp_STL_Reference
program fill_n
iterator fill_n(iterator start, size_t n, const TYPE& val);
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> v1;
    for(int i= 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    cout << "\n\n";
    cout << "Before, v1 is : ";
    for(int i = i; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    fill_n(v1.begin(), v1.size()/2, -1);
    cout << "\nAfter , v1 is : ";
    for(int n: v1)
        cout << n << " ";
        cout << "\n\n\n";
        /**********************/

        //Creating vector of size 8
        vector<int> vect(8);
        // printing default values
        for(int n : vect)
        cout << n << " ";
         cout << "\n\n\n";

         //creating a vector of size 8 all initial value as 1
         vector<int> v(8,1);
         for(int n: v)
            cout << n << " ";
        cout << "\n\n\n";

        fill_n(vect.begin(), 4, 7);
        for(int x: vect)
            cout << x << " ";
        cout << "\n\n\n";

        fill_n(vect.begin() + 3, 3, 4);
        for(int x: vect)
            cout << x << " ";
        cout << "\n\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output


Before, v1 is : 0 1 2 3 4 5 6 7 8 9

After , v1 is : -1 -1 -1 -1 -1 5 6 7 8 9


0 0 0 0 0 0 0 0


1 1 1 1 1 1 1 1


7 7 7 7 0 0 0 0


7 7 7 4 4 4 0 0




Process returned 0 (0x0)   execution time : 0.975 s
Press any key to continue.
*/

