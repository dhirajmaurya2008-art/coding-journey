#include <stdio.h>
#include <conio.h>

int main()
{
    // //1.getchar()
    // char ch;
    // printf("Enter character: ");
    // ch = getchar(); // Reads single charater
    // printf("You entered: %c\n",ch);

    // //Clear the remaining input newline
    // while(getchar() != '\n');

    // //2.getch()
    // printf("Enter character: ");
    // printf("%c",getch());

    // //3.fgets()
    // char str[50];
    // printf("\nEnter line of text: ");
    // fgets(str,sizeof(str),stdin);
    // printf("You entered: %s\n",str);


    //1.putchar()
    char ch1;
    printf("Enter a character: ");
    scanf("%c",&ch1);
    printf("You entered: ");
    putchar(ch1);
    putchar('\n');
    
    //2.puts()
    puts("Hello-World\n");

    //3.putch()
    char ch2;
    printf("Press any key: ");
    
    // getch() reads the character without echoing it to the screen
    ch2 = getch(); 
    
    printf("\nYou pressed: ");
    // putch() displays that character directly
    putch(ch2); 
    
    return 0;
}