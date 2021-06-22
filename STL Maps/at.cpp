// CPP program to illustrate
// Implementation of swap() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Take any two maps
    map<int, char> map1;
    map<char, int> map2;

    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    map1[4] = 'd';

    map2['w'] = 1;
    map2['y'] = 2;
    map2['z'] = 3;

    // Print the associated element
    cout << "Element at map1[2] = "
         << map1.at(2) << endl;

    cout << "Element at map2['w'] = "
         << map2.at('w') << endl;

    return 0;
}
/*
Element at map1[2] = b
Element at map2['w'] = 1

Process returned 0 (0x0)   execution time : 0.070 s
Press any key to continue.
*/
