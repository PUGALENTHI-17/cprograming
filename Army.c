#include<stdio.h>


void print_array();
void set_array(int );
void set_row_to(int row );
void set_col_to(int col);
int count();
int arr[8][8];

int main(){

int copters,x,y;
set_array(1);
printf("Enter number of copter:");
scanf("%d",&copters);
for (int i=0;i<copters;i++){
  printf("Enter position to land copter\n");
  printf("X:");
  scanf("%d",&x);
  printf("Y:");
  scanf("%d",&y);
  if (x<=8 && y<=8 && x>0 && y>0){
    set_row_to(x-1);
    set_col_to(y-1);
    print_array();
  }
  else {
    printf("Worng corrdinate,Enter the correct coordianate again \n");
    printf("X:");
    scanf("%d",&x);
    printf("Y:");
    scanf("%d",&y);  
    set_row_to(x-1);
    set_col_to(y-1);
    print_array();

  }
    
}
printf("Number of terrosit arrested = %d\n",count());
}

void set_array(int val){
  for (int i=0;i<8;i++){
    for (int j=0;j<8;j++){
      arr[i][j]=val;
    }
  }
}

void print_array(){
  for (int i=0;i<8;i++){
    for (int j=0;j<8;j++){
      printf("| %d |",arr[i][j]);
      

    }
    printf("\n________________________________________\n");
  }
}
void set_row_to(int row ){
  for (int i=0;i<8;i++){
      arr[row][i]=0;
  }
}

void set_col_to(int col){
  for (int i=0;i<8;i++){
      arr[i][col]=0;
  }
}

int count(){
  int count=0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if (arr[i][j]==0){
        count =count + 1;

      }
    }
  }
  return count;
}

