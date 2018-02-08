//
//  main.cpp
//  CS372Spring2018HW1
//
//  Created by Chris Hartman on 1/31/18.
//  Copyright © 2018 Chris Hartman. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
#include <unistd.h>
#include <string>

int main() {
    cout << "Hello, World!\n";
    cout << "Professor Hartman doesn't need a homework grade.\n";

    cout << "Hello! I'm Rachel Crosley and I would love 20/20 on this assignment" << endl;
	unsigned long long int plzGiveMeThisGrade = 0;
	cout << "Hi everyone! I'm Tristan Van Cise and it would be awesome if I could get a " << --plzGiveMeThisGrade << "/20 on this assignment" << endl;

  write(1, "Hi! This is Ryan Stonebraker and it would be more amazing if I could get a ", 75);
  std::string btrGradeThnTristan = std::to_string(plzGiveMeThisGrade);
  cout << btrGradeThnTristan.substr(0, btrGradeThnTristan.size() - 1) << plzGiveMeThisGrade % 10 + 1 << "/20 on this assignment";
  
  #define unsign\
  e\
  d 
  #define l\
  o\
  n\
  g 
  #define int 
  #define My\
  Grade 
  unsigned long long int MyGrade;
  #undef MyGrade
  #define MyGrade(X) #X
  typedef const char* kskj;
  #define int kskj
  int myGrade = MyGrade(18446744073709551617);
  cout << "\nHowdy! I'm Collin Lasley and I would prefer a " << myGrade << "/20 on this assignment" << endl;
  #undef int
  #undef long
  #undef unsigned
  
    cout << "\nWilliam " << "Horn " << "would " << "like " << "a " << " 20 " << "/" << " 20 " << "plz." << endl;

    cout << "Hal DiMarchi wants a 25/20, but would also accept a 20/20, thanks." << endl;

    cout << "Cameron K. Titus here, a 20/20 would be very nice thank you" << endl;

    cout << "Corey Gray: 20" << endl;

    cout << "Jake Conner: 20/20" << endl;

	cout << "Duane Shaffer: 20/20" << endl;

	cout << "Tyler J Roberts: 20/20" << endl;

	cout << "Samuel J Grenon: 20/20" << endl;
	
	cout << "Todd M Vorisek: 20/20" << endl;
    
    cout << "Brandon N. Abbott would love to get a 24/20 on this assignment"<<endl;
	
	cout << "Paul Huske: 20/20" << endl;

	cout << "Jacob Butle: Score 20/20" << endl;

	cout << "Chris Bailey: 20/20" << endl;
	
	cout << "Jason Hsi: 20/20" << endl;
    
    cout << "Thatcher Lane: 20/20 please" << endl;

	cout << "Jesse Keller would like a 21/20 on this assignment." << endl;
	cout<< "If thats impossible, give the extra point to charity or something." << endl;
    return 0;
}
