#include <stdio.h>
#include <string.h>

void displayQuestion(char question[], char options[][50], char correctOption) {
    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, options[i]);
    }
    printf("Enter your answer (A/B/C/D): ");
}

int main() {
    char questions[5][256] = {
        "Which is the capital of France?",
        "What is the largest planet in our solar system?",
        "Who wrote 'Romeo and Juliet'?",
        "Which element has the chemical symbol 'O'?",
        "What is the hardest natural substance on Earth?"
    };

    char options[5][4][50] = {
        {"Paris", "London", "Berlin", "Madrid"},
        {"Earth", "Mars", "Jupiter", "Saturn"},
        {"William Shakespeare", "Charles Dickens", "Mark Twain", "Ernest Hemingway"},
        {"Oxygen", "Gold", "Silver", "Iron"},
        {"Diamond", "Graphite", "Corundum", "Quartz"}
    };

    char correctOptions[5] = {'A', 'C', 'A', 'A', 'A'};
    int score = 0;
    char answer;

    printf("Welcome to the KBC game!\n");

    for (int i = 0; i < 5; i++) {
        displayQuestion(questions[i], options[i], correctOptions[i]);
        scanf(" %c", &answer);

        if (toupper(answer) == correctOptions[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n", correctOptions[i]);
        }
    }

    printf("\nYou have completed the game!\n");
    printf("Your total score is: %d out of 5\n", score);

    if (score == 5) {
        printf("Excellent! You are a genius!\n");
    } else if (score >= 3) {
        printf("Well done! You did a great job!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
