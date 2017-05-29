#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

#include "../../test/color.cpp"
#include "../../test/test_suite.cpp"
#include "test.cpp"

int main() {
	std::unordered_map<std::string, bool(*)()> fmap;
	fmap["all_unique_char"] = test::all_unique_char;
	fmap["one_duplicate_char"] = test::one_duplicate_char;
	test_suite::test_suite(fmap);

	return 0;
}
