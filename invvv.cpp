#include <iostream>
using namespace std;

class inv {
	private:
		string title;
		string name;
		string product;
		int quantity;
		int price;
	
	public:
		void UserInput (){
			
			
			cout << "Enter your name: ";
			cin >> name;
			
			int choice;
			cout << "Hi,"<<name<<" what is your courtesy title?"<<endl;
			cout << "\t[1] Mr."<<endl;
			cout << "\t[2] Ms."<<endl;
			cout << "Enter the number of your choice: ";
			cin >> choice;
			cout <<"\n";
			
			if (choice == 1){
				title = "Mr.";
			}
			else if (choice == 2){
				title = "Ms.";
			}
			else {
				cout << "Invalid input! Program Terminated.";
			}
			cout << "Hello, "<<title<<name<<"!"<<" Welcome to the Inventory System.\n";
			
		}
		int choice2;
		void InvSystem (){
			
			
			cout << "\n*********************************"<<endl;
			cout << "\tInventory System"<<endl;
			cout << "*********************************"<<endl;
			
			cout << "\nWhat would you like to do?"<<endl;
			cout << "\t[1] Add Product"<<endl;
			cout << "\t[2] Delete Product"<<endl;
			cout << "\t[3] Update Product"<<endl;
			cout << "\t[4] Display Product"<<endl;
			cout << "\t[5] Exit"<<endl;
			
			cout <<title<<name<<","<<" please enter the number of your choice: ";
			cin >> choice2;
		}
		void AddProduct (){
			
			cout << "\n*********************************"<<endl;
			cout << "\tAdd Product"<<endl;
			cout << "*********************************"<<endl;
			
			cout << "\nEnter Product name: ";
			cin >> product;
			cout << "Enter Product Quantity (for "<<product<<"): ";
			cin >> quantity;
			cout << "Enter Product Price (for "<<product<<"): ";
			cin >> price;
			
			cout << "\n\nProduct Added!";
		}
		void delProduct (){
			cout << "\n*********************************"<<endl;
			cout << "\tDelete Product"<<endl;
			cout << "*********************************"<<endl;
			
			string minusproduct;
			cout << "\nEnter Product Name: ";
			cin >> minusproduct;
			
			if (minusproduct == product){
				product = "";
				quantity = 0;
				price = 0;
			}
			
			cout << "\nProduct Deleted!";
		}
		void updateProd (){
			cout << "\n*********************************"<<endl;
			cout << "\tUpdating Product"<<endl;
			cout << "*********************************"<<endl;
			
			int NewQuan,NewPrice;
			quantity = NewQuan;
			price = NewPrice;
			
			cout << "\nEnter Product name: ";
			cin >> product;
			cout << "Enter New Product Quantity (for "<<product<<"): ";
			cin >> quantity;
			cout << "Enter New Product Price (for "<<product<<"): ";
			cin >> price;
		}
		void DisplayProducts (){
			cout << "\n*********************************"<<endl;
			cout << "\tProduct Details:"<<endl;
			cout << "*********************************"<<endl;
			
			cout << "Product name\t\t| Quantity\t\t| Price"<<endl;
			cout << "----------------------------------"<<endl;
			cout << product<<"\t\t\t|"<<quantity<<"\t\t\t|"<<price;
		}
		void Exit (){
			string choice3;
			
			cout << "\nAre you sure you want to exit? (Y/N):";
			cin >> choice3;
			
			if (choice3 == "Y"){
				cout << "\nThank you for using the Inventory System.";
				exit;
			}
			else if (choice3 == "N"){
				cout << "\nReturning to the menu...";
			}
			else {
				cout << "Invalid input. Please, try again.";
			}
		}
};

int main(){
	
	inv obj1;
	
	obj1.UserInput();
	obj1.InvSystem();
	obj1.AddProduct();
	//obj1.delProduct();
	obj1.DisplayProducts();
	obj1.Exit();
	
	return 0;
	
}
