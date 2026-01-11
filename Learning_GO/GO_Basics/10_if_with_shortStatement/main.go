package main

import (
	"fmt"
)

func main(){
	items := 3
	priceperitem := 45

	if total := items * priceperitem; total >= 100 {
		fmt.Println("Eligible")
	} else {
		fmt.Println("Not elegible")
	}

}
