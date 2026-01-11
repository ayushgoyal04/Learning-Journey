package main

import (
	"fmt"
)

func main() {
	num1 := 10
	num2 := 20

	total := num1 + num2
	total++

	isActive := true
	hasSub := false

	canaccess := isActive || hasSub
	candelete := isActive && hasSub
	fmt.Println(canaccess)
	fmt.Println(candelete)


	fmt.Println(total)

}
