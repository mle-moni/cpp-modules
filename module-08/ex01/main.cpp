#include <exception>
#include <iostream>
#include <algorithm>
#include "span.hpp"
#include <cstdlib>
#include <ctime>

void	basic_tests(void) {
	int size = 3;
	span test(size);
	std::cout << "created span with size: " << size << "\n";
	try {
		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test.addNumber(5);
	} catch (const std::exception &err) {
		std::cout << err.what() << "\n";
		std::cout << "max length for the span is: " << size << ", span is: ";
		test.print();
	}
}

void	shortestSpan_with_empty_container_test(void)
{
	int size = 5;
	span test(size);
	std::cout << "created span with size: " << size << "\n";
	try {
		test.shortestSpan();
	} catch (const std::exception &err) {
		std::cout << err.what() << "\n";
		std::cout << "span was: ";
		test.print();
	}
}

void	shortest_longest_simple_test(void)
{
	int size = 6;
	span test(size);
	std::cout << "created span with size: " << size << "\n";
	test.addNumber(20);
	test.addNumber(9);
	test.addNumber(44);
	test.addNumber(91);
	test.addNumber(1);
	test.addNumber(10);
	std::cout << "span is: ";
	test.print();
	std::cout << "shortest span is: " << test.shortestSpan() << "\n";
	std::cout << "longest span is: " << test.longestSpan() << "\n";
}

void  huge_span_test_best_case(void)
{
	int size = 10001;
	span test(size);
	std::cout << "created span with size: " << size << "\n";
	for (int i = 0; i < size; i++) {
		test.addNumber(i * 3);
	}
	std::cout << "span is: ";
	test.print();
	std::cout << "shortest span is: " << test.shortestSpan() << "\n";
	std::cout << "longest span is: " << test.longestSpan() << "\n";
}

void  huge_span_test_bad_case(void)
{
	int size = 10001;
	span test(size);
	std::cout << "created span with size: " << size << "\n";
	for (int i = size - 1; i >= 0; i--) {
		test.addNumber(i * 3);
	}
	std::cout << "span is: ";
	test.print();
	std::cout << "shortest span is: " << test.shortestSpan() << "\n";
	std::cout << "longest span is: " << test.longestSpan() << "\n";
}

void  very_huge_span_test_random(void)
{
	std::srand(std::time(nullptr));
	int size = 100001;
	span test(size);
	std::cout << "created span with size: " << size << "\n";
	for (int i = 0; i < size; i++) {
		test.addNumber(std::rand() % 300000);
	}
	std::cout << "span is: ";
	test.print();
	std::cout << "shortest span is: " << test.shortestSpan() << "\n";
	std::cout << "longest span is: " << test.longestSpan() << "\n";
}

int		main(void)
{
	basic_tests();
	shortestSpan_with_empty_container_test();
	shortest_longest_simple_test();
	// huge_span_test_best_case();
	// huge_span_test_bad_case();
	// very_huge_span_test_random();
	return (0);
}
