#include <stdio.h>
#include <stdlib.h>
int countwords(char*,int);

int main(int argc, char const *argv[]) {
	char words[100];
    int lenght;
    printf("Insert the text:\n");
    fgets(words,100,stdin);
    lenght= strlen(words);
    printf("Words: %i\n",countwords(words,lenght));
	
	getch();
	return 0;
}

int countwords(char *words,int lenght)
{
    int count = 0;
    int i;
    for(i=0; i<lenght; i++)
    {
        if(words[i] == ' ' || words[i] == '\n')
        {
            if(words[i+1] != ' ')
            {
                count++;
            } 
        }
    }
    return count;
}
