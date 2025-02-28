#include <iostream>

int searcharray(int array[] , int size , int element);

int main(){

int number[] = {1,2,3,4,5,6,7,8,9,10};
int size = sizeof(number)/sizeof(number[0]);
int index;
int mynum;

std::cout << "Enter element to serch for: "<< '\n';
std::cin >> mynum;

index = searcharray(number,size , mynum);

if(index != -1){
    std::cout << mynum << " Is at index " << index;
}
else{
    std::cout << mynum << " is not in the array";
}

    return 0;
}
int searcharray(int array[] , int size , int element){
for(int i = 0 ; i < size; i++){
    if(array[i] == element){
        return i;
    }
}
return -1;
}