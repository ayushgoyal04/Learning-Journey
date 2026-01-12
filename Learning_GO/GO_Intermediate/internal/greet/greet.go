package greet

import "strings"

// this is a reuable library package not an executable program

// always start the name of the function with capital to mark it as an exportable function so that other packages can call it when we import the package
func Hello(name string) string {
	clean := normalize(name)

	return "Hello: "+clean
}

func normalize(name string) string {
	n := strings.TrimSpace(name)

	if n == "" {
		return "Guest"
	}
	return strings.ToUpper(n)
}
