#pragma once
#include<string>
#include<iostream>
struct Tree
{
	std::string data;
	int key;
	Tree* right;
	Tree* left;
	unsigned height;

};