 #include<stdio.h> 

int main () {
    
    
    
    //These printf functions create the menu so the program has a user friendly interface. 
    //The numbers used represent the different options the user can input to get to different options. 
    
    printf("Please select from the following numbers the option you want to choose\n");
    printf("1 - Encryption with a Rotation Cipher\n2 - Decryption with a Rotation Cipher\n3 - Encryption with a Substitution Cipher\n");
    printf("4 - Decryption with a Substitiution Cipher\n5 - Decryption of Encrypted Substitutional Cipher given only Cipher Text and Substitutions\n");
    printf("6 - Decryption of a message encrypted with a substituition cipher given cipher text only\n\n");
    
    int c; //User input for Menu
    char array[50];//User message that is stored in a string
    char character; //used to simplify the code blocks. 
    int key, index; //Key - how much each letter is rotated and index scrolls through each element in string. 
    
    char sub[50]; /* THIS IS FOR SUBSTITUTION CIPHER*/
    char abc[50]; 
    
    
    scanf("%d", &c);//uses the file "input" to take user inputs. 
    
    
    
    switch (c) 
    {
        
        case 1: 
        printf("Please Type in your Key and then Message you want Encrypted. (DO NOT GO TO A NEW LINE)\n");
        printf("The Encrypted Message is: ");
        scanf("%d", &key);
        scanf("%[^\n]s", array); //This will store the user input inside a string and does not stop at whitespace. (Name of array is pointer to array)  
 
    
    for(index=0; array[index] != '\0'; index++) 
    { 
        
        character = array[index]; //For every element in the stored string, we assign it to character. 
        
        if (character >= 97 && character <=122)
        {
            
        character = character - 32; 
        
        }
        
        if (!(character >= 65 && character <=90)) 
        {
            
           printf("%c", character);//We do not need to encrypt hence we print it immediately. 
           
        }
        
        if (character >=65 && character <=90) 
        {
            
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
        scanf("%[^\n]s", array); //This will store the user input inside the elements of the array in the form of a string and include whitespace. 
    
    for(index=0; array[index] != '\0'; index++) 
    { 
        
        character = array[index]; //For every element in the stored string, we assign it to character. 
        
        if (character >= 97 && character <=122)
        {
            
        character = character - 32; 
        
        }
        
       if (!(character >= 65 && character <=90)) 
        {
            
           printf("%c", character);//We do not need to encrypt hence we print it immediately. 
           
        }
        
        if (character >=65 && character <=90) 
        {
            
        character = character - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
        character = (character - key)%26; //Rotates the alphabet so the word can be encrypted.
        if (character <0) {
            character = character + 26; 
        }
        character = character + 65; //converts back into ASCII characters so it can be printed to screen. 
        printf("%c", character);//Prints the letter version of the ASCII numbers.
        
        }
    }
        
        break;
        
        case 3:
        
       
        printf("Please type the Substitution key and then message you want Encrypted.\n"); 
        printf("Encrypted Message is\n");
        scanf("%s", sub);
        scanf("%[^\n]s", abc); 
        
        
        int i;
        int alphabet; 
        
        for (index =0; abc[index] != '\0'; index++) {
            
            alphabet = abc[index]; 
            
            if (alphabet >= 97 && alphabet <=122)
            
            alphabet = alphabet - 32; 
            
            
            if (alphabet >=65 && alphabet <=90) {
            
                 alphabet = alphabet - 65; 
                 i = alphabet;
                 alphabet = sub[i]; 
             }
             printf("%c", alphabet); //PROPER SUBSTITIUTION FOR HI IS "IO"
         }
    
        break; 
        case 4:
        
        printf("Please type the Substitution key and then message you want Decrypted.\n"); 
        printf("Encrypted Message is\n");
        scanf("%s", sub);
        scanf("%[^\n]s", abc); 
        
        
        int i;
        int alphabet; 
        
        for (index =0; abc[index] != '\0'; index++) {
            
            alphabet = abc[index]; 
            
            if (alphabet >= 97 && alphabet <=122)
            
            alphabet = alphabet - 32; 
            
            
            if (alphabet >=65 && alphabet <=90) {
            
                 alphabet = alphabet - 65; 
                 i = alphabet;
                 alphabet = sub[i]; 
             }
             printf("%c", alphabet); //PROPER SUBSTITIUTION FOR HI IS "IO"
         }
    
        
        break; 
        
        case 5: 
        
        /*printf("Please type in your Key and then Message you want Decrypted (do not go to a new line)\n");
        
        scanf("%[^\n]s", array); //This will store the user input inside the elements of the array in the form of a string and include whitespace. 
        
        for (key ==0; key <=26; key++) 
        {
        
    for(index=0; array[index] != '\0'; index++) 
    { 
        
        character = array[index]; //For every element in the stored string, we assign it to character. 
        
        if (character >= 97 && character <=122)
        {
            
        character = character - 32; 
        
        }
        
       if (!(character >= 65 && character <=90)) 
        {
            
           printf("%c", character);//We do not need to encrypt hence we print it immediately. 
           
        }
        
        if (character >=65 && character <=90) 
        {
            
        character = character - 65; //Turns the letters from their ASCII values into A=0 ... Z=26 so we can put the key in. 
        character = (character - key)%26; //Rotates the alphabet so the word can be encrypted.
        if (character <0) {
            character = character + 26; 
        }
        character = character + 65; //converts back into ASCII characters so it can be printed to screen. 
        printf("%c", character);//Prints the letter version of the ASCII numbers.
        
        }
        
    }
    
    printf(" Key %d \n", key); 
    }

        
        break; 
        */
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



