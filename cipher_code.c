 #include<stdio.h> 

/* This folder is for Assessment task 1 in ENGG 1003. This folder covers Encryption and Decryption with 
a Rotation Cipher with a key and Decryption of a Rotation Cipher without key. In addition it also covers 
Encryption and Decryption of a Substitution Cipher with a key. */



int main () {
    
    /*These printf functions create the menu so the program has a user friendly interface. */
    /*The numbers used represent the different options the user can input to get to different options. 
    which connects to a switch case statement that goes to different tasks. */
    
    printf("Please select from the following numbers the option you want to choose\n");
    printf("1 - Encryption with a Rotation Cipher\n2 - Decryption with a Rotation Cipher\n3 - Encryption with a Substitution Cipher\n");
    printf("4 - Decryption with a Substitiution Cipher\n5 - Decryption of Encrypted Substitutional Cipher given only Cipher Text and Substitutions\n\n");
    
    int c; //User input for Menu
    char RCA[50];//User message that is stored in a string, stands for Rotation Cipher Array
    char character; //used to simplify the code blocks.  
    int key, index; //Key - how much each letter is rotated, index scrolls through each element in string. 
    
    char sub[50]; /* These declarations are for SUBSTITUTION CIPHER*/
    char abc[50]; 
    
    
    scanf("%d", &c);//uses the file "input" to take user inputs.
    
    
    
    switch (c) 
    {
        
        case 1: 
        
        printf("Please Type in your Key and then Message you want Encrypted. (DO NOT GO TO A NEW LINE)\n\n");
        printf("The Encrypted Message is: ");
        scanf("%d", &key);
        scanf("%[^\n]s", RCA); /*This will store the user input inside a string and does not stop at whitespace. 
                                (Name of array is pointer to array)*/
        
        for(index=0; RCA[index] != '\0'; index++) {
            
            character = RCA[index]; //For every element in the stored string, we assign it to character. 
            
            if (character >= 97 && character <=122) 
            
                 character = character - 32; //turning lowercase letters into uppercase letters before Encryption
        
    
            if (!(character >= 65 && character <=90)) 
        
                 printf("%c", character);//We do not need to encrypt hence we print it immediately. 
           
        
            if (character >=65 && character <=90) {
            
                 character = character - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
                 character = (character + key)%26; //Rotates the alphabet so the word can be encrypted. 
                 character = character + 65; //converts back into ASCII characters so it can be printed to screen. 
                 printf("%c", character);//Prints the letter version of the ASCII numbers.
                 
                 }
            }
    
        break; //Need a break statment to stop it from continuing to next cases. 
        
        
        case 2:
        
        printf("Please type in your Key and then Message you want Decrypted (do not go to a new line)\n");
        printf("The Decrypted message is: ");
        scanf("%d", &key); 
        scanf("%[^\n]s", RCA); //This will store the user input inside the elements of the array in the form of a string and include whitespace. 
        
        for(index=0; RCA[index] != '\0'; index++) {
            
            character = RCA[index]; //For every element in the stored string, we assign it to character.
            
            if (character >= 97 && character <=122) 
            
            
                 character = character - 32; //turning lowercase letters into uppercase letters before Encryption
            
        
            if (!(character >= 65 && character <=90)) 
            
            
                 printf("%c", character);//We do not need to encrypt grammar hence we print it immediately. 
           
           
            if (character >=65 && character <=90) {
                
                character = character - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
                character = (character - key)%26; //Rotates the alphabet so the word can be encrypted.
        
                if (character <0) 
                
                character = character + 26; 
                
                character = character + 65; //converts back into ASCII characters so it can be printed to screen. 
                printf("%c", character);//Prints the letter version of the ASCII numbers.
                
                }
            }
        
        break;
        
        case 3:
        
       
        printf("Please type the Substitution key and then message you want Encrypted.\n\n"); 
        printf("Encrypted Message is\n\n");
        scanf("%s", sub);
        scanf("%[^\n]s", abc); 
    
        int alphabet; 
        
        for (index =0; abc[index] != '\0'; index++) { //Will scroll through all user input until it reaches NULL sign. 
            
            alphabet = abc[index]; //Assigning a variable to user input string to simplify code. 
            
            if (alphabet >= 97 && alphabet <=122)
            
                 alphabet = alphabet - 32; //Turning Lowercase letters into uppercase letters before Encryption.
            
            
            if (alphabet >=65 && alphabet <=90) {
            
                 alphabet = alphabet - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
                 alphabet = sub[alphabet]; //Converts the value of each letter from 0 to 26 into an index on substitution key. 
             }
             
            printf("%c", alphabet); //%c will print the character equivalent of the index value of the substitution key. 
         }
    
        break; 
        
        case 4:
        
        printf("Please type the Substitution key and then message you want Decrypted.\n\n"); 
        printf("Decrypted Message is\n\n");
        scanf("%s", abc);
        scanf("%[^\n]s", sub); 
        
        
        
        for (index =0; abc[index] != '\0'; index++) { //abc[index] just goes through the user input letter by letter
            
            alphabet = abc[index]; 
            
            if (alphabet >= 97 && alphabet <=122)
            
            alphabet = alphabet - 32; 
            
            
            if (alphabet >=65 && alphabet <=90) {
            
                 alphabet = alphabet - 65; 
                 sub[alphabet] = abc[index];
                 
             }
             
             printf("%c", sub[alphabet]); 
         }
    
        
        break; 
        
        case 5: 
        
        printf("Please type in the Message you want Decrypted (do not go to a new line)\n");
        
        scanf("%[^\n]s", RCA); //This will store the user input inside the elements of the array in the form of a string and include whitespace. 
        
        for (key ==0; key <=26; key++) {
            
            for(index=0; RCA[index] != '\0'; index++) { 
        
                 character = RCA[index]; //For every element in the stored string, we assign it to character. 
        
                 if (character >= 97 && character <=122)
    
    
                      character = character - 32; 
                
        
                 if (!(character >= 65 && character <=90)) 
      
            
                      printf("%c", character);//We do not need to encrypt hence we print it immediately. 
          
        
                 if (character >=65 && character <=90) {
            
                      character = character - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
                      character = (character - key)%26; //Rotates the alphabet so the word can be encrypted.
                      
                      if (character <0) 
                     
                           character = character + 26; 
        
                      
                      character = character + 65; //converts back into ASCII characters so it can be printed to screen.
        
        
        
        printf("%c", character);//Prints the letter version of the ASCII numbers.
        
        }
        
    }
    
    //printf(" Key %d \n", key); 
    }

        
        break; 
        default:
        printf("Please Type an Appropriate Input");
        break; 
    }   
}
