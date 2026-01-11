package main

import "fmt"

func main() {
	points := map[string]int{
		"a": 10,
		"b": 0, // valid
	}

	fmt.Println("a", points["a"])
	fmt.Println("b", points["b"])
	fmt.Println("c", points["c"]) // this will also give 0 which can become confusing, this is where OK comins in

	valB, okB := points["b"]
	fmt.Println(valB, okB)

	valc, okc := points["c"]
	fmt.Println(valc, okc)

	if val, ok := points["b"]; ok {
		fmt.Println(val)
		} else {
			fmt.Println("not present")
		}

	prices := map[string]int{
		"xyz" : 500,
		"abc" : 555,
	}

	total:= 0
	for item, price := range prices {
		fmt.Println(item, price)
		total += price
	}
	fmt.Println(total)

	for item := range prices {
		fmt.Println(item)
	}
}
