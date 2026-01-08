package main

import "fmt"

func main() {

	// map[keyType]valuetype

	ages := map[string]int{
		"Ayush":  21,
		"rachit": 18,
	}

	fmt.Println(ages["Ayush"], len(ages))

	// using make to create a map
	//  make(map[k]v)

	var scores map[string]int // nil map
	fmt.Println(scores, scores["a"])

	scores = make(map[string]int)
	scores["math"] = 90
	fmt.Println(scores, scores["a"])
	fmt.Println(scores["math"])

	users := map[string]string{
		"u1" : "Ayush",
		"u2" : "Divyansh",
		"u3" : "Piyush",
	}
	fmt.Println(users)
	delete(users, "u1")
	delete(users, "u455") // no error
	fmt.Println(users)

}
