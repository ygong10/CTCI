def canBePalindrome(str):
	charDict = {}

	for s in str:
		if s not in charDict:
			charDict[s] = 1
		else:
			charDict[s] = charDict[s] + 1

	oddFlag = False

	for s in str:
		if charDict[s] % 2 != 0:
			if oddFlag:
				return False
			else:
				oddFlag = True
	
	return True

def main():
	assert canBePalindrome("aabb")
	assert canBePalindrome("abab")
	assert canBePalindrome("abcab")
	assert not canBePalindrome("abcaty")
	assert not canBePalindrome("zzxxab")
	assert not canBePalindrome("asdasdwyer")

	print "canBePalindrome passed"

main()

