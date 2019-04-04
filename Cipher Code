#include<stdio.h> 

int main () {
    
    const int max =100; 
    char numbers[max+1]; 
    int index; 
    int j=0; 
    
    for(index=0; index<=max; index++) {
        numbers[index]=1;
    }
    
    for (index=2; index<=max; index++) {
        
        if (numbers[index]==1) {
            
            for (j=2*index; j<=index; j=j+index) {
                numbers[j]=0; 
                
            }
        }
    }
    
    for(index=2; index<=max; index++) {
        
        if(numbers[index]==1) {
            
            printf("%d is Prime\n", index);
        }
    }
    
}