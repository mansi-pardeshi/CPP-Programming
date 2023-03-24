#include<conio.h>
#include<iostream>

class parent
{
    public:
		int a;
		int b;
		int c;

		parent(int a,int b,int c)
		{
			this->a = a;
			this ->b = b;
			this->c = c;
		}
};

class child:public parent
{
	 public:
		int p;
		int q;
		int r;


		child(int p,int q,int r,int a,int b,int c):parent(a,b,c)
		{
			this->p = p;
			this ->q = q;
			this->r = r;
		}

};

class grandchild:public child
{
	 public:
		int x;
		int y;
		int z;


		grandchild(int x,int y,int z,int p,int q,int r,int a,int b,int c):child(p,q,r,a,b,c)
		{
			this->x = x;
			this ->y =y;
			this->z = z; 
		}

		//friend std::ostream& operator <<(std::ostream& out , const grandchild& other);
};

/*std::ostream& operator <<(std::ostream& out , const grandchild& other)
{
	out<<other.x;
	out<<other.y;
	out<<other.z;
	out<<other.p;
	out<<other.q;
	out<<other.r;
	out<<other.a;
	out<<other.b;
	out<<other.c;
	return out;
}*/

int main()
{
	grandchild g(1,2,3,4,5,6,7,8,9);

	//std::cout<<g;
	std::cout<<g.x<<std::endl<<g.y<<std::endl<<g.z<<std::endl<<g.p<<std::endl<<g.q<<std::endl<<g.r<<std::endl<<g.a<<std::endl<<g.b<<std::endl<<g.c<<std::endl;
	getch();
	return 0;
}