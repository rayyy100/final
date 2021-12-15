#include<iostream> //libary
#include<string>
#include<Windows.h>
using namespace std;
//function declarations
void npc(int xy);
void memory(int yx);
void colorrandomizer();
string inventory[10];
int main() {
	//local variables
	int room = 1;
	string input;
	int turns = 0;
	//color changes (needs #include <Windows.h> at the top)
	system("Color 0E");
	


	cout << "You wake up to find yourself in a isolated place. A strange place that may or may not be dangerous. Can you escape? Good luck!" << endl;
	// ascii art
		 cout << " //  " << endl;
		 cout << "('> " << endl;
		 cout << "/ rr " << endl;
		 cout << "* \))_ " << endl;
		 PlaySoundA((LPCSTR)"canary", NULL, SND_FILENAME | SND_ASYNC); 
	do {
		cout << "Turn " << turns << endl;
		cout << "You have " << 20 - turns << " turns left." << endl;
		turns++;

		cout << "your inventory: ";
		for (int i = 0; i < 10; i++)
			cout << inventory[i];
		cout << endl << endl;


		switch (room) {
		case 1:
			npc(1);
			cout << "As you are waking up from your sleep you realize that you arent in your room" << endl;
			cout << "Everything looks strange and things seem out of the ordinary" << endl;
			cout << "You see a strange looking door going East." << endl;
			getline(cin, input);
			if (input.compare("East") == 0)
				room = 2;

			else
				cout << "Sorry, that's not an option!" << endl;
			break;
		case 2:
			cout << "You are inside the other room some things are out of shape but nothing too weird." << endl;
			cout << "all of sudden it becomes very hot and you became very tired but you do see another door" << endl;
			cout << "You try to open the door but cant opent it" << endl;
			cout << "You try to look around for a key or something to opent it. You can look under the carpet, under the bed, inside the drawers, and inside a vase." << endl;
			getline(cin, input);
			if (input.compare("Inside a vase") == 0) //gets the key
				inventory[0] = "key";
			else if (input.compare("South"))
				if (inventory[0] != "key")//stops you from going south if you didn't get the key first
					cout << "the door is locked!" << endl;
				else {
					cout << "you open the door wiht the key!" << endl;
					room = 3;
				}
			else
				cout << "sorry, that is not an option!" << endl;
			break;
		case 3:
			colorrandomizer();
			cout << "After being in that hot room you get into the next one exhausted... there is a bed that looks exactly like yours so you get happy thinking you are back home" << endl;
			cout << "WRONG its not your room... looks more like a jail cell..." << endl;
			cout << "You see a note you pick it up and read it and it has some random letters which are JSKV you see a lock with letter ccombinations" << endl;
			cout << "You try to put the letters but its wrong... There is a specific order you can put." << endl;
			getline(cin, input);
			if (input == "JKVS") {
				cout << "you guessed it! you move onto the next room." << endl;
				room = 4;
			}
			else
				cout << "um wrong one..." << endl;
			break;
		case 4:
			npc(2);
			cout << "There is a bunch of books like really a lot...." << endl;
			cout << "It looks like it can be a never ending walk" << endl;
			cout << "You keep walking and wlaking and walking and walkingggg until finally you see an exit" << endl;
			cout << "This time it wasnt locked which you were happy about so you can go East again" << endl;
			getline(cin, input);
			if (input == "East")
				room = 5;
			else
				cout << "nope try again" << endl;
			break;
		case 5:
			colorrandomizer();
			cout << "There are more than one doors" << endl;
			cout << "There is about 1 room in each wall making it 4 rooms" << endl;
			cout << "You can step inside room one" << endl;
			getline(cin, input);
			if (input.compare("Room one") == 0) 
				room = 6;
			else
				cout << "cant go to that room yet" << endl;
			break;
		case 6:
			npc(3);
			cout << "'great' you thought to yourself" << endl;
			cout << "this this the room is messy more than the others" << endl;
			cout << "you try to look for something to unlock the door like a key again" << endl;
			cout << "there is many places you can look for inside the sink, under a stack of old books, or inside a pillow case" << endl;
			getline(cin, input);
			if (input.compare("Under a stack of old books") == 0)
				inventory[1] = "key";
			else if (input.compare("South"))
				if (inventory[0] != "key")
					cout << "cant open the door" << endl;
				else {
					cout << "you can open the door with the key" << endl; 
					room = 7;
				}
			else
				cout << "nope not there" << endl;
			break;
		case 7:
			colorrandomizer();
			cout << "you are in the main room again" << endl;
			cout << "You noticed that all of the rooms are gone" << endl;
			cout << "you look back and see that the room you were just in was still there" << endl;
			cout << "you had no option but to go inside" << endl;
			getline(cin, input);
			if (input.compare("Back into room") == 0)
				room = 8;
			else
				cout << "not an option(back into room)" << endl;
			break;
		case 8:
			colorrandomizer();
			cout << "You expected it to be the same but it was a completely different room" << endl;
			cout << "You go back to the outside room without fully leaving the room and see its still the same" << endl;
			cout << "you turn around and see another room" << endl;
			cout << "in other to go inside the room you have to put one of your hands in the scanner" << endl;
			getline(cin, input);
			if (input.compare("Left hand") == 0)
				room = 9;
			else
				cout << "maybe try the other one" << endl;
			break;
		case 9:
			memory(3);
			colorrandomizer(); 
			cout << "You turn around and see a lot of memories that you had as a child" << endl;
			cout << "You walk aroud the room slowly and admire the pictures in the wall" << endl;
			cout << "as all of the memories are rushing back you came across one finally normal lookinf room" << endl;
			cout << "the room said 'what is the one things you desire the most?'" << endl;
			cout << "a kinda looking keyborad comes up for you to type out your answer" << endl;
			getline(cin, input);
			if (input.compare("To go back home") == 0)
				room = 10;
			else
				cout << "are you sure" << endl;
			break;
		case 10:
			colorrandomizer(); 
			cout << "You struggle to open your eyes for some reason" << endl;
			cout << "you try to open them but nothing works out" << endl;
			cout << "finally after so much time of struggling you finally were able to open your eyes" << endl;
			cout << "you wake up and see yourself in your room" << endl;
			cout << "'Was it all a dream or real?' You think to yourself" << endl;

			cout << endl << endl << "YOU WIN. GAME OVER" << endl;
			input = "q";

		}
		
	} while (input != "q" && turns > 0);
	if (turns <= 0)
		cout << "You took too long! Thanks for playing! Game Over!" << endl;
	else cout << " thanks for playing" << endl;
}


