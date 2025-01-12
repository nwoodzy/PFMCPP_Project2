#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 bool
 float
 double
 char
 unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int cupcakes = 1;
 

    int counter = -72;

    int frogs = 11;

    bool isSmall = true;
    
    bool isOn = true;

    bool hasPassed = false;

    float seconds = 2.234f;

    float height = 7.4873f;

    float width = 72.47444f;

    char firstLetter = 'a';

    char display = '1';

    char lastLetter = 'x';

    unsigned int space = 8;

    unsigned int bits = 16;

    unsigned int location = 164;

    double area = 4.1234567893;

    double diameter = 14.1874763883;

    double decibels = 8.468729845784;

    ignoreUnused(number, cupcakes, counter, frogs, isSmall, isOn, hasPassed, seconds, height, width, firstLetter, display, lastLetter, space, bits, location, area, diameter, decibels); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool isItDaytime(bool light = true, int time = 0)
{ 
    ignoreUnused(light, time);
    return {};
}

/*
 2)
 */
int hoursToGo(int time = 0, int timeOff = 12)
{
    ignoreUnused(time, timeOff);
    return {};
}

/*
 3)
 */
int letterPosition(char letter, int position = 0)
{
    ignoreUnused(letter, position);
    return {};
}

/*
 4)
 */
float calculateArea(float height, float width)
{
    ignoreUnused(height, width);
    return {};
}

/*
 5)
 */
void counter(int tick = 0)
{
    ignoreUnused(tick);
}

/*
 6)
 */
int countingDown(int rotations = 100, int interval = 2)
{
    ignoreUnused(rotations, interval);
    return {};
}
/*
 7)
 */
bool turnOnTimer(int passes = 0)
{
    ignoreUnused(passes);
    return {};
}

/*
 8)
 */
float bouncesPerSecond (int delayInSeconds, float speed = 0.0f)
{
    ignoreUnused(delayInSeconds, speed);
    return {};
}

/*
 9)
 */
bool shouldIStop(bool amITired, int howImportant = 0)
{
    ignoreUnused(amITired, howImportant);
    return {};
}

/*
 10)
 */
int timeUntilLaunch(int time, int counter = 0, int tick = -1)
{
    ignoreUnused(time, counter, tick);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto timeOfDay = isItDaytime(true, 10);
    
    //2)
    auto hours = hoursToGo(10, 0);

    //3)
    auto firstLetter = letterPosition('d', 0);

    //4)
    auto area = calculateArea(3.52726f, 3.290885f);

    //5)
    counter(0);

    //6)
    auto count = countingDown(200, 22);

    //7)
    auto onOrOff = turnOnTimer(10);

    //8)
    auto speed = bouncesPerSecond (10, 0.243f);

    //9)
    auto didIStop = shouldIStop(true, 10);

    //10)
    auto seconds = timeUntilLaunch(12, 100, -100);
    
    ignoreUnused(carRented, timeOfDay, hours, firstLetter, area, count, onOrOff, speed, didIStop, seconds);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
