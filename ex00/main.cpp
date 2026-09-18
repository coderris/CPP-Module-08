#include "easyfind.hpp"

int main(void)
{
	std::vector<int> values1;
	values1.push_back(1);
	values1.push_back(2);
	values1.push_back(3);
	values1.push_back(4);
	values1.push_back(5);

	std::list<int> values2;
	values2.push_back(1);
	values2.push_back(2);
	values2.push_back(3);
	values2.push_back(4);
	values2.push_back(5);

	// Match
	std::cout << *easyfind(values1, 2) << std::endl;
	std::cout << *easyfind(values2, 2) << std::endl;

	// No match
	std::vector<int>::const_iterator it = easyfind(values1, 42);
	if (it == values1.end())
		std::cout << "42 not found in vector" << std::endl;
	else
		std::cout << *it << std::endl;

	// Container const
	const std::vector<int> constValues(values1);
	std::cout << *easyfind(constValues, 3) << std::endl;

	// Set case
	std::set<int> values3;
	values3.insert(10);
	values3.insert(20);
	values3.insert(30);
	std::cout << *easyfind(values3, 20) << std::endl;

	return 0;
}