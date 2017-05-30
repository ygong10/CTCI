def urlify(buff, size):
	i = len(buff) - 1
	while i >= 0:
		if buff[size] == '_':
			buff[i] = '0'
			buff[i-1] = '2'
			buff[i-2] = '%'
			i = i - 3
		else:
			buff[i] = buff[size]
			i = i - 1
		size = size - 1
	return buff

def main():
	assert urlify(['a', 'b', 'c', '_', ' ', ' '], 3) == ['a','b','c','%','2','0']
	assert urlify(['a', '_', 'b', 'c', 'd', ' ', ' '], 4) == ['a','%','2','0','b','c','d']
	assert not urlify(['a','b','_', 'c', '_', '_'], 4) == ['a','b','c','%','2','0']
	print "urlify passed"

main()

