 #include<stdio.h> 

/* This folder is for Assessment task 1 in ENGG 1003. This folder covers Encryption and Decryption with 
a Rotation Cipher with a key and Decryption of a Rotation Cipher without key. In addition it also covers 
Encryption and Decryption of a Substitution Cipher with a key. */

void RCE(void);//Rotation Cipher Encryption function.
void RCD(void);//Rotation Cipher Decryption function.
void SCE(void);//Substitution Cipher Encryption function.
void SCD(void);//Substitution Cipher Decryption function.
void RDCK(void);//Rotation Cipher Encryption without key function  


int main () {
    
    /*These printf functions create the menu so the program has a user friendly interface. */
    /*The numbers used represent the different options the user can input to get to different options. 
    which connects to a switch case statement that goes to different tasks. */
    
    printf("Please select from the following numbers the option you want to choose\n");
    printf("1 - Encryption with a Rotation Cipher\n2 - Decryption with a Rotation Cipher\n3 - Encryption with a Substitution Cipher\n");
    printf("4 - Decryption with a Substitution Cipher\n5 - Decryption of Encrypted Substitutional Cipher given only Cipher Text and Substitutions\n\n");
    
    int c; //User input for Menu
    
    scanf("%d", &c);//uses the file "input" to take user inputs.
    
    
    
    switch (c) 
    {
        
        case 1: 
        
        RCE(); //Rotation Cipher Encryption Function.
    
        break; //Need a break statment to stop it from continuing to next cases. 
        
        case 2:
        
        RCD();//Rotation Cipher Decryption Function. 
        
        break;
        
        case 3:
        
        SCE();//Substitution Cipher Encryption Function. 
    
        break; 
        
        case 4:
        
        SCD(); //Substitution Cipher Decryption Function. 

        break; 
        
        case 5: 
        
        RDCK(); //Rotation Cipher Decryption without Key function.
        
        break; 
        default:
        printf("Please Type an Appropriate Input");
        break; 
    }   
}




void RCE(void) {
    
    
    char RCA[1024];//User message that is stored in a string, stands for Rotation Cipher Array
    char character; //used to simplify the code blocks.  
    int key, index; //Key - how much each letter is rotated, index scrolls through each element in string.
    
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
}


void RCD(void) {
    
    char RCA[1024];//User message that is stored in a string, stands for Rotation Cipher Array
    char character; //used to simplify the code blocks.  
    int key, index; //Key - how much each letter is rotated, index scrolls through each element in string.
    
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

    
}


void SCE(void) {
    
    char sub1[1024]; /* These declarations are for Encryption SUBSTITUTION CIPHER*/
    char msg1[1024]; 
    int index;
    
    printf("Please type the Substitution key and then message you want Encrypted.\n\n"); 
    printf("Encrypted Message is");
    scanf("%s", sub1);
    scanf("%[^\n]s", msg1);  
    
    int alphabet; 
        
    for (index =0; msg1[index] != '\0'; index++) { //Will scroll through all user input until it reaches NULL sign. 
            
            alphabet = msg1[index]; //Assigning a variable to user input string to simplify code. 
            
            if (alphabet >= 97 && alphabet <=122)
            
                 alphabet = alphabet - 32; //Turning Lowercase letters into uppercase letters before Encryption.
            
            
            if (alphabet >=65 && alphabet <=90) {
            
                 alphabet = alphabet - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
                 alphabet = sub1[alphabet]; //Converts the value of each letter from 0 to 26 into an index on substitution key. 
             }
             
            printf("%c", alphabet); //%c will print the character equivalent of the index value of the substitution key. 
     }

}



void SCD(void) {
    
    char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char sub[1024];  
    char msg[1024]; 
    
    printf("Type in the Substitution Key then Message you want to Decrypt:\n");
    scanf("%s", sub); 
    scanf("%[^/n]s", msg);
    printf("Message Decrypted is: ");
    
    int i, index; 
    
    for (index = 0; msg[index] != '\0'; index ++) { //Will go through every letter provided by the user's input until the NULL character is reached in string. 
        
        if (msg[index] >= 97 && msg[index] <=122)
            
                 msg[index] = msg[index] - 32; //Turning Lowercase letters into uppercase letters before Decryption.
                 
        if (!(msg[index]>=65 && msg[index]))
        
        printf("%c", msg[index]); //Prints grammar immediately as it is not required to encrypt grammar. 
                 
        
        for (i=0; i<26; i++) { //We need a second variable to determine index needed to match input message. 
            
            if (msg[index]==sub[i])//This looks through substitution key to find the index that is the same as the input. 
            
            printf("%c", abc[i]);//once the index is found, print the same index from the array that contains the alphabet. 
            
        }
    
    }
    
}



void RDCK(void) {
    
    char RCA[1024];//User message that is stored in a string, stands for Rotation Cipher Array
    char character; //used to simplify the code blocks.  
    int key, index; //Key - how much each letter is rotated, index scrolls through each element in string.
    
    printf("Please type in the Message you want Decrypted (do not go to a new line)\n");
        
        scanf("%[^\n]s", RCA); //This will store the user input inside the elements of the array in the form of a string and include whitespace. 
        
        for (key =1; key <=25; key++) { //This will perform brute force attack by rotating through all of the keys.
            
            for(index=0; RCA[index] != '\0'; index++) { //RCA - Rotation Cipher Array 
        
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
    
    printf(" Key %d \n", key); 
    }
    
}






