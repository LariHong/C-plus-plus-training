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
	//����(overload)Add���
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
	cout<<"�ԲӬݤ��X����"<<endl; 
    ChildOne childOne;// = new ChildOne();
    childOne.F();//�lclass �i�H�I�sF() 
    childOne.G();//�lclass �i�H�I�sG() 
    childOne.Parent::F();//�lclass�I�s��class F() 
    childOne.Parent::G();//�lclass�I�s��class G() 
    Parent* p = (Parent*)&childOne;  
    
    p->F();//�lclass�ഫ����class�A��F()�S��virtual �hOverwrite(���g)�A�ҥH�|�I�s������O�\��  
    p->G();//�lclass�ഫ����class�A�A��G()��virtual �hOverride(�л\)�A�ҥH�|�I�s��l���O�\�� 
	
	p->T();
	p->T(10);
	
    Parent* p2 = new Parent(); 
    p2->F();//�����O�\��
    p2->G();//�����O�\��
    cout<<p2->Add(1, 2)<<endl; //����(overload)Add��� 
    printf("%f\n",p2->Add(3.4f, 4.5f));//����(overload)Add���  
    delete p2;  

	
    return 0;  
}


