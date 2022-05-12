#include <string>
#include <algorithm>
#include "doctest.h"
#include "sources/OrgChart.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Bad input") {
    OrgChart o;
    CHECK_THROWS(o.add_root(""));
    o.add_root("Yossi");
    CHECK_THROWS(o.add_sub("Avi", "Moshe"));
    CHECK_THROWS(cout << o << endl;);
    CHECK_THROWS(OrgChart copy = o);    //internal use-not allow copy constructor


}
TEST_CASE("Insert the same name") {
    //insert the same name:
    OrgChart o;
    for (int i = 0; i < 10; i++) {
                CHECK_NOTHROW(o.add_root("Same Name"));
    }
    //for each not throw error:
    CHECK_NOTHROW(for (string element : o){cout << element << " " ;});
}
TEST_CASE("Case 1") {
    OrgChart o;
    CHECK_NOTHROW(o.add_root("A")
            .add_sub("A", "a1")
            .add_sub("A", "B")
            .add_sub("A", "a2")
            .add_sub("B", "b1")
            .add_sub("A", "a3"));
    CHECK_FALSE(o.begin_reverse_order() == o.begin_level_order());
    CHECK_FALSE(o.reverse_order() == o.end_level_order());
    CHECK_EQ(o.begin_reverse_order(), o.end_level_order());
    auto it = o.begin_level_order();
//    it++;
//    string s = *it;   //Todo: add list for result and compare it to *it ! ! !
    for (auto it=o.begin_level_order(); it!=o.end_level_order(); ++it) {
       if((*it)=="a")
           cout<<"yes";
    }
//    if ("a1"==(*it))
//        cout<<"yes";
//    CHECK_EQ("a1", (*it));
//    CHECK_EQ((++o.begin_level_order()).pointer_to_current_man->_name, "B");
//    CHECK_EQ(o.begin_preorder(), o.begin_level_order());
//    CHECK_EQ((o.begin_reverse_order()).pointer_to_current_man->_name, "a3");
//    CHECK_EQ((++o.begin_preorder()).pointer_to_current_man->_name, "a1");
//    CHECK_EQ((++o.begin_preorder()).pointer_to_current_man->_name, "B");
//    CHECK_EQ((++o.begin_preorder()).pointer_to_current_man->_name, "b1");
//    CHECK_EQ((++o.begin_preorder()).pointer_to_current_man->_name, "a2");
//    CHECK_EQ((++o.begin_preorder()).pointer_to_current_man->_name, "a3");


}













