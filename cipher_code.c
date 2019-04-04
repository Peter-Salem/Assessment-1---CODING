#include<stdio.h> 


//This is where the function prototypes of the task are going to go. 

char ERC(int A); // ERC - Encrypting Rotation Cipher, This function will try to do task 1. 





int main () {
    
    int c; //The address at which the user input from the menu will be stored so that we can use it in the switch case function. 
    
    //These printf functions create the menu so the program has a user friendly interface. 
    //The numbers used represent the different options the user can input to get to different options. 
    
    printf("Please select from the following numbers the option you want to choose\n");
    printf("1 - Encryption with a Rotation Cipher\n2 - Decryption with a Rotation Cipher\n3 - Encryption with a Substitution Cipher\n");
    printf("4 - Decryption with a Substitiution Cipher\n5 - Decryption of Encrypted Substitutional Cipher given only Cipher Text and Substitutions\n");
    printf("6 - Decryption of a message encrypted with a substituition cipher given cipher text only\n");
    
    
    scanf("%d", &c);//uses the file "input" to take user inputs. 
    
    
    switch (c) {
        case 1: 
        
        printf("%d", ERC(A)); 
        
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
char ERC(int A) {
    

    
    char k=1; //represents the shift in the alphabet or in order words the key. 
    
    int numbers[26] = {a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10, l=11, m=12, n=13, o=14, p=15, q=16, r=17, s=18, t=19, u=20, v=21, w=22, x=23, y=24, z=25};
    
    scanf("%d", &A);    
    
    A = (A+k)*%26
    
    return A; 
    
    
}


//Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount.



// Encryption of a message with a substitution cipher given a message text and alphabet substitution. 



//Decryption of a message encrypted with a substitution cipher given cipher text and substitutions.



//Decryption of a message encrypted with a rotation cipher given cipher text only. 



//Decryption of a message encrypted with a substituition cipher given cipher text only. 



