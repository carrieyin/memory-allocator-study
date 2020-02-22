
/****************************************************************************************/
/*
�ļ�����: ClassA.h
��    ��:
��    ��: yindd
��������: 2020/02/15 21:23
�� �� ��: V0.0.0.1
�޸���־: 

/****************************************************************************************/
class ClassA
{
private:
	struct  A
	{
		int b;
		char a;	
	};

	union {
		A ma;
		ClassA* next;
	};

public:
	char geta() const
	{
		return ma.a;
	}

	void seta(char aa) {
		ma.a = aa;
	}

	int getb() const
	{
		return ma.b;
	}

	void setb(int b) {
		ma.b = b;
	}

	void setab(char aa, int bb) {
		ma.a = aa;
		ma.b = bb;
	}
	static void* operator new (size_t size);
	static void operator delete(void* deadopbject, size_t size);
private:

	static int MEM_SIZE;
	static ClassA* freelist;
	
public:
	
	ClassA();
	~ClassA();
};


