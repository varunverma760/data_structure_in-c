# data_structure_in-c







----------------------------------------***YOUTUBE PLAYLIST***-----------------------------




![image](https://i.ytimg.com/vi/DFpWCl_49i0/hqdefault.jpg?sqp=-oaymwEXCNACELwBSFryq4qpAwkIARUAAIhCGAE=&rs=AOn4CLARGmn6fH6YLKrRPGnoX4k5R0xR4w) 

(https://www.youtube.com/playlist?list=PL36UpCxzR0Uoq-a3OjRKsZhfHADVU4GDi "Click to play on Youtube.com")









**Syllabus of unit 1 in data structures**:-



**1. Introduction to programming methodologies** : -





**:- (a)Identifiers and keywords**
  
  
  
  
  
  *Identifiers are  name given to the program elements such as variables, functions and arrays etc. They are formed by using sequence of letters (both uppercase and lowercase),numerals and underscores*.


**Following rules for making identifiers**:-

(i) *Identifers cannot include any special characters or punctuation marks (like #,$,%) except underscoe "_".*




(ii) *Keywords cannot use as identifiers.*


:- **Keywords** 




*1 auto,for,32 types of keywords*



**DATA TYPES**

1. Character data types


2. Float data types


3. Integer data type



**Standard Headerfiles**

1.     string.h :- it is used for string handling functions
2.     stdio.h  :- it is used for standardized input and output functions
3.     alloc.h  :- it is used for memory allocation
4.     stdlib.h  :- it is used for miscellaneous function


**The printf function is used for printing the statement and scanf is used for reading the formatted data from the keyboard **





**Type  | Qualifying input**  


%c      | for single characters 

%d,%i   | for integer values

%e,%E,%f,%g,%G   | for float values

%o  | for octal values



%s  | for sequence of string of characters




%u  | for unsigned values




%x,%X    | for hexadecimal values







-------------------**ARRAYS**-----------------------------------------


*An array is a useful data structure used to store data elements in successib=ve memory locations. More than one lements is stored in a a sequence , so it is called a composite data structure . An array is a linear and homogeneous data structure. An array permits homogeneous data. It means that similar types are stored continguosly in memory and that too under oone variable created*.



![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Array-Declaration-In-C.png)




--------------------------------***Array intialization***------------------------------------- 


The array can be done as under:



int a[5]=0,1,2,3,4

in the above statement, all elements are intialized. It is also possible to intialize individual element by specifying the subscript number in the sqaure bracket.


Array elemnts can be accessed as follows:





num[0]=0

num[1]=1;


num[2]=2;


num[3]=3;



num[4]=4;





***Limitations of array***


1. Array are fixed size


2. Data elements are stored in contingous memory locations which may not be always availabe.


3. Insertions and deletions of elements from there problematic.





**Q1. What is abstract data type?**




***Ans1. Abstract data type (ADT):-***


***Data structures is the implementations for an ADT***.



***It is the mathematical model of the data object that can make up data as well as functions that operate on these objects.***



***-> Two parts of the abstract data type:-***

  
  
  
  ***->(1)  Describe the way of components are related to each other***.
  
  
  
  
  
  
  ***->(2) The operations that can be perfromed on the data type.***
  
  
  ***For example :- graph, trees , array along with their object.*** 
  
  
  
  
  
  ***Steps to implement abstract data type  :- ***
  
  
  **#step 1:-**
  
  
  **Define the abstract data type**
  
 
 
 **#step2: -**
  
  
  **Define the operations to be performed on the data**
  
  
  
  **#step3 :-
  
  
  
  **Fill the  interface with specification**
  
  
  **#step4: -**
  
  
  **Create the implementation**
  
  
  **#step5: -**
  
  
  **putthe abstract data type to test**
  
  
