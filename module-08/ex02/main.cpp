#include <iostream>
#include <list>
#include "mutantstack.hpp"

void	mutant_tests(void)
{
	std::cout << "tests with mutant stack\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top = ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size = ";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "printing stack from bottom to top:\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	list_tests(void)
{
	std::cout << "tests with std::list\n";
	std::list<int> test_list;
	test_list.push_back(5);
	test_list.push_back(17);
	std::cout << "top = ";
	std::cout << test_list.back() << std::endl;
	test_list.pop_back();
	std::cout << "size = ";
	std::cout << test_list.size() << std::endl;
	test_list.push_back(3);
	test_list.push_back(5);
	test_list.push_back(737);
	test_list.push_back(0);
	std::list<int>::iterator it = test_list.begin();
	std::list<int>::iterator ite = test_list.end();
	++it;
	--it;
	std::cout << "printing list from begining to end:\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	mutant_tests();
	std::cout << "\n----------------------\n\n";
	list_tests();
	return (0);
}
