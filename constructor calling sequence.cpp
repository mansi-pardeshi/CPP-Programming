#include<conio.h>
#include<iostream>

class parent
{
    public:
		int a;
private:
		int b;
protected:
		int c;

		parent(int a,int b,int c)
		{
			this->a = a;
			this ->b = b;
			this->c = c;
		}

		void display()
		{
			std::cout<<b<<std::endl;
		}
};

class child:public parent
{
	 public:
		int p;
private:
		int q;
protected:
		int r;


		child(int p,int q,int r,int a,int b,int c):parent(a,b,c)
		{
			this->p = p;
			this ->q = q;
			this->r = r;
		}
		void disp()
		{
			std::cout<<q<<std::endl;
		}

};

class grandchild:public child
{
	 public:
		int x;
private:
		int y;
protected:
		int z;


		grandchild(int x,int y,int z,int p,int q,int r,int a,int b,int c):child(p,q,r,a,b,c)
		{
			this->x = x;
			this ->y =y;
			this->z = z; 
		}
		void print()
		{
			display();
			disp();
			std::cout<<x<<std::endl<<y<<std::endl<<z<<std::endl<<p<<std::endl<<q<<std::endl<<r<<std::endl<<a<<std::endl<<b<<std::endl<<c<<std::endl;
		}

};



int main()
{
	grandchild g(1,2,3,4,5,6,7,8,9);
	g.print();

	//std::cout<<g.x<<std::endl<<g.y<<std::endl<<g.z<<std::endl<<g.p<<std::endl<<g.q<<std::endl<<g.r<<std::endl<<g.a<<std::endl<<g.b<<std::endl<<g.c<<std::endl;
	getch();
	return 0;
}