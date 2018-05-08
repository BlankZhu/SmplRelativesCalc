#ifndef RLTV_CALC_H
#define RLTV_CALC_H
// header
#include <string>
#include <unordered_map>
#include <string.h>

// class
class Person{
public:
    // constructor
    Person(const std::string &);
    // member function
    std::string Calculate(const std::string &);
    // get this name
    std::string getName();
private:
    std::string _this_name;
    std::unordered_map<std::string, std::string> _relation_mp;
};


// function
char *convert(char* s1, char* s2);

#endif