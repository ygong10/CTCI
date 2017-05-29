""" return if str1 is a permutation of str2 """

def isPermutation(str1, str2):
	if len(str1) != len(str2):
		return False

	dict1 = {}
	dict2 = {}

	for s1 in str1:
		if s1 in dict1:
			dict1[s1] = dict1[s1] + 1
		else:
			dict1[s1] = 1

	for s2 in str2:
		if s2 not in dict1:
			return False
	return True

def main():
	assert isPermutation("hgfdsa", "asdfgh")
	assert isPermutation("qretw", "qwert")
	assert not isPermutation("asdqwe", "sdfqwe")
	assert not isPermutation("asdfghjkl", "asdfg")
	
	print "isPermutation passed"

main()
