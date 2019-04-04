#include<stdio.h> 


int main () {
    
    
    int c; //The address at which the user input from the menu will be stored so that we can use it in the switch case function. 
    
    printf("Please select from the following numbers the option you want to choose\n");
    printf("1 - Encryption with a Rotation Cipher\n2 - Decryption with a Rotation Cipher\n3 - Encryption with a Substitution Cipher\n");
    printf("4 - Decryption with a Substitiution Cipher\n5 - Decryption of Encrypted Substitutional Cipher given only Cipher Text and Substitutions\n");
    printf("6 - Decryption of a message encrypted with a substituition cipher given cipher text only\n");
    
    
    scanf("%d", &c);
    
    
    switch (c) {
        case 1: 
        printf("1"); //The Printf placements is where the functions are going to go for each task. 
        break; 
        case 2:
        printf("2"); 
        break;
        case 3:
        printf("3"); 
        break; 
        case 4:
        printf("4"); 
        break; 
        case 5: 
        printf("5"); 
        break; 
        case 6: 
        printf("6"); 
        break; 
        default:
        printf("Please Type an Appropriate Input");
        break; 
        
    }
    
    
    
    
}






//THE FOLLOWING ARE THE TASKS, EACH SHOULD PROBABLY HAVE A FUNCTION OF ITS OWN THAT CAN BE REFERRED TO IN THE MAIN INT. 



// Encryption of a message with a rotation cipher given the message text and rotation amount. 



//Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount.



// Encryption of a message with a substitution cipher given a message text and alphabet substitution. 



//Decryption of a message encrypted with a substitution cipher given cipher text and substitutions.



//Decryption of a message encrypted with a rotation cipher given cipher text only. 



//Decryption of a message encrypted with a substituition cipher given cipher text only. 



