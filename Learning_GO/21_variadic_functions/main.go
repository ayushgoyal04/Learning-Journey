package main

import "fmt"

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
}
