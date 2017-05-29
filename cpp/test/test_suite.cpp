#include <iostream>
#include <string>
#include <unordered_map>

namespace test_suite {

	bool test_message(std::string msg, bool result) {
		if (result) {
			std::cout << msg << ": " << Color::colored_message("PASSED", Color::FG_GREEN) << std::endl;
		} else{
			std::cout << msg << ": " << Color::colored_message("FAILED", Color::FG_RED) << std::endl;
		}
	
		return result;
	}

	int test_suite(std::unordered_map<std::string, bool(*)()>& fmap) {
		int total_tests = fmap.size();
		int passed_tests = 0;
		int failed_tests = total_tests - passed_tests;
		int index = 1;
	
		for (auto it = fmap.begin(); it != fmap.end(); it++) {
			std::cout << index << ". ";
			bool correct = test_message(it->first, it->second);
			if (correct) {
				passed_tests++;
			}
			index++;
		}

		std::cout << std:: endl;
		std::cout << "Statistics" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Total Test Cases Passed: " << passed_tests << "/" << total_tests << std::endl;
		std::cout << "Total Test Cases Failed: " << failed_tests << "/" << total_tests << std::endl;
		std::cout<< "Percentage of Tests Cases Passed: " << (passed_tests * 1.0 / failed_tests) * 100 << "%" << std::endl;
		return 0;
	}
}

