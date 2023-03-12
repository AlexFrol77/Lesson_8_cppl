#include <iostream>
#include <algorithm>
#include <vector>

template <class T>
void print_vec(const std::vector<T>& vec) {
	for (const auto& st : vec) {
		std::cout << st << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	std::vector<int> vec{ 1, 1, 2, 5, 9, 6, 1, 7, 9, 2, 7, 4 };

	std::cout << "[IN]: ";
	print_vec(vec);

	std::sort(vec.begin(), vec.end());
	auto it = std::unique(vec.begin(), vec.end());
	vec.erase(it, vec.end());

	std::cout << "[OUT]: ";
	print_vec(vec);

	return 0;
}