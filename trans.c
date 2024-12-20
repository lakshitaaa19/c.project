#include <stdio.h>
#include <string.h> 
struct Translation {
    char english[50];
    char spanish[50];
};

void translateWord(struct Translation dictionary[], int size, char word[]) 
{
    for (int i = 0; i < size; i++) {
        if (strcasecmp(word, dictionary[i].english) == 0) {
            printf("The translation of '%s' is '%s'.\n", word, dictionary[i].spanish);
            return;
        }
    }
    
    printf("Sorry, the word '%s' is not in the dictionary.\n", word);
}

int main() {
   struct Translation dictionary[] = {
        {"hello", "hola"},
        {"goodbye", "adios"},
        {"please", "por favor"},
        {"thank you", "gracias"},
        {"yes", "si"},
        {"no", "no"},
    }; 

    int size = sizeof(dictionary) / sizeof(dictionary[0]);  
    char word[50];

    printf("Simple English to Spanish Translator\n");
    printf("Enter an English word (hello, goodbye, please, thank you, yes, no): ");
    scanf("%s", word);

    
    translateWord(dictionary, size, word);

    return 0;
}
