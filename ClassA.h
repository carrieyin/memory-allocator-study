
/****************************************************************************************/
/*
文件名称: ClassA.h
功    能:
作    者: yindd
生成日期: 2020/02/15 21:23
版 本 号: V0.0.0.1
修改日志: 

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

