package main

import (
	"errors"
	"fmt"
)

func main() {

	fmt.Println("case 1: success")
	if err := dowork(true); err != nil {
		fmt.Println("error:", err)
	}

	fmt.Println("case 2: fail early")
	if err := dowork(false); err != nil {
		fmt.Println("error:", err)
	}

}

func dowork(success bool) error {

	// resource related work
	// start message -> recource acquired
	// cleanup message-> resource released

	fmt.Println("start: resource acquired")


	// defer will guarantee that this runs at the end of the function
	// in both the paths
	// -- success or failure
	defer fmt.Println("cleanup: resource released")

	if !success {
		return errors.New("something went wrong. i am returning early ")
	}

	fmt.Println("work: doing something imp")
	fmt.Println("work: work done")

	return nil
}
