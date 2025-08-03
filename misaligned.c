#include <stdio.h>
#include <assert.h>

struct 
{
   int Colour_Index[25];
   char MajorColour[25][7];
   char MinorColour[25][7];
}Store_Colour_Comb;


#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White ", "Red   ", "Black ", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue  ", "Orange", "Green ", "Brown ", "Slate"};
    int i = 0, j = 0,k = 0, p = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            
            k = (i * 5 + j);
            if((k)<9)
            {
                printf("%d  | %s | %s\n", (k+1), majorColor[i], minorColor[j]);
            }
            else
            {
                printf("%d | %s | %s\n", ((i * 5 + j)+1), majorColor[i], minorColor[j]);
            } 
            Store_Colour_Comb.Colour_Index[k]= (k+1);
     //       printf("%d is colour index \n",Store_Colour_Comb.Colour_Index[k]);
            
            
            // Copy majorColor[i] to structure manually
       //     for ( p = 0; p < 7; p++) {
      //          Store_Colour_Comb.MajorColour[k][p] = majorColor[i][p];
      //      }

            // Copy minorColor[j] to structure manually
       //     for (p = 0; p < 7; p++) {
      //          Store_Colour_Comb.MinorColour[k][p] = minorColor[j][p];
      //      }
            
        }
    }
    return i * j;
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}



