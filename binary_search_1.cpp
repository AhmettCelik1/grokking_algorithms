#include <iostream>


void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void selection_sort(int array[],int size)
{
    int minimum_index=0;
    
    for(int i =0;i<size;i++)
    {
        minimum_index=i;   
        for(int j=i;j<size;j++)
        {
         
         if(array[j]<array[minimum_index])
         {
             minimum_index=j;
         }
            
        }
        
        swap(array[minimum_index],array[i]);
    }
    
    
    
}

int binary_search(int array[],int size,int item)
{
int low=0;
int high=size-1;

while (low <=high)
{
    int mid=low+high;
    int guess=array[mid];
    if (guess==item)
        return mid;
    if (guess>item)
        high=mid-1;
    else 
        low=mid+1;



}

return -1;


}

void print_array(int array [],int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<array[i]<<" ";
    }
    
}



int main() 
{
std::cout<<std::endl;
int array[]{11,2,21,24,534,23,34,32,32,54,23,235,1};
int aranan_değer=54;
std::cout<<"aranan değer: "<<aranan_değer<<std::endl;
int size= sizeof(array)/sizeof(int);
std::cout<<"Before Selection Sort"<<std::endl;
print_array(array,size);
std::cout<<std::endl;
std::cout<<"After Selection Sort"<<std::endl;
selection_sort(array,size);
print_array(array,size);
std::cout<<std::endl;
std::cout<<"After Binary Search "<<std::endl;
int aranan_index=binary_search(array,size ,aranan_değer);
std::cout<<"aranan_index: "<<aranan_index<<std::endl;
std::cout<<"aranan_index_value :"<<array[aranan_index]<<std::endl;



    return 0;
}
