/*
   Example file showing how to write a program that reads
   input from `input.txt` in the current directory
   and writes output to `output.txt` in the current directory
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* If you wish you can include any more files here.
   (from standard C libraries only)
   For example, do not include <conio.h>
*/

int main() {
  FILE *fpin, *fpout;
  char buf[1024];
  int buflen = 0;
  int num_lines = 0;
  int numbers[5];
  int i=0;
  /* This part just opens the input and output files */
  if ((fpin = fopen("input.txt", "r")) == NULL) {
    fprintf(stderr, "Error opening input.txt");
    exit(-1);
  }

  if ((fpout = fopen("output.txt", "w+")) == NULL) {
    fprintf(stderr, "Error opening output.txt");
    exit(-1);
  }

  /* Here we can read in the input file */
  /* In this example, we're reading all the lines of file
     `input.txt` and then ignoring them.
     You should modify this part of the
     program to read and process the input as desired */
  while(fgets(buf, sizeof(buf), fpin) != NULL) {
    /* Line read from input is in `buf` */
    buflen = strlen(buf);
    if(buflen == 0 || (buflen == 1 && buf[0] == '\n'))
      continue;                 /* Ignore blank lines */
    num_lines++;
    int temp = atoi(buf);
    // fscanf(fpin,"%d",&numbers[i]);
    numbers[i]=temp;
    i++;
  }
//   int i=0;
//   while(num_lines!=0){
//
//   fscanf(fpin,"%d",&numbers[i]);
//   printf("%d ",numbers[i]);
//   i++;
//   num_lines--;
//
// }

  fclose(fpin);
  /* In this example, we're writing `num_lines` to
     the file `output.txt`.
     You should modify this part of the
     program to write the desired output */

     for (i = 0; i< 5; i++){
       printf("%d\n", numbers[i]);

}

for (int i = 0; i < 5; i++) {
  for (int j = i+1; j < 5; j++) {
     if(numbers[i] > numbers[j]) {
        int temp = numbers[i];
         numbers[i] = numbers[j];
         numbers[j] = temp;
     }
  }
}
printf("after sort");
for(int i=0;i<5;i++){
printf("%d ",numbers[i]);
}



fpout = fopen("output.txt","w");
fprintf(fpout, "%d\n", numbers[0]);
fprintf(fpout, "%d\n", numbers[1]);
fprintf(fpout, "%d\n", numbers[2]);
fprintf(fpout, "%d\n", numbers[3]);
fprintf(fpout, "%d\n", numbers[4]);

// fclose(fpout);



  // fprintf(fpout, "%d\n", num_lines);
  fclose(fpout);
  return 0;
}
