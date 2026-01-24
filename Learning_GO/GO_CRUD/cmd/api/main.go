// path-> config-> DB-> Router -> run server

package main

import (
	"fmt"
	"log"
	"notes-api/internal/config"
	"notes-api/internal/db"
	"notes-api/internal/server"
)

func main(){
	cfg, err := config.Load()
	if err != nil {
		log.Fatal("config error")
	}

	client, _, err := db.Connect(cfg)
	if err != nil {
		log.Fatalf("db error")
	}

	defer func() {
		if err := db.Disconnect(client); err != nil {
			log.Printf("Mongo disconnect error: %v", err)
		}
	}()

	router := server.NewRouter()
	// router := server.NewRouter(database)

	addr := fmt.Sprintf(":%s", cfg.ServerPort)

	if err := router.Run(addr); err != nil {
		log.Fatalf("server failed")
	}
}
