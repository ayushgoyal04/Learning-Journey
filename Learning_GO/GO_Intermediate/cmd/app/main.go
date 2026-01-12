package main

import (
	"fmt"
	"go-modules/internal/greet"
)

func main() {
	msg1 := greet.Hello("Ayush")

	fmt.Println(msg1)
}
