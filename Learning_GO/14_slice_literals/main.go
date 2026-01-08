package main

import "fmt"

func main() {
	// common colection type
	// dynamic
	// []type{...}

	results := []string{"ayush", "goyal"}
	fmt.Println(results, results[0], results[len(results)-1])

	results[1] = "AYU"
	fmt.Println(results)

	var nums []int
	fmt.Println(len(nums))
	
	nums = append(nums, 10)
	nums = append(nums, 30)
	nums = append(nums, 20)

	fmt.Println(nums)


}
