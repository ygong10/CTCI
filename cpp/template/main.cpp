#include <iostream>

#include "../../test/color.cpp"
#include "../../test/test_suite.cpp"
#include "test.cpp"

int main() {
	std::unordered_map<std::string, bool(*)()> fmap;
	/* TODO:Insert functions into the function map here */
	test_suite::test_suite(fmap);

	return 0;
}
