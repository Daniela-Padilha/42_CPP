/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:42:57 by ddo-carm          #+#    #+#             */
/*  Updated:    2025/11/05 23:33:26                                             */
/*                                                                            */
/* ************************************************************************** */

#include "inc/MutantStack.hpp"
#include <list>


void subjectTest();

int main()
{
	subjectTest();
	std::cout << CYA "\n-----My Test-----" RES << std::endl;
 	std::cout << BMAG "\nCreate stack with 5 ints" RES << std::endl;
    MutantStack<int> mstack;
    std::cout << "mstack is: ";
    for (int i = 0; i < 5; i++){
        mstack.push((i + 1));
        std::cout << (i + 1) << " ";
    }    
    std::cout << std::endl;

	std::cout << BMAG "\nTest member functions of std::stack" RES << std::endl;
	std::cout << BYEL "top(): " RES << mstack.top() << std::endl; 
    std::cout << BYEL "empty(): " RES << mstack.empty() << std::endl;
    std::cout << BYEL "size(): " RES << mstack.size() << std::endl;
    std::cout << BYEL "pop(): " RES;
    mstack.pop();
    std::cout << "after pop(), top=" << mstack.top() << " and size=" << mstack.size() << std::endl;
    std::cout << BYEL "push(): " RES;
    mstack.push(50);
    std::cout << "after push(50) top=" << mstack.top() << std::endl;

	std::cout << BMAG "\nTest iterators" RES << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << BYEL << "it: " RES << *it << std::endl;
	ite--;
    std::cout << BYEL << "ite: " RES << *ite << std::endl;
    ite++;
    std::cout << BYEL "rit: " RES << *rit << std::endl;
    rite--;
    std::cout << BYEL "rite: " RES << *rite << std::endl;
    rite++;

	std::cout << BMAG "\nUsing iterators" RES << std::endl;
 	std::cout << BYEL << "start to end: " << RES;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::cout << BYEL "end to start: " RES;
    while (rit != rite)
    {
        std::cout << *rit << " ";
        ++rit;
    }
    std::cout << std::endl;

	std::cout << BMAG "\nTest const iterators" RES << std::endl;
	MutantStack<int>::const_iterator cit = mstack.begin();
    MutantStack<int>::const_iterator cite = mstack.end();
    std::cout << BYEL "cit: " RES << *cit << std::endl;
	cite--;
    std::cout << BYEL "cite: " RES << *cite << std::endl;
    cite++;
    
    std::cout << BYEL << "start to end: " << RES;
    while (cit != cite)
    {
        std::cout << *cit << " ";
        ++cit;
    }
    std::cout << std::endl;

	std::cout << BMAG "\nTest with std::list" RES << std::endl;
 	MutantStack<std::string> stack;
    stack.push("cat");
    stack.push("dog");
    stack.push("bird");
    
    std::list<std::string> lst;
    lst.push_back("cat");
    lst.push_back("dog");
    lst.push_back("bird");

    MutantStack<std::string>::iterator new_it = stack.begin();
    MutantStack<std::string>::iterator new_ite = stack.end();
    
    std::cout << BYEL "stack is: " RES;
    while(new_it != new_ite){
        std::cout << *new_it << " ";
        new_it++;
    }
    std::cout << std::endl;
    
	std::list<std::string>::iterator lit;
    std::cout << BYEL "list is: " RES;
    for(lit = lst.begin(); lit != lst.end(); lit++){
        std::cout << *lit << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << BYEL "top of stack is: " RES << stack.top() << std::endl;
    std::cout << BYEL "top of list is: " RES << lst.back() << std::endl;
    
    std::cout << std::endl;
    stack.pop();
    lst.pop_back();
    std::cout << BYEL "after pop, top of stack is: " RES << stack.top() << std::endl;
    std::cout << BYEL "after pop_back, front of list is: " RES << lst.back() << std::endl;
	return 0;
}

void subjectTest() {
	std::cout << CYA "-----Subject Test-----" RES << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << BMAG "\nCheck first element: " RES << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << BMAG "\nCheck stack size after removing first element: " RES << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << BMAG "\nFirst element: " RES << std::endl;
	std::cout << *it << std::endl;
	std::cout << BMAG "\nLast element: " RES << std::endl;
	std::cout << *ite  << std::endl;
	++it;
	--it;
	std::cout << BMAG "\nIterate whole stack: " RES << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}