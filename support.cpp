//
// Created by Zhangwd on 2020/6/17.
//
#include <iostream>
#include <string>
extern int count;
extern std::string str;
void read_extern(void)
{
    std::cout << "Count is " << count << std::endl;
    std::cout << "Count is " << str << std::endl;
}