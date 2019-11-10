#include <iostream>
#include <string>

using namespace std;

int Check_num( string str1) {
	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] >= 48 && str1[i] <= 57 || str1[i] == 43)
		{
			
		}
		else {
			return 0;
		}

	}
	return 1;
}
int Check_lett( string str) {
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 || str[i] == 32 || str[i] == 95 || str[i] == 11)
		{
		}
		else {
			return 0;
		}

	}
	return 1;
}
int main()
{
   int cwont{0};
   bool run_menu = true;
   int menu_item{ 0 };
   int count_contact{ 0 };
   int edit_menu{ 0 };
   string str, str1;
   cout << "Hello i am contact book!\nPlease enter how many contact do you have\n";
   cin >> cwont;
   string* contact_name = new (nothrow) string[cwont];
   string* contact_phones = new (nothrow) string[cwont];
   if (contact_name == nullptr && contact_phones == nullptr) {
	   cout << "Problem with memory on your computter\n";
	   return 0;
   }
   while (run_menu)
   {
	   cout << "--------------------------------MENU------------------------------------------------------\n";
	   cout << "Press 1 to Create contact\tPress 2 to watch all contacts\tPress 3 to Search contact\nPress 4 Edit contact\tPress 5 to EXIT\n";
	   cin >> menu_item;
	   switch (menu_item)
	   {
	   case 1 :
		   if (count_contact >= cwont) {
			   cout << "You already insert all contacts in memory\n";
			   break;
		   }
		   cout << "Insert Contact name\n";
		   cin.get();
		   getline(cin, str);
		   if (!(Check_lett(str))) {
			   cout << "Name can`t have numbers and symbols\n";
			   return 0;
		   }
		   str += '\0';
		   contact_name[count_contact] = str;
		   cout << "Insert Contact number\n";
		   cin>> str1;
		   if (!(Check_num(str1))) {
			   cout << "Phones numbers can`t have latter\n";
			   return 0;
		   }
		   str1 += '\0';
		   contact_phones[count_contact] = str1;
		   cout << contact_name[count_contact] <<" - "<< contact_phones[count_contact] << endl;
		   count_contact++;
		   break;
	   case 2 :
		   if (count_contact == 0) {
			   cout << "Your contacts is empty\n";
			   break;
		   }
		   for (int i = 0; i <count_contact; i++)
		   {
			   cout << contact_name[i] << " - " << contact_phones[i] << endl;
		   }
		   break;
	   case 3 :
		   cout << "I search buy full info ( full name and sername(if i didn`t give you back info buy name or sername try to change capitals leter)\n or full cellphone number)\n";
		   cout << "Enter info for search\n";
		   cin.get();
		   getline(cin, str);
		   if (Check_num(str)) {
			   str += '\0';
			   for (int i = 0; i < count_contact; i++)
			   {
				   if (str == contact_phones[i]) {
					   cout <<"We find !  "<< contact_name[i] << " - " << contact_phones[i] << endl;
					   break;
				   }
			   }
			   break;
		   }else if (Check_lett(str)) {
			   str += '\0';
			   for (int i = 0; i < count_contact; i++)
			   {
				   if (str == contact_name[i]) {
					   cout << "We find !  " << contact_name[i] << " - " << contact_phones[i] << endl;
					   break;
				   }
			   }
			
			   break;
		   } else{
			   cout << "format of search not corect or non corect register of inputing informarion for searching\n";
			   break;}
		   break;
	   case 4 :
		   if (count_contact==0)
		   {
			   cout << "ho contacts to edit\n";
			   break;
		   }
		   for (int i = 0; i < count_contact; i++)
		   {
			   cout <<i+1<<") "<< contact_name[i] << " - " << contact_phones[i] << endl;
		   }
		   cout << "it`s your contacts please enter wich contact do you wont to edit( buy entering it`s index)\n ";
		   cin >> menu_item;
		   if (menu_item > count_contact) {
			   cout << "No such contacts in contact book\n";
			   break;
		   }
		   cout << "What you want to edit?\n Press 1 to edit name\tPress 2 to edit cellphonenumber\n";
		   cin >> edit_menu;
		   if (edit_menu > 2 && edit_menu <= 0) {
			   cout << "Wrong menu for editing\n";
			   break;
		   }
		   else if (edit_menu==1) {
			   cout << "You edit : " << contact_name[menu_item-1] << endl;
			   cout << "Please enter new information about name\n";
			   cin.get();
			   getline(cin, str);
			   if (Check_lett(str)) {
				   str += '\0';
				   contact_name[menu_item-1] = str;
				   cout << "Info renew\n";
				   break;
			   }
			   else
			   {
				   cout << "Name can`t have  a numbers\n";
				   break;
			   }
			   
		   }
		   else if (edit_menu == 2) {
			   cout << "You edit phone number of : " << contact_name[menu_item - 1] << " - " << contact_phones[menu_item - 1] << endl;
			   cout << "Please enter new information about phone number\n";
			   cin >> str;
			   if (Check_num(str)) {
				   str += '\0';
				   contact_phones[menu_item - 1] = str;
				   cout << "Info renew\n";
				   break;
			   }
			   else
			   {
				   cout << "Phones number  can`t have  a latters\n";
				   break;
			   }

		   }
		   break;
	   case 5 :
		   cout << "See you next time\n";
		   run_menu = false;
		   break;
	   default:
		   cout << "Wrong menu item" << endl;
		   run_menu = false;
		   break;
	   }

   }
   delete[] contact_name;
   contact_name = nullptr;
   delete[] contact_phones;
   contact_phones = nullptr;


}

