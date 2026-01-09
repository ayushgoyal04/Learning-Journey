package main

import "fmt"

// varidic funtions
func sumAll(nums ...int) int {
	total := 0
	for _, value := range nums {
		total += value
	}
	return total
}


func main() {
	fmt.Println(sumAll(1, 2, 3,4, 5, 6, 7))

	values := []int{10, 20, 30}
	fmt.Println(sumAll(values...))

	// anonymous function
	res := func(n int) int {
		return n * n
	}

	fmt.Println(res(28))

	// iife- immediately envoked function expression
	res1 := func(a int, b int ) int {
		return a + b
	}(5, 10)

	fmt.Println(res1)

}
