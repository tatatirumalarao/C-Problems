#include <stdio.h>

    struct class
    {
        int number;
        char name[20] ;
        float marks;
    }
    main()
    {
        int x;
        struct class student1 ={118,"tiru",87.20};
        struct class student2 ={117,"tiru",90.40};
        struct class student3;
        student3=student2;
        x=((student3.number== student2.number)) && ((student3.marks==student2.marks)) ? 1:0;
        if(x==1)
        {
            printf("\nstudent2 and student3 are same\n\n");
            printf("%d %s %f\n",student3.number,student3.name,student3.marks);
        }
        else 
        {
            printf("\nstudent2 and student3 are diffeent\n\n");

        }
    }