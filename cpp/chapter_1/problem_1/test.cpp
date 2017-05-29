#include <iostream>
#include <string>
#include "solution.cpp"

namespace test {
	bool all_unique_char() {
		std::string str = "abcdefgh";
		return solution::is_all_char_unique(str) == true;
	}

	bool one_duplicate_char() {
		std::string str = "aabcdefg";
		return solution::is_all_char_unique(str) == false;
	}
}
