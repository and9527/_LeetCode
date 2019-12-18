// func subtractProductAndSum(n int) int {
//     for n>0{
//         fmt.Println(n%10)
//         n=n/10
//     }
// }

func subtractProductAndSum(n int) int {
	
	return product(n) - sum(n)
    //for n>0{
    //    fmt.Println(n%10)
    //    n=n/10
    //}
}

func product(n int)int  {
	ans:=1
	for n>0 {
		ans*=n%10
		n/=10
	}
	return ans
}
func sum(n int)int  {
	ans:=0
	for n>0 {
		ans+=n%10
		n/=10
	}
	return ans
}