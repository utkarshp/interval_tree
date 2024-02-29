//
//  interval.cpp
//  interval_tree
//
//  Created by Utkarsh on 2/29/24.
//

#include "interval.hpp"

using namespace utkarsh;

template<typename T>
constexpr bool Interval<T>::belongs(const T& point, bool end_incl) const {
    if (not end_incl) return (point >= m_begin) && (point < m_end);
    else return (point >= m_begin) && (point <= m_end);
}

template<typename T>
constexpr bool Interval<T>::intersects(Interval<T> other) const {
    return other.belongs(m_begin, true) || belongs(other.m_begin, true);
}

template<typename T>
Interval<T>& Interval<T>::combine(Interval<T> other) const {
    if (other.belongs(m_begin, true)) return Interval<T>(other.m_begin, m_end);
    else if (belongs(other.m_begin, true)) return Interval<T>(m_begin, other.m_end);
    assert(false);
}
