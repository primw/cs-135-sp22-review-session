#include <stdio.h>
void getLetters(FILE* fp, char* first_letter, char* second_letter, char* third_letter, char* fourth_letter, char* fifth_letter);
void writeLetters(FILE* fp, char first_letter, char second_letter, char third_letter, char fourth_letter, char fifth_letter);
void convertLetter(char* letter);
int getMenuChoice();
int getUserInput(char* first_letter, char* second_letter, char* third_letter, char* fourth_letter, char* fifth_letter);

#define INPUT_FILE "content.txt"
#define OUTPUT_FILE "output.txt"

int main()
{
    FILE* inputFilePtr, *outputFilePtr;   
    char first, second, third, fourth, fifth;
    int menuChoice = getMenuChoice();

    switch (menuChoice)
    {
        case 1:
            getUserInput(&first, &second, &third, &fourth, &fifth);
            break;
        case 2:
            inputFilePtr = fopen(INPUT_FILE, "r");
            
            if (inputFilePtr == NULL)
            {
                printf("ERROR: Unable to open file!\n");
                return 0;
            }
            else
            {
                getLetters(inputFilePtr, &first, &second, &third, &fourth, &fifth);
                fclose(inputFilePtr);
            }
            break;

        default:
            printf("Inalid option!\n");
            return 0;
    }

    convertLetter(&first);
    convertLetter(&second);
    convertLetter(&third);
    convertLetter(&fourth);
    convertLetter(&fifth);

    outputFilePtr = fopen(OUTPUT_FILE, "w");
            
    if (outputFilePtr == NULL)
    {
        printf("ERROR: Unable to open file!\n");
        return 0;
    }
    else
    {
        writeLetters(outputFilePtr, first, second, third, fourth, fifth);
        fclose(outputFilePtr);
    }

    return 0;
}



void getLetters(FILE* fp, char* first_letter, char* second_letter, char* third_letter, char* fourth_letter, char* fifth_letter)
{
    fscanf(fp, "%c %c %c %c %c", first_letter, second_letter, third_letter, fourth_letter, fifth_letter);
}

void writeLetters(FILE* fp, char first_letter, char second_letter, char third_letter, char fourth_letter, char fifth_letter)
{
    fprintf(fp, "%c %c %c %c %c", first_letter, second_letter, third_letter, fourth_letter, fifth_letter);
}

void convertLetter(char* letter)
{
    //check if capital -> convert to lower
    if (*letter >= 'A' && *letter <= 'Z')
    {
        *letter += 32;
    }
    //check if lower -> convert to upper
    else
    {
        *letter -= 32;
    }
   
}

int getMenuChoice()
{
    int userChoice;
    printf("This program uses a text file with five letters in it and converts all lower case letters into upper case and vice versa\n");
    printf("OPTION [1] - User Input\n");
    printf("OPTION [2] - File Input\n");
    scanf("%d", &userChoice);
    return userChoice;
}
int getUserInput(char* first_letter, char* second_letter, char* third_letter, char* fourth_letter, char* fifth_letter)
{
    printf("Please enter in a word (format: t e s t s) : ");
    scanf(" %c %c %c %c %c", first_letter, second_letter, third_letter, fourth_letter, fifth_letter);
}