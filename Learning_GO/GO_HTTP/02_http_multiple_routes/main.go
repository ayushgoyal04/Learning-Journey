package main

import (
	"fmt"
	"net/http"
)

func rootHandler(w http.ResponseWriter, r *http.Request){

	_, _ = w.Write([]byte("Welcome do: /hello?name=ayush"))

}

func helloHandler(w http.ResponseWriter, r *http.Request){
	name := r.URL.Query().Get("name")

	if name == " "{
		name = "guest"
	}

	_, _ = w.Write([]byte(name))
}

func main() {
	http.HandleFunc("/", rootHandler)
	http.HandleFunc("/hello", helloHandler)

	err := http.ListenAndServe(":5000", nil)

	fmt.Println(err)
}
