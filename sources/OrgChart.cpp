//
// Created by Yossi on 5/12/2022.
//


#include <iostream>
#include <stdexcept>
#include <utility>
#include <bits/stdc++.h>
#include "OrgChart.hpp"
using namespace std;

namespace ariel{

    OrgChart& OrgChart::add_root(const string &name) {
        return *this;
    }

    OrgChart& OrgChart::add_sub(const string &name, const string &name1) {
        return *this;
    }

    std::ostream &operator<<(ostream &output, const OrgChart &c) {
            return output;
    }

    OrgChart::iterator OrgChart::begin_level_order() {
        return {this->_root};
    }
    OrgChart::iterator OrgChart::end_level_order() {
        return {this->_root};
    }

    OrgChart::iterator OrgChart::begin_reverse_order() {
        return {this->_root};
    }

    OrgChart::iterator OrgChart::reverse_order() {
        return {this->_root};
    }

    OrgChart::iterator OrgChart::begin_preorder() {
        return {this->_root};
    }

    OrgChart::iterator OrgChart::end_preorder() {
        return {this->_root};
    }

    OrgChart::OrgChart() {
        this->_root = NULL;
    }
}