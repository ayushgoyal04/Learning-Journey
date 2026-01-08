package main

import "fmt"

func divide(a int, b int) (john int, ayush int) {
	john = a / b
	ayush = a + b
	// this will return the current values of the the varuables declared as the return parameters in the same order
	return
}

func main() {

	q, r := divide(10, 32)
	fmt.Println(q, r)

}
