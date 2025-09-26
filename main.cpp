#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: car
//  action 1: moves forward
car.moveForward();
//  action 2: stops
car.stop();
//  action 3: flashes lights
car.flashLights();

//  2)
//  Noun: police
//  action 1: makes a ticket
police.makeTicket();

//  action 2: shoots pistol
police.shootPistol();

//  action 3: screams
police.scream();

//  3)
//  Noun: alien
//  action 1: transforms
alien.transform();

//  action 2: shoots laser
alien.shootLaser();

//  action 3: hypnotizes
alien.hypnotize();

//  4)
//  Noun: witch
//  action 1: casts spell
witch.castSpell();

//  action 2: brews potion
witch.brewPotion();

//  action 3: curses
witch.curse();

//  5)
//  Noun: bard
//  action 1: plays music
bard.playMusic();

//  action 2: tells story
bard.tellStory();

//  action 3: casts vicious mockery
bard.viciousMockery();

//  6)
//  Noun: dragon 
//  action 1: breathes fire
dragon.breathesFire();

//  action 2: eats cheese
dragon.eatsCheese();

//  action 3: hoards treasure
dragon.hoardsTreasure();

//  7)
//  Noun: Earth
//  action 1: rotates
earth.rotates();

//  action 2: blows up
earth.blowsUp();

//  action 3: cools down
earth.coolsDown();

//  8)
//  Noun: cat
//  action 1: eats food
cat.eatsFood();

//  action 2: sleeps
cat.sleeps();

//  action 3: purrs
cat.purrs();

//  9)
//  Noun: wizardOfOz
//  action 1: conjures courage
wizardOfOz.conjuresCourage();

//  action 2: creates heart
wizardOfOz.createsHeart();

//  action 3: start hot air balloon
wizardOfOz.startHotAirBalloon();

//  10)
//  Noun: computer
//  action 1: runs code
computer.runsCode();

//  action 2: crashes
computer.crashes();

//  action 3: explodes
computer.explodes();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
