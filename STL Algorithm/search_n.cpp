/*
Cpp_STL_Reference
program search_n
iterator search_n(iterator start, iterator end, size_t num, const TYPE& val)
iterator search_n(iterator start, iterator end, size_t num, const TYPE & val, BinPred p);
*/
#include <iostream>
#include <algorithm>
#include <iterator>

template <class Container, class Size, class T>
bool consecutive_values(const Container& c, Size count, const T& v)
{
  return std::search_n(std::begin(c),std::end(c),count,v) != std::end(c);
}

int main()
{
   const char sequence[] = "1001010100010101001010101";

   std::cout << std::boolalpha;
   std::cout << "Has 4 consecutive zeros: "
             << consecutive_values(sequence,4,'0') << '\n';
   std::cout << "Has 3 consecutive zeros: "
             << consecutive_values(sequence,3,'0') << '\n';
}
//main end
///Program end

/*
output

Has 4 consecutive zeros: false
Has 3 consecutive zeros: true

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.

*/

