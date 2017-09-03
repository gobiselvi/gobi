#include <iterator>
#include <algorithm>
#include <iostream>
#include <cctype>
bool isAn(unsigned char x){return std::isalnum(x);}
int main()
{
    std::cout << "An character count: " <<
    std::count_if(std::istream_iterator<char>(std::cin),
                  std::istream_iterator<char>(),
                  isAlphaNum
                 ) ;
}
