#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizename = '\0';
    if(cms > 42){
        sizename = 'L';
    }
    else if(cms > 38){
       sizename = 'M'; 
    }
    else{
        sizename = 's';
    }
    return sizename;
}



int testTshirtSize() {
    printf("\nTshirt size test\n");
    assert(size(37) == 'S');               // To test S size valid class
    assert(size(38) == 'S');               // To test the max boundary of the Short size
    assert(size(39) == 'M');               // To test M size Minimum boundary check
    assert(size(40) == 'M');               // To test M size valid class
    assert(size(42) == 'M');               // To test M size maximum boundary check
    assert(size(43) == 'L');               // To test L size Minimum boundary check
    assert(size(45) == 'L');               // To test L size valid class and Minimum boundary check
    printf("All is well (maybe!)\n");
    return 0;
}

