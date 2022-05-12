#pragma once

//
// Created by Yossi on 5/12/2022.
//

//#ifndef PART_A_ORGCHART_HPP
//#define PART_A_ORGCHART_HPP

#include <iostream>
#include <stdexcept>
#include "Man.hpp"
using namespace std;

namespace ariel {
    class OrgChart{
    private:
        // fields
        Man* _root;
    public:
        OrgChart();

        OrgChart& add_root(const std::string &name);

        OrgChart& add_sub(const std::string &name, const std::string &name1);

        friend std::ostream& operator<< (std::ostream& output, const OrgChart& c);

    // ------ Class Iterator --------
    class iterator {

//        private:
//            Man* pointer_to_current_man;

        public:

            iterator(Man* & ptr)    //Todo: need to change to nullptr and not &
                    : pointer_to_current_man(ptr) {
            }

            ~iterator(){
                delete pointer_to_current_man;
            };

            Man* pointer_to_current_man;

            // Note that the method is const as this operator does not
            // allow changing of the iterator.
            // Note that it returns T& as it allows to change what it points to.
            // A const_iterator class will return const T&
            // and the method will still be const
            std::string & operator*() const {
                //return *pointer_to_current_man;
                return pointer_to_current_man->_name;
            }

            std::string* operator->() const {
                return &(pointer_to_current_man->_name);
            }

            // ++i;
            iterator& operator++() {
                //++pointer_to_current_man;
    //            pointer_to_current_man = pointer_to_current_man->m_next;
                return *this;
            }

            // i++;
            // Usually iterators are passed by value and not by const& as they are small.
            iterator operator++(int) {
                iterator tmp= *this;
    //            pointer_to_current_man= pointer_to_current_man->m_next;
                return tmp;
            }

            bool operator==(const iterator& rhs) const {
                return pointer_to_current_man == rhs.pointer_to_current_man;
            }

            bool operator!=(const iterator& rhs) const {
                return pointer_to_current_man != rhs.pointer_to_current_man;
            }
    };  // END OF CLASS ITERATOR



        iterator begin_level_order();
        iterator end_level_order();

        iterator begin_reverse_order();
        iterator reverse_order();   //Todo: need to change name to end_reverse_order

        iterator begin_preorder();
        iterator end_preorder();

        iterator begin() {
            // return &(m_first->m_value);
            return iterator{this->_root};
        }

        iterator end() {
            // return nullptr;
            return iterator{this->_root};
        }
    };
};



//#endif //PART_A_ORGCHART_HPP
