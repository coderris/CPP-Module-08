#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

template <typename T>
typename T::const_iterator easyfind(const T& container, int value)
{
    return std::find(container.begin(), container.end(), value);
}
#endif