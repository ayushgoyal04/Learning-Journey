package main

import (
	"fmt"
)

func main() {

	for i := 1; i<=23; i++{
		fmt.Println(i)
	}

	N := 12
	sum := 0

	for i := 1; i <=N; i++ {
		sum = sum+1;
	}

	fmt.Println(sum)

}
