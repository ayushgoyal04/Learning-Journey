package main

import "fmt"

type user struct {
	name string
	age  int
}

func main() {

	u := user{name: "ayush", age: 21}
	fmt.Println(u.age)

	u.brith()

	fmt.Println(u.age)
}

func (u *user) brith() {
	u.age++

}
