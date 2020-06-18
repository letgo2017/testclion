#include <iostream>
#include <limits>
using namespace std;
#include <string>
int count ;
extern void read_extern();
std::string str = "abcabc";
int main()
{
    count = 5;
    cout<<str;
    read_extern();
}
