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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 unsigned int
 char
 float
 bool
 double
 void
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int temperature = 20;
    int phaseShift = -90;
    int voltage = 15;

    unsigned int age = 5;
    unsigned int rms = 95;
    unsigned int halfLife = 30;

    char switch1State = '2';
    char modeSelector = '9';
    char midiNote = 'A'; 

    float pot1 = 0;
    float filterPosition = 25.25f;
    float modulationRange = -55.2f;

    bool led1 = false; //led1 output pin at low level
    bool siren = true;
    bool sequencerRunning = false;

    double jeffBezosWealth = 160000000000.0;
    double worldwideAntPopulation = 0.0;
    double pi = 3.14; 
    
    ignoreUnused(number, temperature, phaseShift, voltage, age, rms, halfLife, switch1State,modeSelector, midiNote, pot1, filterPosition, modulationRange, led1, siren, sequencerRunning, jeffBezosWealth, worldwideAntPopulation ,pi); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
[[nodiscard]] float rentalPrice(unsigned int rentalDuration, unsigned int carType = 0, unsigned int insurance = 0)
{
    ignoreUnused(rentalDuration, carType, insurance);  

    return {};
}
/*
 2)
 */
int carReference(int carColor, int carManufacturer = 0, unsigned int carConstructionYear = 2015)
{
    ignoreUnused(carColor, carManufacturer, carConstructionYear);  
    return {};
}

/*
 3)
 */
int jarContentAirExposure(bool jarOpen = false, unsigned int sizeOfjarOpening = 0,int durationOfjarOpening = 0)
{
    ignoreUnused(jarOpen, sizeOfjarOpening, durationOfjarOpening);  
    return {};
}
/*
 4)
 */
int requiredAmountPasta(unsigned int numberOfPeople = 0)
{
    ignoreUnused(numberOfPeople);  
    return {};
}
/*
 5)
 */
bool eatSandwich(int speed, int biteSize = 4)
{
    ignoreUnused(speed, biteSize);  
    return {};
}
/*
 6)
 */
bool trigger(unsigned int midiChannel = 0, unsigned int velocity = 127)
{
    ignoreUnused(midiChannel, velocity);  
    return {};
}
/*
 7)
 */
float lfo1(float depth = 0, float rate = 5, char waveform = 0)
{
    ignoreUnused(depth, rate, waveform);  
    return {};
}
/*
 8)
 */
bool fermenting(bool brettanomyces = false, bool pitchedYeast = true, bool barrel = false, bool bottleConditioned = true)
{
    ignoreUnused(brettanomyces, pitchedYeast, barrel, bottleConditioned);  
    return {};
}
/*
 9)
 */
int time(int position = 0, bool summerTime = true)
{
    ignoreUnused(position, summerTime);  
    return {};
}
/*
 10)
 */
int hangry(int hunger, int anger)
{
    ignoreUnused(hunger, anger);  
    return {};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    rentalPrice(15);
    //2)
    auto code = carReference(5,16543,2018);
    //3)
    auto mold = jarContentAirExposure();
    //4)
    auto howMuchPasta = requiredAmountPasta(2);
    //5)
    auto sandwichEatingDuration = eatSandwich(10,6);
    //6)
    auto noteOn = trigger(0,89);
    //7)
    auto slot1 = lfo1(55, 0.125f, 7);
    //8)
    auto beer = fermenting(1,0,1,1);
    //9)
    auto whatTime = time(1, true);
    //10)
    auto feeling = hangry(5,5);
    
    ignoreUnused(carRented, code, mold, howMuchPasta, sandwichEatingDuration, noteOn, slot1, beer, whatTime, feeling);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
