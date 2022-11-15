import random
# 1 = rock
# 2 = paper
# 3 = scissor
playerCount = 0
compCount = 0
n = int(input("How many rounds would you like to play?\n>> "))
i = 1
# Rounds goes for 'n' number of times
while(i <= n):
    rand = random.randint(1, 3)
    #Computer is rock
    if (rand == 1):
        compChoice = 'r'
    # Computer is paper
    elif(rand == 2):
        compChoice = 'p'
    # Computer is scissors
    elif(rand == 3):
        compChoice = 's'
    # Asking for input from the user
    print("Press 'r' for rock 'p' for paper and 's' for scissors: ")
    playerChoice = input(">> ")
    # When computer picks rock
    if(compChoice == 'r' and playerChoice == 'r'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Round Tied!")
        i += 1
        print("----------------------")

    elif(compChoice == 'r' and playerChoice == 's'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Computer Wins the round!")
        compCount += 1
        i += 1
        print("----------------------")

    elif(compChoice == 'r' and playerChoice == 'p'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Player wins the round!")
        playerCount += 1
        i += 1
        print("----------------------")

    # When Computer picks paper
    elif(compChoice == 'p' and playerChoice == 'p'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Round Tied!")
        i += 1
        print("----------------------")

    elif(compChoice == 'p' and playerChoice == 'r'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Computer Wins the round!")
        compCount += 1
        i += 1
        print("----------------------")

    elif(compChoice == 'p' and playerChoice == 's'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Player Wins the round!")
        playerCount += 1
        i += 1
        print("----------------------")

    # When the computer picks scissors
    elif(compChoice == 's' and playerChoice == 's'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Computer Wins the round!")
        i += 1
        print("----------------------")

    elif(compChoice == 's' and playerChoice == 'p'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Computer Wins the round!")
        compCount += 1
        i += 1
        print("----------------------")

    elif(compChoice == 's' and playerChoice == 'r'):
        print("Computer's Pick = ", compChoice)
        print("Player's Pick = ", playerChoice)
        print("Player Wins the round!")
        playerCount += 1
        i += 1
        print("----------------------")

    # If user inputs something other than 'r', 'p' or 's'
    else:
        i += 1
        i = i-1
        print("Invalid input entered.. Restarting round")
        print("----------------------")

# Final Results
print("******************************")
print("Final Scores: ")
print("Computer's Score = ", compCount)
print("Player's Score = ", playerCount)
print("******************************")

if(compCount == playerCount):
    print("Match Tied!")
    print("******************************")
elif(compCount > playerCount):
    print("Computer wins the match!")
    print("******************************")
else:
    print("Player wins the match!")
    print("******************************")
