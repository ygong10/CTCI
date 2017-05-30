#include <iostream>
#include <string>
#include <unordered_map>

namespace solution {
	bool is_permutation(std::string str1, std::string str2) {
		if (str1.size() != str2.size()) {
			return false;
		}
		
		std::unordered_map<char, bool> dict;
		
		for (auto s1 : str1) {
			auto it = dict.find(s1);
	
			if (it == dict.end()) {
				dict[s1] = 1;
			} else {
				dict[s1]++;
			}
		}
		
		for (auto s2 : str2) {
			if (dict.find(s2) == dict.end()) {
				return false;
			}
		}
	
		return true;
	}
}
