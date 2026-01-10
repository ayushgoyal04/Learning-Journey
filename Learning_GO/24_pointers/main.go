package main


import (
	"fmt"
)

func main() {
	// pointers stored the memory adress of any var

	// &x -> address of x (makes a pointer)
	// *p -> dereference deref(go to that adress and read/write) -> change a value inside a function without returning it

	score := 10
	fmt.Println("before score: ", score)

	addscore(&score)
	fmt.Println("after score: ", score)

}

func addscore(score *int) {
	*score = *score + 12
}
