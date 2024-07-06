#include <stdio.h>

int main() {
    char questions[3][100] = {
        "What is a correct syntax to output 'Hello World' in C?",
        "How do you insert COMMENTS in C code?",
        "How can you create a variable with the numeric value 5?"
    };

    char options[3][4][100] = {
        {"1. cout << 'Hello World';", "2. printf('Hello World')", "3. printf(Hello World)", "4. system.out.println('Hello World')"},
        {"1. # Comment", "2. // Comment", "3. <!--Comment-->", "4. **Comment**"},
        {"1. val num = 5;", "2. num = 5 int;", "3. num = 5", "4. int num = 5;"}
    };

    int answers[3] = {2, 2, 4};

    int score = 0;

    for (int i = 0; i < 3; i++) {
        printf("%s\n", questions[i]);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }

        int userAnswer;
        printf("Enter your answer: ");
        scanf("%d", &userAnswer);

        if (userAnswer == answers[i]) {
            printf("Correct Answer!\n");
            score++;
        } else {
            printf("Wrong Answer!\nThe correct answer is %d\n", answers[i]);
        }
    }

    printf("Your score is %d\n", score);

    return 0;
}
