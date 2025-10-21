// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}
void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);

     for (i = 0; i < length - 1; i++){
mi=i;
for(j = i + 1; j < length; j++){
if (data[j] < data[mi]) {



  mi = j;
}
if (mi != i){
  swap(&data[i], &data[mi]);
}


}


     }
     
	
} 



void insertion(int a[],int n){
int i, j, key;
for (i = 1; i < n; i++){
key = a[i];
j = i - 1;
while (j >= 0 && a[j] > key){

  a[j + 1] = a[j];
            j = j - 1;
}
a[j + 1] = key;
display(a, n);
}

}



void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){

 
  display(a,n);
sorted = 1;
for (i = 0; i < n - j; i++){
if (a[i] > a[i + 1]) {
swap(&a[i], &a[i + 1]);
sorted = 0;




}





}
if (sorted){
  break;
}
 }
  
}




