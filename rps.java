import java.util.Random;
import java.util.Scanner;

public class rps {
    public static void main(String[] args) {
        System.out.println("==========================================");
        System.out.println("Rock, paper and scissors...");
        System.out.println("==========================================");
        // 0 = rock
        // 1 = paper
        // 2 = scissors
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        int compCount = 0;
        int playerCount = 0;
        System.out.println("How many rounds would you like to play?");
        System.out.print(">> ");
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            int num = rand.nextInt(3);
            // User Input
            System.out.print("Press 'r' for rock, 'p' for paper and 's' for scissors: ");
            char pick = sc.next().charAt(0);
            // Displaying Computer's input
            if (pick == 'r' || pick == 'p' || pick == 's') {
                if (num == 0) {
                    System.out.println("Computer's pick = rock");
                } else if (num == 1) {
                    System.out.println("Computer's pick = paper");
                } else {
                    System.out.println("Computer's pick = scissor");
                }
                // Displaying Player's input
                if (pick == 'r') {
                    System.out.println("Your pick = rock");
                } else if (pick == 'p') {
                    System.out.println("Your pick = paper");
                } else if (pick == 's') {
                    System.out.println("Your pick = scissor");
                }
            }
            // If user enters something else (not r,p or s)
            else {
                System.out.println("----------------------------");
                System.out.println("Invalid option entered. Try again!");
                i--;
                System.out.println("----------------------------");
            }
            // When Computer picks rock
            if (num == 0 && pick == 'r') {
                System.out.println("----------------------------");
                System.out.println("Round Tied!");
                System.out.println("----------------------------");
            } else if (num == 0 && pick == 'p') {
                System.out.println("----------------------------");
                System.out.println("Player wins the round!");
                System.out.println("----------------------------");
                playerCount++;
            } else if (num == 0 && pick == 's') {
                System.out.println("----------------------------");
                System.out.println("Computer wins the round!");
                System.out.println("----------------------------");
                compCount++;
            }
            // When computer picks paper
            if (num == 1 && pick == 'p') {
                System.out.println("----------------------------");
                System.out.println("Round Tied!");
                System.out.println("----------------------------");
            } else if (num == 1 && pick == 's') {
                System.out.println("----------------------------");
                System.out.println("Player wins the round!");
                System.out.println("----------------------------");
                playerCount++;
            } else if (num == 1 && pick == 'r') {
                System.out.println("----------------------------");
                System.out.println("Computer wins the round!");
                System.out.println("----------------------------");
                compCount++;
            }
            // When computer picks scissors
            if (num == 2 && pick == 's') {
                System.out.println("----------------------------");
                System.out.println("Round Tied!");
                System.out.println("----------------------------");
            } else if (num == 2 && pick == 'r') {
                System.out.println("----------------------------");
                System.out.println("Player wins the round!");
                System.out.println("----------------------------");
                playerCount++;
            } else if (num == 2 && pick == 'p') {
                System.out.println("----------------------------");
                System.out.println("Computer wins the round!");
                System.out.println("----------------------------");
                compCount++;
            }
        }
        // Results
        System.out.println("==========================");
        System.out.println("End of " + n + " rounds...");
        System.out.println("==========================");
        System.out.println("Final Score:");
        System.out.println("Computer's points = " + compCount);
        System.out.println("Player's points = " + playerCount);
        System.out.println("**************************");
        if (compCount == playerCount) {
            System.out.println("Game tied!");
        } else if (compCount > playerCount) {
            System.out.println("Computer won the game!");
        } else {
            System.out.println("Player won the game!");
        }
        System.out.println("**************************");
        sc.close();
    }
}
