-- .env setup and config setup

make a mongodb custer
copy the url into the .env


commands run->
go mod init
go get github.com/gin-gonic/gin@latest
go get github.com/joho/godotenv
go get go.mongodb.org/mongo-driver/mongo/
go get go.mongodb.org/mongo-driver/mongo/options
go install github.com/air-verse/air@latest


-- connecting the DB
make mongo.go file
