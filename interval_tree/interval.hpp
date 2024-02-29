//
//  interval.hpp
//  interval_tree
//
//  Created by Utkarsh on 2/29/24.
//

#ifndef interval_hpp
#define interval_hpp

#include <cassert>


namespace utkarsh {
    template <typename T>
    class Interval {
    public:
        const T& m_begin;
        const T& m_end;

        Interval(const T& begin, const T& end) : m_begin(begin), m_end(end) {}
        constexpr bool belongs(const T& point, bool end_incl=false) const;
        constexpr bool intersects(Interval<T> other) const;
        Interval<T>& combine(Interval<T> other) const;
    };
}


#endif /* interval_hpp */
