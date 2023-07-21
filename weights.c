#include<stdio.h>

int check_weight(int num );

int count=0;

int main(){
    
    int a [5],i;
    printf("ENter the element");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    
    for (int i=0;i<5;i++){
        // printf("\n Weight of %d is %d \n",a[i] ,check_weight(a[i]) );
        check_weight(a[i]);

    }
    printf("total count %d",count);

}

int check_weight(int num ){
    int sum =0;
    
    //perfect square 
        for(int i = 0; i <= num; i++)
    {
        if(i*i == num)
        {
            printf("perfect_square");
            sum +=5;
            
        }
    }


    //X4 /6
        if (num%4==0 && num%6==0)
    {
        printf("multiply_by and div by six");
        sum+=4;
    }

    //even
    if (num % 2 ==0){
    printf("Even");
    sum+=3;
}
printf("\nweight of %d is %d\n",num,sum);
count =count+sum;
// return sum;

}