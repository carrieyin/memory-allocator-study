
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
		char a;	
	};

	union {
		A a;
		ClassA* next;
	};
private:
	
	static void* operator new (size_t size);
	static int MEM_SIZE;
	static ClassA* freelist;
	
public:
	int aa;
	int bb;
	     int Get() const
	    {
	        return aa;
	    }
		 void Set(int val)
		 {
			 aa = val;
		 }
	ClassA();
	~ClassA();
};

