#include<iostream>
using namespace std;
class Parent
{
	protected:
		string type;
		string name;
		double healthPoints;
		double powerlevel;
		double experience;
	public:	
		virtual void displayinfo()=0;
		virtual double attack()=0;
		virtual double defend()=0;
		void welcome() 
		{
		cout<<" Welcome To Eartagral Gahzi Game "<<endl;	
		}
};

class Warrior : public Parent 
{
	private:
		string weapon;
		double armorStrength;
		double rageLevel;
	public:
	void setter(string name ,double hp,double powerlevel,double xp,string weapon,double strength,double rageLevel )
	{
		this->name=name;
		type="Warrior";
		healthPoints=hp;
		this->powerlevel=powerlevel;
		experience=xp;
		this->weapon=weapon;
		armorStrength=strength;
		this->rageLevel=rageLevel;
	}
	double attack()
	{
		return (armorStrength/rageLevel)*2;
	}
	double defend()
	{
	return armorStrength/2;	
	}
	void displayinfo()
	{	
	cout<<"\n-----Heroes Profiles-----"<<endl<<endl;

	cout<<"\n-----Warrior Profile-----"<<endl<<endl;
	cout<<"Type = "<<type<<endl;
	cout<<"Name          = "<<name<<endl;
	cout<<"Weapon        = "<<weapon<<endl;
	cout<<"Health Point (HP) = "<<healthPoints<<endl;
	cout<<"Experience   (XP) = "<<experience<<endl;
	cout<<"Rage Level        = "<<rageLevel<<endl;
	cout<<"Power Level       = "<<powerlevel<<endl;
	cout<<"Armor Strength    = "<<armorStrength<<endl;
	cout<<"\n-------------------------------------\n";
	cout<<"Attack Power      = "<<attack()<<endl;
	cout<<"Defending Power   = "<<defend()<<endl;
	cout<<"\n=====================================\n";
	}
};

class Mage : public Parent 
{
	private:
		string spell;
		int manaPoints ;
		double magicMultiplier;
	public:
	void setter(string name ,double hp,double powerlevel,double xp,string spell,int manaPoints,double magicMultiplier )
	{
		this->name=name;
		type="Mage";
		healthPoints=hp;
		this->powerlevel=powerlevel;
		experience=xp;
		this->spell=spell;
		this->manaPoints=manaPoints;
		this->magicMultiplier=magicMultiplier;
	}
	double attack()
	{
		return (manaPoints * 2 ) + magicMultiplier;
	}
	double defend()
	{
	return manaPoints/2;	
	}
	void displayinfo()
	{	
	
	cout<<"\n-----Mage Profile-----"<<endl<<endl;
	cout<<"Type = "<<type<<endl;
	cout<<"Name          = "<<name<<endl;
	cout<<"Spell         = "<<spell<<endl;
	cout<<"Health Point (HP) = "<<healthPoints<<endl;
	cout<<"Experience   (XP) = "<<experience<<endl;
	cout<<"Power Level       = "<<powerlevel<<endl;
	cout<<"Mana Points       = "<<manaPoints<<endl;
	cout<<"MagicMultiplier   = "<<magicMultiplier ;
	cout<<"\n-------------------------------------\n";
	cout<<"Attack Power      = "<<attack()<<endl;
	cout<<"Defending Power   = "<<defend()<<endl;
	cout<<"\n=====================================\n";
	}
};

class Archer : public Parent 
{
	private:
		string bowType;
		int arrow;
		double accuracyRate;
	public:
	 void setter(string name ,double hp,double powerlevel,double xp,string bowType,int arrow,double accuracyRate )
	{
		this->name=name;
		type="Archer";
		healthPoints=hp;
		this->powerlevel=powerlevel;
		experience=xp;
		this->bowType=bowType;
		this->arrow=arrow;
		this->accuracyRate=accuracyRate;
	}
	double attack()
	{
		return accuracyRate * 2;
	}
	double defend()
	{
	return accuracyRate /2;	
	}
	void displayinfo()
	{	
	
	cout<<"\n-----Archer Profiles-----"<<endl<<endl;
	cout<<"Type = "<<type<<endl;
	cout<<"Name              = "<<name<<endl;
	cout<<"BowType           = "<<bowType<<endl;
	cout<<"Health Point (HP) = "<<healthPoints<<endl;
	cout<<"Experience   (XP) = "<<experience<<endl;
	cout<<"Power Level       = "<<powerlevel<<endl;
	cout<<"Number of Arrow   = "<<arrow<<endl;
	cout<<"Accuracy Rate     = "<<accuracyRate;
	cout<<"\n-------------------------------------\n";
	cout<<"Attack Power      = "<<attack()<<endl;
	cout<<"Defending Power   = "<<defend()<<endl;
	cout<<"\n=====================================\n";
	}
};
int main()
{
	Warrior w1;
	Mage m1;
	Archer a1;
	
	w1.setter("Maaz",45.4,12,3.2,"Sword",50,10.0);
	m1.setter("Aman ",12,60,10,"Fire ball",5,12.4);
	a1.setter("Abbas ",10,20,30,"short Bow",10,99.9);
	 
	 w1.welcome();
	w1.displayinfo();
	m1.displayinfo();
	a1.displayinfo();

double wAtk = w1.attack();
double mAtk = m1.attack();
double aAtk = a1.attack();

cout << "\n===== Battle Summary =====\n";

if (wAtk > mAtk && wAtk > aAtk)
{
    cout << "Warrior has the highest attack power!\n";
}
else if (mAtk > wAtk && mAtk > aAtk)
{
    cout << "Mage has the highest attack power!\n";
}
else if (aAtk > wAtk && aAtk > mAtk)
{
    cout << "Archer has the highest attack power!\n";
}
else
{
    cout << "There is a tie between heroes!\n";
}

cout << "===========================\n";

	return 0;
}
