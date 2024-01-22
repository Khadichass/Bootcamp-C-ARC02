#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max_num_of_star(int layer_num)
{
    int max_star = 7;
    int step = 2;

    for(int i = 2; i <= layer_num; i++)
    {
        int layer = i + 4 - 1;
        for(int j = 2; j <= layer; j++)
        {
            max_star += 2;            
        } 
        
        max_star -= step;

        if(i + 1 != 2 && (i + 1) % 2 ==0)
        {
            step += 2;
        }
    }

    return  max_star;
}

void my_christmas_tree(int size)
{
    int space = max_num_of_star(size) / 2;
    int start = 1;
    int line = 4;
    int deduct_star = 4;
    int sub_space = 2;
   
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < line; j++) 
        {
            for(int k = 0; k < space; k++)
            {
                printf(" ");
            }

            for(int s = 0; s < start; s++)
            {
                printf("*");
            }
            printf("\n");
            start += 2;
            space--;  

        }
        start -= deduct_star; 
        space += sub_space;  
        line++;
        if((i + 1) % 2 == 0)
        {
            deduct_star += 2;
            sub_space += 1;
        }
    }

    int tHeight = size;
    int tWidth = size;
    int tr_space = max_num_of_star(size) / 2;
    if ((size % 2) == 0) 
    {
        tr_space += 1;
    }
    tr_space -= size / 2;
    
   

    for (int i = 0; i < tHeight; i++)
    {
        for (int j = 0; j < tr_space; j++)
        {
            // printf("%d", j);
            printf(" ");
            // printf("w");
        }

        for (int k = 0; k < tWidth; k++)
        {
            printf("|");
        }
        

        // if ((i + 1) % 2 == 0)
        // {
        //     // printf("s");
        //     tr_space -= 2; 
        //     // printf("d");
        // }
        printf("\n");
    }
}




int main(int argc, char** argv)
{
    if (argc < 2 || argv[1] < 0)
    {
	    printf("Enter the number that is greater than 0\n");
    }
    
    int size = atoi(argv[1]);
    my_christmas_tree(size);
}
