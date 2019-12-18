func repeatedNTimes(A []int) int {
	for _,x:=range A{
		c:=0
		for _,y:=range A{
			if x==y {
				c++
			}
		}
		if c==len(A)/2 {
			return x
		}
	}
	return 0
}