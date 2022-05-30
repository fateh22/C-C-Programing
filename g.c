#include <stdio.h>
#include <conio.h>
int k=0;
struct workers {​​​​
  int rn;
  char name[30];
  int m1,m2,m3,m4,m5,total;
  int twages;
}​​​​s[30];
int main() {​​​​
  int no, id=100, i, m1, m2, m3, m4, m5;
  printf("Enter No of Worker : ");
  scanf("%d",&no);
  for(i=0; i<no; i++) {​​​​
    s[k].rn = id;
    printf("\n------------------------------------------\n");
    printf("\nWorker's Id Number : %d\n",s[k].rn);
    printf("\n------------------------------------------\n");
    printf("\nEnter the Worker's Name : ");
    fflush(stdin);
    fgets(s[k].name, sizeof(s[k].name), stdin);
    printf("\nEnter Working Hours in the Following 5 dates : \n");
    printf("\nIn 01-03-2000 (Monday) : ");
    scanf("%d",&s[k].m1);
    printf("\nIn 02-03-2000 (Tuesday): ");
    scanf("%d",&s[k].m2);
    printf("\nIn 03-03-2000 (Wednesday): ");
    scanf("%d",&s[k].m3);
    printf("\nIn 04-03-2000 (Thursday): ");
    scanf("%d",&s[k].m4);
    printf("\nIn 05-03-2000 (Friday): ");
    scanf("%d",&s[k].m5);
    if(s[k].m1>=0 && s[k].m1<=4 && s[k].m2>=0 && s[k].m2<=4 && s[k].m3>=0 && s[k].m3<=4 && s[k].m4>=0 && s[k].m4<=4 && s[k].m5>=0 && s[k].m5<=4){​​​​
      s[k].total = s[k].m1+s[k].m2+s[k].m3+s[k].m4+s[k].m5; s[k].twages = s[k].total*100;
    }​​​​ else {​​​​
      printf("\nInvalid Work Hour!!\n\nNote :Make sure that work hours in the range from 0 to 4\n\nThank You!\n");
    }​​​​
    printf("\nThe Total Work Hour is : %d\n",s[k].total);
    getch();
    k++;
    id++;
  }​​​​
  printf("\n***************************************************************\n");
  printf("\n Details of Employees of Iron and Hardware Shop \n");
  printf("\n***************************************************************\n");
  for(i=0; i<no; i++) {​​​​
    printf("\nWorker's ID No : %d",s[i].rn);
    printf("\nName : %s",s[i].name);
    printf("\nWork Hours in 01-03-2020 : %d",s[i].m1);
    printf("\nWork Hours in 02-03-2020 : %d",s[i].m2);
    printf("\nWork Hours in 03-03-2020 : %d",s[i].m3);
    printf("\nWork Hours in 04-03-2020 : %d",s[i].m4);
    printf("\nWork Hours in 05-03-2020 : %d",s[i].m5);
    printf("\nTotal Working Hours : %d",s[i].total);
    printf("\nTotal Wages @Rs.100/Hour : %d\n",s[i].twages);
    printf("\n******************************************\n");
  }​​​​
  getch();
  return 0;
}​​​​
