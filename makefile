phase.png : AA_graph.py tray.txt
	python AA_graph.py
tray.txt : a.out
	./a.out > tray.txt
a.out :
	c++ AA_gravity.cpp

