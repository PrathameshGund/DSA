#include<stdio.h>

int main ()
{

    int buffer,n,incoming,outgoing,bucket_size=0;
    printf("enter the buffer :");
    scanf("%d,%d,%d",&bucket_size,&n,&outgoing);

    while(n--)
    {
        printf("enter the incoming:");
        scanf("%d",&incoming);

        if (incoming<=(bucket_size-buffer))
        {
            buffer+=incoming;
            printf("%d,%d",buffer,bucket_size);
        }
        else
        {
            int dropped_packets=incoming-(bucket_size-buffer   );
            printf("%d",dropped_packets);
            buffer=bucket_size;
        }
        buffer-=outgoing;
            }
return 0;

}

