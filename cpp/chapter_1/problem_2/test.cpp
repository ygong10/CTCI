#include <iostream>
#include <string>
#include "solution.cpp"

namespace test {
	bool reverse_permutation() {
		std::string str1 = "hgfdsa";
		std::string str2 = "asdfgh";

		return solution::is_permutation(str1, str2);
	}

	bool random_valid_permutation() {
		std::string str1 = "qretw";
		std::string str2 = "qwert";

		return solution::is_permutation(str1, str2);
	}

	bool invalid_permutation() {
	std::string str1 = "asdqwe";
	std::string str2 = "sdfqwe";
 
	return !solution::is_permutation(str1, str2);
	}

	bool different_length() {
		std::string str1 = "asdfghjkl";
		std::string str2 = "asdfg";

		return !solution::is_permutation(str1, str2);
	}
}
