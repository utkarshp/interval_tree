//
//  main.cpp
//  interval_tree
//
//  Created by Utkarsh on 2/29/24.
//

#include <iostream>
#include "interval_tree.hpp"

int main(int argc, const char * argv[]) {
    Interval<double> i(5, 75.0);
    Interval<long long> j(1e7, 5e9);

    std::cout << std::boolalpha << i.belongs(7) << " " << i.belongs(79) << '\n';
    std::cout << std::boolalpha << j.belongs(765458) << " " << j.belongs(72e7) << '\n';
    return 0;
}
