#include <stdio.h>
void getLetters(char* first_letter, char* second_letter, char* third_letter, char* fourth_letter, char* fifth_letter);
void writeLetters(FILE* file);
void convertLetter(char* letter);
int getMenuChoice();


int main()
{

}






void getLetters(char* first_letter, char* second_letter, char* third_letter, char* fourth_letter, char* fifth_letter)
{
    //fscanf file and store in variables passed by address
}

void writeLetters(FILE* file)
{
    //rewrite file entirely
}

void convertLetter(char* letter)
{
    //check if capital -> convert to lower
    //check if lower -> convert to upper
}

int getMenuChoice()
{
    int userChoice;
    printf("This program uses a text file with five letters in it and converts all lower case letters into upper case and vice versa\n")
    printf("OPTION [1] - Read Input File\n");
    printf("OPTION [2] - Write Input File\n");
    printf("Please select an option: ");
    scanf("%d", &userChoice);

    return userChoice;
}