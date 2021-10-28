def check_permutation(word1: str, word2: str) -> bool:
	map = {}
	for ch in word1:
		val = map.get(ch, 0)
		map[ch] = val + 1
	
	for ch in word2:
		if ch not in map:
			return False
		map[ch] -= 1
		if map[ch] == 0:
			del map[ch]

	return True
