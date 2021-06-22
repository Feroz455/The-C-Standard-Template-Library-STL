/*
Cpp_STL_Reference
BITESETS
program Bitset operator
!=, ==, &= , ^=,  ~,<<= , >>= , [];
1) != returns true if the two bitset are not equal
2) == return true if the two bitsets are equal
3) &= performs the AND operator on the two bitsets
4) ^= performs the XOR operation on the two bitsets
5) |= performd the OR operation on the two bitsets
6) ~ reverse the bitset(same as calling flip())
7) <<= shift the bitset to the left
8) >>= shift the bitset to right
9) [x] returns a reference to the xth bit in the bitset
*/
#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;

//main begin
int main()
{
    //Create a bitset out of a number

    bitset<8> bs2((long)32);
    cout << "bs2 is " << bs2 << endl;
    //shift the bitset to the left by 4 digits
    bs2 <<= 4;
    cout << "Now bs2 is " << bs2 << endl;

    bitset<4> bset1(9); // bset1 contain 1001;

    bitset<4> bset2(3); //bset2 contains 0011
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    //comparison operator
    cout << (bset1 == bset2) << endl; // false 0
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    cout << (bset1 != bset2) << endl; // true 1
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;

    //bitwise operator and assignment
    cout << (bset1 ^= bset2) << endl;
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    cout << (bset1 &= bset2) << endl;
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    cout << (bset1 |= bset2) << endl;
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;


    // left and right shifting
    cout << (bset1 <<= 2) << endl; // 1100
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    cout << (bset1 >>= 1) << endl; // 0110
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;


     // not operator
    cout << (~bset2) << endl; // 1100
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;

    // bitwise operator
    cout << (bset1 & bset2) << endl; // 0010
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    cout << (bset1 | bset2) << endl; // 0111
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;
    cout << (bset1 ^ bset2) << endl; // 0101
    cout << "bset1 = " << bset1 << endl;
    cout << "bset2 = " << bset2 << endl;

    //declaring set8 with capacity of 8 bits
    bitset<8> set8;
    cout << "set8 : " << set8 << endl;
    //setting first bit (or 6th index)
    set8[1] = 1;
    cout << "set8: " << set8 << endl;
    set8[4] = set8[1];
    cout << "set8: " << set8 << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
bs2 is 00100000
Now bs2 is 00000000
bset1 = 1001
bset2 = 0011
0
bset1 = 1001
bset2 = 0011
1
bset1 = 1001
bset2 = 0011
1010
bset1 = 1010
bset2 = 0011
0010
bset1 = 0010
bset2 = 0011
0011
bset1 = 0011
bset2 = 0011
1100
bset1 = 1100
bset2 = 0011
0110
bset1 = 0110
bset2 = 0011
1100
bset1 = 0110
bset2 = 0011
0010
bset1 = 0110
bset2 = 0011
0111
bset1 = 0110
bset2 = 0011
0101
bset1 = 0110
bset2 = 0011


Process returned 0 (0x0)   execution time : 16.383 s
Press any key to continue.

*/
