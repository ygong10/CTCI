def oneAway(str1, str2):
	if abs(len(str1) - len(str2)) > 1:
		return False

	small, large = (str1, str2) if len(str1) <= len(str2) else (str2, str1)

	j = 0
	for i in range(0, len(small)):
		if small[i] != large[j]:
			j = j + 1
		if ((j - i) == 1 and (len(large) - len(small)) > 0) or (j - i) > 1 :	
			return False	 
		j = j + 1

	return True

def main():
	assert oneAway("abc", "abcd")
	assert oneAway("abcd", "abcde")
	assert oneAway("abcde", "abcd")
	assert not oneAway("abcee", "abcd")
	assert not oneAway("aabbbcc", "ccbbbaa")
	assert not oneAway("", "ab")

	print "oneAway passed"
main()

