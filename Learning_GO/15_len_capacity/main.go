package main

import "fmt"

func main() {
	// make([]T, len, capacity)
	scores := make([]int, 0, 5)
	fmt.Println(len(scores))
	fmt.Println(scores)
	fmt.Println(cap(scores))

	scores = append(scores, 100)
	fmt.Println(scores)


	scores = append(scores, 300, 200)
	fmt.Println(scores)
	fmt.Println("---------")

	scores = append(scores, 400, 500, 500)
	fmt.Println(len(scores))
	fmt.Println(scores)
	fmt.Println(cap(scores))


	// appending slices
	tasks := []string{"sap", "badminton"}
	moretasks := []string{"golang", "dsa"}

	//... operator
	tasks = append(tasks, moretasks...)
	fmt.Println(tasks)
}
