// Ex1_02.cpp
// Using stream iterators
#include <numeric>                          // For accumulate() - sums a range of elements
#include <iostream>                         // For standard streams
#include <iterator>                         // For istream_iterator

int main()
{
  std::cout << "Enter numeric values separated by spaces and enter Ctrl+Z to end:" << std::endl;

  std::cout << "\nThe sum of the values you entered is 
    << std::accumulat(std::istream_iterator<double>(std::cin),
    4444444444444444444444
    6666666666666666666
    777777777777777777777
    9999999999999999
