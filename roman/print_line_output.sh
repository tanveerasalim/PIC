#!/bin/bash
	
	for i in {1..10};
	do
		sed -n "$i"p smart_roman_tests.txt | ./roman_testable.out
	done
