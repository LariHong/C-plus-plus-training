#include <iostream>
#include <typeinfo>
using namespace std;

class Parent  
{  
public:  
    void F()  
    {  
        cout<<"Parent.F()\n"; 
    }  
    virtual void G()  
    {  
        cout<<"Parent.G()\n";  
    }
    
    virtual void T()
    {
    	cout<<"Parent.T()\n"; 
	}
	virtual void T(int x)
    {
    	cout<<"Parent.T(int)\n"; 
	}
	//重載(overload)Add函數
    int Add(int x, int y)  
    {  
        return x + y;  
    }  
    float Add(float x, float y)  
    {  
        return x + y;  
    }  
};  
  
class ChildOne: public Parent  
{  
 public:   
    void F()  
    {  
        cout<<"ChildOne.F()\n";   
    }  
    
    virtual void G()  
    {  
        cout<<"ChildOne.G()\n"; 
    } 
	
	void T()
    {
    	cout<<"ChildOne.T()\n"; 
	}
	void T(int x)
    {
    	cout<<"ChildOne.T(int)\n"; 
	}  
};  
  
  
int main()  
{  
	cout<<"詳細看內碼註解"<<endl; 
    ChildOne childOne;// = new ChildOne();
    childOne.F();//子class 可以呼叫F() 
    childOne.G();//子class 可以呼叫G() 
    childOne.Parent::F();//子class呼叫父class F() 
    childOne.Parent::G();//子class呼叫父class G() 
    Parent* p = (Parent*)&childOne;  
    
    p->F();//子class轉換成父class，但F()沒有virtual 則Overwrite(重寫)，所以會呼叫到父類別功能  
    p->G();//子class轉換成父class，，但G()有virtual 則Override(覆蓋)，所以會呼叫到子類別功能 
	
	p->T();
	p->T(10);
	
    Parent* p2 = new Parent(); 
    p2->F();//父類別功能
    p2->G();//父類別功能
    cout<<p2->Add(1, 2)<<endl; //重載(overload)Add函數 
    printf("%f\n",p2->Add(3.4f, 4.5f));//重載(overload)Add函數  
    delete p2;  

	
    return 0;  
}


