#include<iostream> 
using namespace std; 
 

class autoMobile 
{ 
	
		
		virtual void speed()  
		{ 
			cout<<"In speed of vechile\n"; 
		} 
		virtual void maintenance() 
		{ 
			cout<<"In maintenance of vechile\n"; 
		} 
		void price()  
		{ 
			cout<<"In price of vechile\n"; 
		} 
}; 
 
class fourWheeler : public autoMobile  
{ 
	public: 
		void speed()  
		{ 
			cout<<"In speed of 4-wheeler\n"; 
		} 
		void maintenance() 
		{ 
			cout<<"In maintenance of 4-wheeler\n"; 
		} 
}; 
class twoWheeler : public autoMobile 
{ 
	public: 
		void speed() 
		{ 
			cout<<"In speed of 2-wheeler\n"; 
		} 
		void maintenance() 
		{ 
			cout<<"In maintenance of 2-wheeler\n"; 
		} 
		void price() 
		{ 
			cout<<endl<<"In price of 2-wheeler\n"; 
		} 
}; 
class airborne : public autoMobile  //Inheritance
{ 
	void speed() 
		{ 
			cout<<"In speed of airborne\n"; 
		} 
}; 
 
int main() 
{ 
	autoMobile *a1,*a2,*a3,*a4; 
	 
	
	autoMobile A; 
	fourWheeler Lambo; 
	twoWheeler harley; 
	airborne jet; 
	 
	a1=&A; 
	a2=&Lambo; 
	a3=&harley; 
	a4=&jet; 
	 
	
 
	a1->speed(); 
	a1->maintenance(); 
	a1->price(); 
	 
	a2->speed(); 
	a2->maintenance(); 
 
	a3->speed(); 
	a3->maintenance(); 
	 
	a4->speed(); 
	a4->maintenance(); 
	 
	a2->price(); 
	a3->price();  
	 
	return 0; 
}
