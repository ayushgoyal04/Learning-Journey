package main

import (
	"fmt"
	"net/http"
	"time"
	"encoding/json"
)

func successHandler(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")

	w.WriteHeader(http.StatusOK)

	res := map[string]any{
		"ok" : true,
		"message" : "Json encoded successful",
		"datetime": time.Now().UTC(),
	}

	_ = json.NewEncoder(w).Encode(res)
}

func main() {

	http.HandleFunc("/ok", successHandler)

	err := http.ListenAndServe(":5000", nil)
	fmt.Println(err)
}
