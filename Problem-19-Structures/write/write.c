// Program writes into file.
//  write.c
//  cProgramming
//
//  Created by Sahil M on 2020-09-03.
//  Copyright © 2020 Sahil. All rights reserved.

#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is test content ...");
    fputs("This is other test content ....", fp);
    fclose(fp);    
    return 0;
}
