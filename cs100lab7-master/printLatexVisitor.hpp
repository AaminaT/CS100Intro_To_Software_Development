#ifndef __PRINTLATEXVISITOR_HPP__
#define __PRINTLATEXVISITOR_HPP__
#include "visitor.hpp"
#include "base.hpp"

#include <string>
class printLaTexVisitor: public Visitor{
    private:
        Op* data1;
        Rand* data2;
        Add* data3;
        Sub* data4;
        Mult* data5;
        Div *data6;
        Pow* data7;
    public:
	virtual std::string PrintLaTeX(Base* ptr){
		std::cout<<"$";
		return ptr->stringify();
		std::cout<<"$";
	}
	//Nodes with no children are visited only once (index = 0)
	virtual void visit_op(Op* node){
		data1 = node;
		std::cout<< "{" << data1->stringify() << "}";
	}
	virtual void visit_rand(Rand* node){
		data2 = node;
                std::cout<< "{" << data2->stringify() << "}";
	}

	// Nodes with two children are visited three times.
	// index = 0 -> begin
	// index = 1 -> middle
	// index = 2 -> end
	virtual void visit_add_begin(Add* node){
		data3 = node;
                std::cout<< "{" << data3->stringify() << "}";
	}
	//	latexprint= "{";
	//	latexprint += leftOp ->stringPrintLatex()
	virtual void visit_add_middle(Add* node){
		data3 = node;
                std::cout<< "{" << data3->stringify() << "}";
	}
        virtual void visit_add_end(Add* node){
		data3 = node;
                std::cout<< "{" << data3->stringify() << "}";
	}
        virtual void visit_sub_begin(Sub* node){
		data4 = node;
                std::cout<< "{" << data4->stringify() << "}";
	}
        virtual void visit_sub_middle(Sub* node){
		data4 = node;
                std::cout<< "{" << data4->stringify() << "}";
	}
        virtual void visit_sub_end(Sub* node){
		data4 = node;
                std::cout<< "{" << data4->stringify() << "}";
	}
        virtual void visit_mult_begin(Mult* node){
		data5 = node;
                std::cout<< "{" << data5->stringify() << "}";
	}
        virtual void visit_mult_middle(Mult* node){
		data5 = node;
                std::cout<< "{" << data5->stringify() << "}";
	}
        virtual void visit_mult_end(Mult* node){
		data5 = node;
                std::cout<< "{" << data5->stringify() << "}";
	}
        virtual void visit_div_begin(Div* node){
		data6 = node;
                std::cout<< "{" << data6->stringify() << "}";
	}
        virtual void visit_div_middle(Div* node){
		data6 = node;
                std::cout<< "{" << data6->stringify() << "}";
	}
        virtual void visit_div_end(Div* node){
		data6 = node;
                std::cout<< "{" << data6->stringify() << "}";
	}
        virtual void visit_pow_begin(Pow* node){
		data7 = node;
                std::cout<< "{" << data7->stringify() << "}";
	}
        virtual void visit_pow_middle(Pow* node){
		data7 = node;
                std::cout<< "{" << data7->stringify() << "}";
	}
        virtual void visit_pow_end(Pow* node){
		data7 = node;
                std::cout<< "{" << data7->stringify() << "}";
	}
	
};

#endif //__PRINTLATEXVISITOR_HPP__
