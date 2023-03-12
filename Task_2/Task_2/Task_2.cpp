#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
#include <list>
#include <forward_list>
#include <vector>
#include <string>

template <class T>
void print_container(T begin, T end) {
	while (begin != end) {
		std::cout << *(begin++) << " ";
		//std::advance(begin, 1);         // экспериментировал)))
	}
	std::cout << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	std::set<std::string> test_set = { "one", "two", "three", "four"};
	print_container(test_set.cbegin(), test_set.cend());

	std::unordered_set<std::string> test_uno_set = { "one", "two", "three", "four" };
	print_container(test_uno_set.cbegin(), test_uno_set.cend());

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list.cbegin(), test_list.cend());

	std::forward_list<std::string> test_forward_list = { "one", "two", "three", "four" };
	print_container(test_forward_list.cbegin(), test_forward_list.cend());

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector.cbegin(), test_vector.cend());

	return 0;
}