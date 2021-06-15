#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int income()
{
    return 45000; 
}

std::vector<std::string> split(const std::string &input, char delim)
{
    std::stringstream ss(input);
    std::string line;
    std::vector<std::string> elems;
    while(std::getline(ss, line, delim))
    {
        elems.push_back(line);
    }
    return elems;
}

int main()
{
    std::cout << "Enter numbers for sum...\n";
    std::string lineOfNumbers;
    getline(std::cin, lineOfNumbers);
    std::vector<std::string> data = split(lineOfNumbers, ' ');
    int sum = 0, in = 0, diff = 0, daily = 0;
    std::vector<std::string>::iterator it;
    for(it = data.begin(); it != data.end(); it++)
    {
        sum += std::stoi(*it);
    }
    std::cout << "expense sum: " << sum << std::endl;
    in = income();
    diff = in - sum;
    std::cout << "balance left: " << diff << std::endl;
    daily = diff / 30;
    std::cout << "daily allowance: " << daily << std::endl;
    std::cin.get();
    return 0;
}
