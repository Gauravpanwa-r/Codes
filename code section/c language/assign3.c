#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date {
  int d, m, y;
};

struct employee {
  int empcode[6];
  char empname[20];
  struct date join_date;
  float salary;
};

int compare_employees(const void* a, const void* b) {
  struct employee e1 = *(struct employee*) a;
  struct employee e2 = *(struct employee*) b;

  if (e1.join_date.y != e2.join_date.y) {
    return e1.join_date.y - e2.join_date.y;
  } else if (e1.join_date.m != e2.join_date.m) {
    return e1.join_date.m - e2.join_date.m;
  } else {
    return e1.join_date.d - e2.join_date.d;
  }
}

int main() {
  struct employee employees[100];
  int n, i;

  // Read the records from the file
  FILE* fp = fopen("records.txt", "r");
  if (!fp) {
    printf("Error: unable to open file\n");
    return 1;
  }
  for (i = 0; i < 100; i++) {
    fscanf(fp, "%d%s%d%d%f", employees[i].empcode, employees[i].empname,
           &employees[i].join_date.d, &employees[i].join_date.m,
           &employees[i].join_date.y, &employees[i].salary);
  }
  fclose(fp);

  // Sort the records
  qsort(employees, 100, sizeof(struct employee), compare_employees);

  // Write the sorted records to the target file
  fp = fopen("target.txt", "w");
  if (!fp) {
    printf("Error: unable to open file\n");
    return 1;
  }
  for (i = 0; i < 100; i++) {
    fprintf(fp, "%d %s %d %d %f\n", employees[i].empcode, employees[i].empname,
            employees[i].join_date.d, employees[i].join_date.m,
            employees[i].join_date.y, employees[i].salary);
  }
  fclose(fp);

  return 0;
}
