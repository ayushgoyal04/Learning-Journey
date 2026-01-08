package main

import "fmt"

func main() {
	scores := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

	leng := len(scores)
	for i := 0; i < leng; i++ {
		if scores[i]%2 == 0 {
			scores[i] = 0
		}
	}
	fmt.Println(scores)


	scores2 := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	// for range
	total := 0
	for i, v := range scores2{
		fmt.Println("index:", i, "score:", v)
		total += v
	}
	fmt.Println(total)

}
