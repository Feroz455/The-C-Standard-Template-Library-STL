#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

//main begin
int main()
{
    vector<int> the_vector;
    vector<int>::iterator the_iterator;

    for(int i = 0; i < 10; i++)
    {
        the_vector.push_back(1);
    }
    int total = 0;
    the_iterator = the_vector.begin();
    while(the_iterator != the_vector.end())
    {
        total += *the_iterator;
        the_iterator++;
    }
    cout << "Total = " << total << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Total = 10


Process returned 0 (0x0)   execution time : 1.683 s
Press any key to continue.
*/


