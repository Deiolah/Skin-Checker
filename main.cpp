//I'm going to take a break to map out my options
#include <iostream>
#include <string>
#include <vector>



void question_one(std::vector < std::pair <std::string, std::string >>& Questions){
	//QUESTION 1
	std::cout << "QUESTION 1: How does your skin react to prolonged sun exposure?" << std::endl;
	std::cout << "(A) I rarely burn and easily develop a tan. " << std::endl;

	std::cout << "(B) I burn easily but can also tan. " << std::endl;

	std::cout << "(C) I burn quickly and struggle to tan. " << std::endl;

	std::cout << "(D) I always burn and never tan. " << std::endl;
	

}

void question_two() {
	//QUESTION 2
	std::cout << "QUESTION 2: How does your skin feel a few hours after cleansing?" << std::endl;
	std::cout << "(A) My skin feels comfortable and not too oily or dry. " << std::endl;

	std::cout << "(B) My skin tends to feel a bit oily. " << std::endl;

	std::cout << "(C) My skin feels tight and dry." << std::endl;

	std::cout << "(D) My skin feels excessively oily. " << std::endl;

}

void question_three() {
	//QUESTION 3
	std::cout << "QUESTION 3: How does your skin react to new skincare products?" << std::endl;
	std::cout << "(A) My skin usually adapts well without any negative reactions. " << std::endl;

	std::cout << "(B) I may experience some breakouts initially, but they clear up." << std::endl;

	std::cout << "(C) My skin often becomes red and irritated. " << std::endl;

	std::cout << "(D) I frequently experience breakouts and irritation. " << std::endl;


}

void question_four() {
	//QUESTION 4
	std::cout << "QUESTION 4: How often do you need to moisturize your face?" << std::endl;
	std::cout << "(A) Rarely, my skin retains moisture well. " << std::endl;

	std::cout << "(B) Occasionally, especially in certain areas. " << std::endl;

	std::cout << "(C) Regularly, my skin feels dry without moisturizer. " << std::endl;

	std::cout << "(D) Constantly, my skin is always dry and tight. " << std::endl;

}

void question_five() { 
	//QUESTION 5
	std::cout << "QUESTION 5: How does your skin feel in the afternoon or evening?" << std::endl;
	std::cout << "(A) My skin remains comfortable and balanced. " << std::endl;

	std::cout << "(B) My skin becomes a bit shiny or oily. " << std::endl;

	std::cout << "(C) My skin feels tight and dry. " << std::endl;

	std::cout << "(D) My skin feels greasy and looks shiny. " << std::endl;


}



int main() {

	//TO-DO : Data Validation for Answers (Must be A B C or D)
	//Information on make_pair and pair: https://learn.microsoft.com/en-us/cpp/standard-library/pair-structure?view=msvc-170
	
	std::vector < std::pair <std::string, std::string >> Questions; 
	
	//auto valid = true;
	//while (valid) {
		//TO-DO: Could I have made a class that models a question? With variables like answer, result and conditon (if-statements)
		
		//QUESTION 1
		question_one(Questions); 
		std::string answer = "";
		std::cin >> answer;
		std::string result = "";

			if (answer == "A" || answer == "B" || answer == "C" || answer == "D")
			{

				if (answer == "A") result = "Normal";
				if (answer == "B") result = "Normal to Oily";
				if (answer == "C") result = "Dry to Normal";
				if (answer == "D") result = "Dry";
				Questions.push_back({ answer, result });
				
			//	question_two();
				

			}
			else {
				std::cout << " Please enter a valid number " << std::endl;
				question_one(Questions);
			}
			//Questions.push_back({ answer, result });
			std::cout << std::endl;
		
		//QUESTION 2
		 question_two();
		std::cin >> answer;

		if (answer == "A" || answer == "B" || answer == "C" || answer == "D")
		{

			if (answer == "A") result = "Normal";
			if (answer == "B") result = "Oily";
			if (answer == "C") result = "Dry";
			if (answer == "D") result = "Very Oily";

			//question_three();

		}
		else {
			std::cout << " Please enter a valid number " << std::endl;
			question_two();
		}
		Questions.push_back({ answer, result });
		std::cout << std::endl;

		//QUESTION 3
		question_three();
		std::cin >> answer;
		if (answer == "A" || answer == "B" || answer == "C" || answer == "D")
		{

			if (answer == "A") result = "Normal";
			if (answer == "B") result = "Normal to Oily";
			if (answer == "C") result = "Sensitive, potentially Dry";
			if (answer == "D") result = "Sensitive, potentially Oily";


		}
		Questions.push_back({ answer, result });
		std::cout << std::endl;

		//QUESTION 4
		question_four();

		std::cin >> answer;
		if (answer == "A" || answer == "B" || answer == "C" || answer == "D")
		{

			if (answer == "A") result = "Normal";
			if (answer == "B") result = "Normal to Oily";
			if (answer == "C") result = "Dry";
			if (answer == "D") result = "Very Oily";


		}
		Questions.push_back({ answer, result });
		std::cout << std::endl;

		//QUESTION 5
		question_five();
		std::cin >> answer;

		if (answer == "A" || answer == "B" || answer == "C" || answer == "D")
		{

			if (answer == "A") result = "Normal";
			if (answer == "B") result = "Normal to Oily";
			if (answer == "C") result = "Dry";
			if (answer == "D") result = "Very Oily";


		}
		Questions.push_back({ answer, result });
		std::cout << std::endl;

		//RESULTS
		std::cout << "Your answers are: " << std::endl;

		auto counter = 1;

		std::cout << "Results: " << std::endl;
		for (auto& answer : Questions) { //Enhanced for-loop
			std::cout << "Question " << counter << " : ";
			std::cout << answer.second << std::endl;

			counter++;
		}

//	}

	
}

