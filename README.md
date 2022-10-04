# Uni-Recorder
## University record management system

This is a University Record Management System developed entirely in C++.
The aim is to keep a record of the students, teachers, and staff of a university in an excel sheet. There are 4 main operations you can perform in this project which we will discuss later.

### Introductory Screen

![image](https://user-images.githubusercontent.com/96477152/193747441-e3529edd-8a34-4b58-8b67-54807097a309.png)

Upon running the main.cpp file, you will be introduced with the Project Title and the developers. Press ```ENTER``` to continue.

### Welcome Screen

![image](https://user-images.githubusercontent.com/96477152/193747285-bbcad955-192a-4702-b8ca-d7d3e21988d5.png)

After pressing ```ENTER``` you will be welcomed the the above screen with a list of the main menu.

1. Students' Info
2. Teachers' Info
3. Staff Info
4. About The Developers

Press the corresponding Operation number to enter that menu.

For example, if you press **1**, you will enter the **Student's Info** menu.

### Student's Info

![image](https://user-images.githubusercontent.com/96477152/193748019-f0b5d9a3-9fab-449a-881b-99e6d778edee.png)

As you can see, there are two sub-menus here.

1. Operations
2. Find Student Info

Again, you need to press the correct Operation number to enter the menus.
Let's press **1** and see what **Operations** we can perform on the students.

### Operations

![image](https://user-images.githubusercontent.com/96477152/193748334-78283fb1-bfb8-4bb4-bc57-b311ac69d210.png)

There are 3 operations you can perform.

1. Add Student Info
2. Delete Student Info
3. Modify Student Info

Press the corresponding number to perform that operation.

#### Adding Students
The **Add Student Info** Operation adds a new student info to the Excel Sheet. If there is already an excel sheet, the program appends the new student info.
Each student has a Name, Department, and Roll.

#### Deleting Student Info
To delete a student info, all you have to do is enter the SpreadSheet number of the student from the Excel Sheet.

#### Modifying Student Info
This operation modifies an existing students info. This is useful for correcting mistakes when entering student info.

### Find Student Info
With this function, you can search by a student's name and find the full record of the student.

### Teacher and Staff Info
The Teacher and Staff Info works in the same way. The only difference is that, instead of Roll, now you input Position

![image](https://user-images.githubusercontent.com/96477152/193749696-282005aa-46bc-40b2-94f7-0ef1fac1e82f.png)
![image](https://user-images.githubusercontent.com/96477152/193749717-8d2c418f-3ccb-45f2-ab6f-f18a680c28cc.png)

We have implemented a Clear Screen functionality each time you enter a new operation.
If you're running a **Windows** machine, you can use the source code directly to see the effect. For **Linux** users, replace ```system("cls")``` with ```system("clear")``` to have the same effect.

**Note:** You will need to comment the ```windows.h``` and ```conio.h``` header files and the functions of these header files to run it properly on a **Linux** machine.

### Credits
- [FarhanPavel](https://github.com/FarhanPavel/)
- [rustybladez](https://github.com/rustybladez/)

![image](https://user-images.githubusercontent.com/96477152/193750636-71a4d209-a5f1-40f8-8059-c887e7c69838.png)



