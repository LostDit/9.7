#include <iostream>
#include <string>

int main()
{
  std::string input;
  getline(std::cin, input);
  int i = 0, j = 0, counter = 0;
  while (j > -1) {
    j = input.find(' ', i + 1);
    if (input.substr(i, j-i) != " ")
      counter++;
    i = j;
  }
  std::cout << counter;
}
