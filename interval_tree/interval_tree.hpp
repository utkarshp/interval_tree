//
//  interval_tree.hpp
//  interval_tree
//
//  Created by Utkarsh on 2/29/24.
//

#ifndef interval_tree_hpp
#define interval_tree_hpp
#include <cassert>
#include "interval.hpp"

namespace utkarsh {

    template <typename T>
    class IntervalTreeNode {
        Interval<T> interval;
        T nodeval;
        Interval<T>* left;
        Interval<T>* right;
        Interval<T>* center;
    public:

        IntervalTreeNode() {
            left = nullptr;
            right = nullptr;
            center = nullptr;
        }
        IntervalTreeNode(Interval<T> interval, T nodeval) : interval(interval), nodeval(nodeval) {
            left = nullptr;
            right = nullptr;
            center = nullptr;
        }
        void addInterval(Interval<T> interval);
    };

}
#endif /* interval_tree_hpp */
