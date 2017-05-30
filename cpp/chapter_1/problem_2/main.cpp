#include <iostream>

#include "../../test/color.cpp"
#include "../../test/test_suite.cpp"
#include "test.cpp"

int main() {
	std::unordered_map<std::string, bool(*)()> fmap;
	fmap["reverse_permutation"] = test::reverse_permutation;
	fmap["random_valid_permutation"] = test::random_valid_permutation;	
	fmap["invalid_permutation"] = test::invalid_permutation;
	fmap["different_length"] = test::different_length;
	test_suite::test_suite(fmap);

	return 0;
}
