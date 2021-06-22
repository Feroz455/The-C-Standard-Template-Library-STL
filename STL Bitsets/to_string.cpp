/*
Cpp_STL_Reference
BITESETS
program to_string;
string to_string();

*/
#include<iostream>
#include<algorithm>
#include<bitset>
#include<string>
using namespace std;

//main begin
int main()
{
    string bit_string = "110010";

    bitset<8> b1(bit_string);
    cout << "bl = " << b1 << endl;

    //string fro position 2 till end
    bitset<8> b2(bit_string, 2);
    cout << "b2 = " << b2 << endl;

    //string from position 2 till next 3 positions
    bitset<8> b3(bit_string, 2, 3);
    cout << "b3 = " << b3 << endl;

    std::cout << b1 << '\n' << b2 << '\n' << b3 << '\n';



    /*****************************/
    //string constructor using custom zero/one digit

    string alpha_bit_string = "aBaaBBaB";

    bitset<8> b(alpha_bit_string, 0, alpha_bit_string.size(),'a', 'B');

    cout << b << "\n";

    /*******************************/
     // char* constructor using custom digits
    std::bitset<8> B("XXXXYYYY", 8, 'X', 'Y'); // [0, 0, 0, 0, 1, 1, 1, 1]
    std::cout << B << '\n';


    /*****************************/
    std::bitset<8> a(42);
    std::cout << a.to_string() << '\n'
              << a.to_string('*') << '\n'
              << a.to_string('O', 'X') << '\n';

    getchar();
    return 0;
}
//main end
///Program end

/*
output

bl = 00110010
b2 = 00000010
b3 = 00000001
00110010
00000010
00000001


Process returned 0 (0x0)   execution time : 1.499 s
Press any key to continue.
*/
