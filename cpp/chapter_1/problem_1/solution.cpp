#include <iostream>
#include <string>
#include <unordered_map>

namespace solution {
	bool is_all_char_unique(std::string str) {
		std::unordered_map<char, bool> dict;
	
		for (auto s : str) {
			auto it = dict.find(s);

			if (it == dict.end()) {
				dict[s] = true;
			} else {
				return false;
			}
		}

		return true;
	}
}
