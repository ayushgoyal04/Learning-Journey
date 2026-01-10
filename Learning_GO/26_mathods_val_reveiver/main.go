package main

import "fmt"

type user struct {
	name string
	age  int
}

func main() {
	u := user{name: "Ayush", age: 21}
	fmt.Println(u.intro())

}

// val receiver means this method receives a copy of the User
func (u user) intro() string {
	return fmt.Sprintf("hi: %s", u.name)
}
