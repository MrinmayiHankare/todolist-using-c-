#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Task 
{
	string description;
    	bool completed;
};

int main() 
{
	vector<Task> tasks;

    	while (true) 
    	{
        	cout << "\nTo-Do List Menu:" << endl;
		cout << "1. Add Task" << endl;
		cout << "2. List Tasks" << endl;
		cout << "3. Mark Task as Completed" << endl;
		cout << "4. Quit" << endl;

		int choice;
		cout << "Enter your choice (1/2/3/4): ";
		cin >> choice;

		switch (choice) 
		{
			case 1:
				{
					cin.ignore(); // Clear the newline character from previous input
				    	Task task;
				    	cout << "Enter task description: ";
				    	getline(cin, task.description);
				    	task.completed = false;
				    	tasks.push_back(task);
				    	cout << "Task added." << endl;
				}
				break;

			 case 2: 
				cout << "\nTo-Do List:" << endl;
				for (size_t i = 0; i < tasks.size(); i++) 
				{
					cout << (i + 1) << ". ";
				    	if (tasks[i].completed) 
				    	{
				        	std::cout << "[Completed] ";
				    	}
				    	cout << tasks[i].description << endl;
				}
				break;

			    case 3: 
			    	   int taskNumber;
				   cout << "Enter the task number to mark as completed: ";
				   cin >> taskNumber;
				   if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) 
				   {
				   	tasks[taskNumber - 1].completed = true;
				    	cout << "Task marked as completed." << endl;
				   } 
				   else 
				   {
				    	cout << "Invalid task number." << endl;
				   }
				   break;

			    case 4: 
				   cout << "quit" << std::endl;
				   return 0;

			    default:
				    cout << "Invalid choice. Please enter a valid option." << endl;
		}
    }
	return 0;
}

