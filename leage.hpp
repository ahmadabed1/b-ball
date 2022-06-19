#include <array>
#include <iostream>
using std::array;

const int opt=10;
class League
{

array<std::size_t,20>teams_captured={};

    public:
    League()
    {}

    
    League(League& league)=default;

 
};