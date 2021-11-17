#include <stdio.h>
#include <math.h>

int 
main(void) {

int students, units;

//student loop
  for (students=1; students < 11; students++){ 

    printf("\nThis is student number %d.\n", students);

//units loop
       for (units=1; units<8; units++){
              printf("\nThis is unit %d.\n", units );


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

//Assignment Scores
printf ("What is the first Assignment Score?\n");
scanf("%2f", &assg_1);

printf ("What is the second Assignment Score?\n");
scanf("%2f", &assg_2);

printf ("What is the third Assignment Score?\n");
scanf("%2f", &assg_3);

if ((assg_1 > 10) || (assg_2 > 10) || (assg_3 > 10)) {
    printf("Invalid Assignment Scores.\n");
    return(1);
}

double assg_average;
assg_average = (assg_1 + assg_2 + assg_3)/3;

printf("Average Assignment grade is %2.1f.\n", assg_average);

//Main Exam
printf("What is the exam score?\n");
scanf("%2f", &exam_score);
printf("Main Exam score is %3.2f\n", exam_score);

if (exam_score > 70) {
    printf("Invalid Exam Scores.\n");
    return(1);
}

//Final Grade
double final_grade;
final_grade = cat_average + assg_average + exam_score; 

printf("FINAL MARKS: %3.2f\n", final_grade);

//Grading and Remarks
if (final_grade >= 70) {
    printf("GRADE: A, Excellent!\n");
}

else if (final_grade >= 60 && final_grade <=69) {
    printf("GRADE: B, Very Good!\n");
}

else if (final_grade >= 50 && final_grade <=59) {
    printf("GRADE: C, Average.\n");
}

else if (final_grade >= 40 && final_grade <=49) {
    printf("GRADE: D, Below Average.\n");
}

else {
    printf("Fail.\n");
        }
    //closing units loop
     }
 //closing students loop
  }
//end program
return (0);
}