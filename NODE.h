#pragma once
#include <iostream>
using namespace std;

class NODE {
    long data; // เปลี่ยนเป็น long เพื่อรองรับ id ของ mu_person
    NODE* next;
public:
    NODE(long);
    virtual void show_node(); // ใช้ virtual เพื่อให้เรียก display() ของ student ได้
    void insert(NODE*&);
    NODE* move_next();
    virtual ~NODE(); 
};