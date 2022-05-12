#pragma once

//
// Created by Aviva on 5/12/2022.
//

//#ifndef PART_A_MEN_HPP
//#define PART_A_MEN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>

namespace ariel {
    class Man{
    public:
        Man(const std::string & name);
        void add_child(Man* & Pchild){ this->_Pchildren.push_back(Pchild);}
        std::string get_name(){return this->_name;};
        std::string _name;
        std::vector<Man*> _Pchildren;


//        void add_root(const std::string &str);

    };
}


//#endif //PART_A_MEN_HPP
