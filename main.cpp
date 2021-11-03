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
 double
 float
 bool
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
    int digit = 4;
    int start = 0;
    int end = 1;

    double low = 0.0;
    double high = 1.0;
    double mid = 0.5;

    float left = 0.f;
    float right = 1.0f;
    float center = 0.5f;

    bool iWantToLearnCPP = true;
    bool iAmTheNewStroustrup = false;
    bool theWeatherIsNiceInEngland = false;

    char firstLetter = 'a';
    char lastLetter = 'z';
    char randomLetter = 'j';

    unsigned int width = 1000;
    unsigned int length = 1200;
    unsigned int diameter = 500;

    
    ignoreUnused(digit, start, end, low, high, mid, left, right, center, iWantToLearnCPP, iAmTheNewStroustrup, theWeatherIsNiceInEngland, firstLetter, lastLetter, randomLetter, width, length, diameter); //passing each variable declared to the ignoreUnused() function
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
 void playSound(char key = 'a', int note = 2)
 {
     ignoreUnused(key, note);
 }

/*
 2)
 */
  int calculateTax(int netEarnings, int taxRate, bool exempt)
 {
     ignoreUnused(netEarnings, taxRate, exempt);
     return {};
 }

/*
 3)
 */
int run(int distance = 5, float speed = 10.0f)
{
    ignoreUnused(distance, speed);
    return {};
}
/*
 4)
 */
void speak(char language, bool localDialect)
{
    ignoreUnused(language, localDialect);
}
/*
 5)
 */
  int cook(int howManyIngredients, bool sourcedLocally)
 {
     ignoreUnused(howManyIngredients, sourcedLocally);
     return {};
 }
/*
 6)
 */
void shop(double spendingBudget)
{
    ignoreUnused(spendingBudget);
}
/*
 7)
 */
bool sleep(double hoursSlept = 7.5) 
{
    ignoreUnused(hoursSlept);
    return {};
}
/*
 8)
 */
void learnCPP(double difficultyRating)
{
    ignoreUnused(difficultyRating);
}
/*
 9)
 */
void exercise(int excercises, int reps, double weight)
{
    ignoreUnused(excercises, reps, weight);
}
/*
 10)
 */
char createFunction(int quantity = 10, bool completed = true)
{
    ignoreUnused(quantity, completed);
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
    playSound('g', 3);
    //2)
    auto calculatedTax = calculateTax(50000, 20, false);
    //3)
    auto runTime = run(10, 5.6f);
    //4)
    speak('e', true);
    //5)
    auto dinner  = cook(10, true);
    //6)
    shop(100.50);
    //7)
    auto slept = sleep(6.2);
    //8)
    learnCPP(9.9);
    //9)
    exercise(10, 15, 7.5);
    //10)
    auto functions = createFunction(10, true);
    
    ignoreUnused(carRented, calculatedTax, runTime, dinner, slept, functions);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
