package main

import (
	"fmt"
)

func main(){
	// arrays are fixed in size ie, cannot grow
	var marks [3]int

	marks[0] = 10
	marks[1] = 20
	marks[2] = 30

	fmt.Println(marks)

	// arrays literals
	res := [5]int{2, 4, 5, 6}

	fmt.Println(len(res))
	fmt.Println(res)


}
