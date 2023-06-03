#include <stdio.h>
struct Student
{
    char Sno[30];
    char name[50];
    float score1;
    float score2;
    float score3;
};
struct Student input();
struct Student maxAverage(struct Student *students,int n);
void getAverage(struct Student *students,int n);
void print(struct Student students);
int main(void) {
    struct Student students[100];
    struct Student maxStudent;
    int n;
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        students[i] = input();
    }
    getAverage(students,n);
    maxStudent = maxAverage(students,n);
    print(maxStudent);
    return 0;
}

void getAverage(struct Student *students,int n){
    float score1Avg,score2Avg,score3Avg;
    float score1Sum=0,score2Sum=0,score3Sum=0;
    for (size_t i = 0; i < n; i++)
    {
        score1Sum +=  students[i].score1;
        score2Sum +=  students[i].score2;
        score3Sum +=  students[i].score3;
    }
    score1Avg = score1Sum/n;
    score2Avg = score2Sum/n;
    score3Avg = score3Sum/n;
    printf("%.0f %.0f %.0f\n",score1Avg,score2Avg,score3Avg);
}

//求平均分最大的那个,然后返回
struct Student maxAverage(struct Student *students,int n){
    float average;
    int max=0;
    int index;
    for (int i = 0; i < n; i++)
    {
        average = (students[i].score1+students[i].score2+students[i].score3)/3;
        if (average>max)
        {   
            max = average;
            index = i;
        }
    }
    return students[index];
}

void print(struct Student student){
    printf("%s %s %.0f %.0f %.0f\n",student.Sno,student.name,student.score1,student.score2,student.score3);
}
struct Student input(){
    struct Student student;
    scanf("%s %s %f %f %f",&student.Sno,&student.name,&student.score1,&student.score2,&student.score3);
    return student;
}

