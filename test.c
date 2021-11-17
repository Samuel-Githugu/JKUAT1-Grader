#include <stdio.h>



//test to see how to loop properly.
int main (void){

int students, units;

for (students=1; students < 11; students++){ 

    printf("This is student number %d.\n", students);

       for (units=1; units<8; units++){
              printf("This is unit %d.\n", units );


              float cat_1, cat_2, assg_1, assg_2, assg_3, exam_score;

//CAT Scores
printf ("What is the first CAT Score?\n");
scanf("%2f", &cat_1);

printf ("What is the second CAT Score?\n");
scanf("%2f", &cat_2);

if ((cat_1 > 20) || (cat_2 > 20)) {
    printf("Invalid CAT Scores.\n");
    return(1);
}

double cat_average;
cat_average = (cat_1 + cat_2)/2;

printf("Average CAT grade is %2.1f\n", cat_average);

       }
    


}




    return (0);
}