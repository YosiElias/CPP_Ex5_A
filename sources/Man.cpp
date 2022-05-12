//
// Created by Aviva on 5/12/2022.
//
#include <stdexcept>
#include "Man.hpp"
using namespace std;

namespace ariel{
    Man::Man(const string &name){
        this->_name = name;
        this->_Pchildren = {};
    }
}

