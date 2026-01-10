package main

import "fmt"

// struct groups related fields into one type

type User struct {
	ID int
	Name string
	Email string
	Age int
}


func main(){

	u1 := User{
		ID: 1,
		Name: "ayush",
		Email: "ayush@gmail.com",
		Age: 21,
	}

	fmt.Println(u1, u1.Email, u1.ID)

	// struct fields are mutable by default
	u1.Age = 200
	fmt.Println(u1.Age)

	u2 := User{
		Name: "Ayuh",
	}

	fmt.Println("partial data:", u2)

}
