package main

import (
	"encoding/json"
	"fmt"
	"io"
	"net/http"
)

type CatFactResponse struct{
	Fact string `json:"fact"`
	Length int `json:"length"`
}

func main() {
	url := "https://catfact.ninja/fact"

	resp, err := http.Get(url)
	if err != nil {
		fmt.Println(err)
		return
	}

	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK{
		fmt.Println(resp.Status)
		return
	}

	bodyBytes, err := io.ReadAll(resp.Body)
		if err != nil {
		fmt.Println(err)
		return
	}

	var data CatFactResponse
// unmarshall converts the json format data bytes into the structure format we want 
	if err := json.Unmarshal(bodyBytes, &data); err != nil {
		fmt.Println("jaon unmarshal failed")
		return
	}

	fmt.Println(data.Fact, data.Length)

}
