#include<bits/stdc++.h>
#include <pthread.h>

int g = 0;
 

void *myThreadFun(void *v)
{
int myid=*((int*)&v);//Here it takes the address of v, converts the address to a pointer of the datatype you want, then follows the pointer.
 

    static int s = 0;
 
   ++s; ++g;
 

    printf("Thread ID: %d, Static: %d, Global: %d\n", myid, ++s, ++g);
}
 
int main()
{
    int i;
    pthread_t tid;
 
    for (i = 0; i < 3; i++)
        pthread_create(&tid, NULL, myThreadFun, (void *)i);
    
    pthread_exit(NULL);
    return 0; 
}
