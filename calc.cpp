#include <cstdio>

int main(){
	enum class oper{
		add,
		sub,
		multi,
		divide,
		none
	};
	
	struct calc{
	calc(oper in){
	operation=in;
	}
	calc(){
	operation = oper::none;
	}
		int calculate(int a, int b){
			switch(operation){
			case oper::add:{
				return (a+b);
				} break;
			case oper::sub:{
				return(a-b);
				}break;
			case oper::multi:{
				return(a*b);
				}break;
			case oper::divide:{
				return(a/b);
				}break;
			case oper::none:{
				return (66);
				}break;
			default:{
				return(0);
				}
			}
		}
	private:
	oper operation;
	};
	calc initcalc= oper::sub;
	printf("calculator redults:%d\n\n",initcalc.calculate(5,6));
	return(0);
	
	
}
