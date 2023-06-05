# C++ programming  <img style="width: 2.7rem; height: 3rem; float:right; clip-path: polygon(50% 0, 100% 25%, 100% 75%, 50% 100%, 0 75%, 0 25%);" alt="C++" src="https://github.com/jemma-mg/cpp-pgms/assets/83303483/b0f0f6e6-7522-4c71-9c6d-d8a619b90c18" />

### Data types
![image](https://github.com/jemma-mg/cpp-pgms/assets/83303483/458a424d-f481-43b9-8c3b-26973320f009)

**Note:** "auto" keyword can be used if the value is assigned with declaration of variable. 
<p>
examples:<br> auto number = 45; //assigns number to be int <br>
    auto greeting = "hello world"; //assigns greeting to be string <br>
    auto letter = 'A'; //assigns letter to be char  <br>
</p>

---

### Arithmetic Operators
![image](https://github.com/jemma-mg/cpp-pgms/assets/83303483/bf811078-857b-4268-8d3e-85060efb76a8)

---

### Logical Operators
![image](https://github.com/jemma-mg/cpp-pgms/assets/83303483/a9892970-ea37-4b99-8065-e8b6c6ff2838)

---

### Naming Conventions
![image](https://github.com/jemma-mg/cpp-pgms/assets/83303483/d6093718-58bc-4adc-9434-137af4f4f7ab)

- Pascal case: PascalCase
- Camel case: camelCase 
- Snake case: snake_case

### Loops

1. do-while loop :  the condition is checked after the code, meaning the code in the do is executed at least once, even if the condition is false.Also, note the semicolon after the while condition. <br>eg:

        int num = 0;
        do {
          cout << num << endl;
           num+=2;
         } while(num <= 10);

2. for each loop (similar to in in python) -The loop creates a variable, which is automatically assigned to each value of the array during the loop. x in our example.

         double prices[] = {5.99, 3.2, 9.99, 29.99};
         
         for(double x: prices) { 
           cout << x << endl; 
         } 

auto keyword used to automatically set the type of a variable based on the value it is assigned to can be used in a for-each loop:

       for(auto x: prices) { 
           cout << x << endl; 
       }  

---

### Pointers
![image](https://github.com/jemma-mg/cpp-pgms/assets/83303483/5742e744-a276-4afb-a299-ca9eda974e59)

---

### Dynamic Memory Allocation
        int size = 8;

        int *p = new int[size];

        p[0] = 128;
        p[1] = 888;
        p[2] = 9;

        cout << *(p+1);
        
    using size in a for loop, as the condition.
        
        for(int i=0;i<size;i++) {
          p[i] = i;
        }

        for(int i=0;i<size;i++) {
          cout << p[i] << endl;
        }
