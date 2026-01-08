package main

import "fmt"

func add(a int, b int) int {
	return a+b
}

func sumAndProd(a int, b int) (int, int) {
	sum := a + b
	product := a * b
	return sum, product
}

func main(){
	sum1 := add(10, 40)
	fmt.Println(sum1)

	a, b := sumAndProd(10, 20)
	fmt.Println(a, b)

	onlysum , _ := sumAndProd(200, 4332)
	fmt.Println(onlysum)
}
