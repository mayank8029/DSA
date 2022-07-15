#include<bits/stdc++.h>

using namespace std ; 

void update(int *poi){


poi=poi+1 ;
    *poi = *poi +1;
    

    // poi = poi +1 iss se kuch fark nahi padta 

      

}

int getSum(int *array, int n) {

    cout << endl << "Size : " << sizeof(array) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += array[i];
    }
    return sum;
}




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
// lets play with intiger array

int num = 5 ; 
// intitialisation of pointer 
int *ptr= &num;

cout<< "value of *ptr is "<<*ptr << endl;
cout<<"value of ptr is "<< ptr << endl ; 
cout<< "value of &num is  "<< &num << endl ; 

cout<< "size of *ptr is "<< sizeof(*ptr)<<endl ; 
cout<< "size of ptr is "<< sizeof(ptr)<<endl ; 



// lets play with char array

char ch = 's';

char *p= &ch ;

cout<< "value of *p is "<< *p << endl;
//all other things that we do in integer we can do the same in character


// ARRAYS AND POINTER 


int arr[10]= {1,2,3,4,5,6,7};

cout<< arr << endl ; 
cout<< &arr[0]<< endl ;

cout << arr + 1 << endl ;
cout<< &arr[1] << endl ; 


int *a = &arr[0];

cout<<*a << endl ;
cout<< *a +10 << endl ;
cout<< *(a +1 )<< endl ;


cout<< 1[arr]<< endl;
cout<< *(1 + arr)<<endl;


// CHARACTER ARRAY 


 char ca[6] = "abcde";
char  *cad = &ca[0];
cout<< cad << endl ; 

// hence character array will work differently compare to intiger array


// POINTER AND FUNCTION 

int fun = 6;

int *poi = &fun ; 

cout<< "before update "<< endl ; 
cout<< "value of poi is "<< poi << " *poi is "<< *poi<< endl ; 


update(poi);
cout<<"after update"<< endl ; 

cout<<"poi is "<< poi<<" *poi is "<< *poi << endl ;


 int array[6] = {1,2,3,4,5,8};

    cout << "Sum is " << getSum(array+3 ,3) << endl ;  




}