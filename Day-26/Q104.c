#include<stdio.h>
int main(){
    int score=0,ans;

    printf("--- QUIZ APPLICATION ---\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Chennai  4. Kolkata\n");
    printf("Enter answer: ");
    scanf("%d",&ans);
    if(ans==2){
        printf("Correct!\n\n");
        score++;
    }else{
        printf("Wrong! Correct answer is Delhi\n\n");
    }

    printf("Q2. Which language is this code written in?\n");
    printf("1. Python  2. Java  3. C  4. C++\n");
    printf("Enter answer: ");
    scanf("%d",&ans);
    if(ans==3){
        printf("Correct!\n\n");
        score++;
    }else{
        printf("Wrong! Correct answer is C\n\n");
    }

    printf("Q3. 5+3*2 = ?\n");
    printf("1. 16  2. 11  3. 13  4. 10\n");
    printf("Enter answer: ");
    scanf("%d",&ans);
    if(ans==2){
        printf("Correct!\n\n");
        score++;
    }else{
        printf("Wrong! Correct answer is 11\n\n");
    }

    printf("Quiz Over! Your score = %d/3",score);

    return 0;
}