def isAllCharUnique(str):
	uniqueDict = {}

	for s in str:
		if s in uniqueDict:
			return False
		else:
			uniqueDict[s] = True
	return True
		
def main():
	assert isAllCharUnique("abcdefg")
	assert isAllCharUnique("a jkdurnfh")
	assert not isAllCharUnique("aabcdefg")
	assert not isAllCharUnique("abdfe gs_d ")

	print "IsAllUnique passed"

main() 	
