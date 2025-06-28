import random
choices = ["rock","paper","scissors"]

computer = random.choice(choices)
player = None

while player not in choices:
    player = input("rock, paper or scissors: ").lower()

if player == computer:
    print("computer: ",computer)
    print("player: ",player)
    print("Tie!!")
elif player == "rock":
    if computer == "scissors":
        print("computer: ", computer)
        print("player: ", player)
        print("Player wins!!")
    if computer == "paper":
        print("computer: ", computer)
        print("player: ", player)
        print("Computer wins!!")
elif player == "paper":
    if computer == "rock":
        print("computer: ", computer)
        print("player: ", player)
        print("Player wins!!")
    if computer == "scissors":
        print("computer: ", computer)
        print("player: ", player)
        print("Computer wins!!")
elif player == "scissors":
    if computer == "paper":
        print("computer: ", computer)
        print("player: ", player)
        print("Player wins!!")
    if computer == "rock":
        print("computer: ", computer)
        print("player: ", player)
        print("Computer wins!!")