void npc(int xy) {
	int num;
	if (xy == 0)
		num = rand() % 3 + 1; //creates a num between 1-3
	else
		num = xy;
	switch (num) {
	case 1:
		cout << "you encountered a friendly mushroom." << endl;
		num = rand() % 3 + 1;
		if (num == 1)
			cout << "Hi, dont worry you go this!" << endl;
		else if (num == 2)
			cout << "i like your curly hair!" << endl;
		else
			cout << "Im happy to meet you!!!" << endl;
		break;

	case 2:
		cout << "You found a helpful butterfly!" << endl;
		num = rand() % 3 + 1;
		if (num == 1)
			cout << "Hello! Its a lovely evening right!" << endl;
		else if (num == 2)
			cout << "Remember dont give up we are all proud of you" << endl;
		else
			cout << "Always remember to trust your instincts" << endl;
		break;

	case 3:
		cout << "an annoying cat shows up" << endl;
		num = rand() % 3 + 1;
		if (num == 1)
			cout << "Are you sure you want to get out?" << endl;
		else if (num == 2)
			cout << "Why dont you stayyyyyy?" << endl;
		else
			cout << "Have you ever wonderd what happens after death?" << endl;
	}
}

void memory(int yx) {
	int num;
	if (yx == 0)
		num = rand() % 3 + 1; //creates a num between 1-3
	else
		num = yx;
	switch (num) {
	case 1:
		cout << "Memory of first day of college" << endl;
		num = rand() % 3 + 1;
		if (num == 1)
			cout << "It was your first say at college your mom was hte most excited to see you starting your future" << endl;
		else if (num == 2)
			cout << "Your mom gets out fo the car making you take pictures and telling you how she was going to print it out and put it in a book" << endl;
		else
			cout << "Once your mom stopped taking pictures she looked at you and gave you the biggest hug" << endl;
		break;

	case 2:
		cout << "Memory of your 17th birthday" << endl;
		num = rand() % 3 + 1;
		if (num == 1)
			cout << "As you were getting home from schools you see your mom sleeping" << endl;
		else if (num == 2)
			cout << "You cleaned the house putting a blanket over your mom not wanting to wake her up" << endl;
		else
			cout << "You go to sleep waking up to seeing a cake in the kitchen with a not that says 'sorry i had to go to work but happy late b-day ;)' " << endl;
		break;

	case 3:
		cout << "Redecoratng experieces" << endl;
		num = rand() % 3 + 1;
		if (num == 1)
			cout << "You remember there was a moment in life were you wanted to redecorate your room so you and your mother went to the store and pick up the things" << endl;
		else if (num == 2)
			cout << "It was already late by the time you arrived home so you just decided to watch a movie while eating snacks with you mom" << endl;
		else
			cout << "You and your mom both stay sleeping on the couch while the movied is playing on the background" << endl;
	}
}

void colorrandomizer() {
	int num = rand() % 4;
	if (num == 0)
		system("Color 0C");
	if (num == 1)
		system("Color 0D");
	if (num == 2)
		system("Color 09");
	if (num == 3)
		system("Color 06");

}
