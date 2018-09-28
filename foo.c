#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHAIN_LEN 10

int main(int argc, char **argv)
{
    int cal_job;                                                  
    char *cal_job_str;                                            
    char cal_jobs[64] = "17 18 19 20";                                            
    int i = 0;                                                    

    cal_job_str = strtok(cal_jobs, " ");                          

    if (cal_job_str == NULL)                                      
        return -1;                                                   

    while ((cal_job_str != NULL) && (i < MAX_CHAIN_LEN))          
    {                                                             
        cal_job = atoi(cal_job_str);                              
        printf("%d %d\n", cal_job, i);
        cal_job_str = strtok(NULL, " ");                          
        i++;                                                      
    }                                                             

    printf("hello world!\n");

    return 0;
}
