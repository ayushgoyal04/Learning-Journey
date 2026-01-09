package main

import (
	"fmt"
	"log"
	"strconv"
)

func main() {

	// go does not use exceptions for normal failures
	// functions -> return errors as normal return values

	// val, error := something()
	// if err != nil {handle the error}

	if err := run(); err != nil {
		log.Fatal(err)
	}

}

func run() error {
	input := "37"

	level, err := parse(input)
	if err != nil {
		return err
	}

	fmt.Println("selected level", level)
	return nil
}

func parse(s string) (int, error) {
	// error return pattern
	// (value, err)
	// nil error -> success
	// if !nil -> failure

	n, err := strconv.Atoi(s)
	if err != nil {
		return 0, fmt.Errorf("level must be a number")
	}

	if n < 1 || n > 5 {
		return 0, fmt.Errorf("Level must me betn 1 and 5")
	}

	return n, nil
}
