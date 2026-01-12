package main

import (
	"fmt"
	"net/http"
)

func helloHandler(w http.ResponseWriter, r *http.Request){

	if r.Method != http.MethodGet {
		http.Error(w, "only get allowed", http.StatusMethodNotAllowed)
		return
	}

	_, _ = w.Write([]byte("Hello from go net/http server"))
}

func main(){
	// register a route
	// response writer will write a response back to the handler
	http.HandleFunc("/hello", helloHandler)

	fmt.Println("Go to http port")

	err := http.ListenAndServe(":8080", nil)

	fmt.Println(err)
}
