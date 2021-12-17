//
//  main.cpp
//  19_Polymorphism3
//
//  Created by David on 12/17/21.
//

#include <iostream>
#include <vector>

using namespace std;

class Shape{
private:
public:
    virtual void draw() = 0; //pure virtual function
    virtual void rotate() = 0; //pure virtual function
    virtual ~Shape(){};
};

class Open_Shape: public Shape{//abstact class
public:
    virtual ~Open_Shape(){}
};

class Closed_Shape: public Shape{//abstact class
public:
    virtual ~Closed_Shape(){}
};

class Line: public Open_Shape{ //concrete class
public:
    virtual void draw() override{
        cout<<"Drawing Line"<<endl;
    }
    virtual void rotate() override{
        cout<<"Rotating Line"<<endl;
    }
    virtual ~Line(){}
};

class Circle: public Closed_Shape{ //concrete class
public:
    virtual void draw() override{
        cout<<"Drawing Circle"<<endl;
    }
    virtual void rotate() override{
        cout<<"Rotating Circle"<<endl;
    }
    virtual ~Circle(){}
};

class Square: public Closed_Shape{ //concrete class
public:
    virtual void draw() override{
        cout<<"Drawing Square"<<endl;
    }
    virtual void rotate() override{
        cout<<"Rotating Square"<<endl;
    }
    virtual ~Square(){}
};

void screen_refresh(const vector<Shape *> &shapes){
    cout<<"Refreshing---------"<<endl;
    for(const auto p: shapes)
        p->draw();
}

int main(int argc, const char * argv[]) {
    //Shape s; can't instantiate abstract object
    
    Circle c;
    c.draw();
    
    Shape *ptr = new Circle();
    ptr->draw();
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    vector<Shape *> shapes {s1,s2,s3};
    screen_refresh(shapes);
    
    delete ptr;
    delete s1;
    delete s2;
    delete s3;
    return 0;
}
