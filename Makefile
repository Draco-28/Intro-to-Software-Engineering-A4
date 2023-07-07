a4: main.o Animal.o Clinic.o Collection.o Control.o Customer.o IdArray.o Identifiable.o IdList.o View.o
	g++ -o a4 main.o Animal.o Clinic.o Collection.o Control.o Customer.o IdArray.o Identifiable.o IdList.o View.o

main.o: main.cc Control.h
	g++ -c main.cc

Animal.o: Animal.cc Animal.h Customer.h
	g++ -c Animal.cc

Clinic.o: Clinic.cc Clinic.h
	g++ -c Clinic.cc

Collection.o: Collection.cc Collection.h
	g++ -c Collection.cc

Control.o: Control.cc Control.h
	g++ -c Control.cc

Customer.o: Customer.cc Customer.h defs.h
	g++ -c Customer.cc

IdArray.o: IdArray.cc IdArray.h
	g++ -c IdArray.cc

Identifiable.o: Identifiable.cc Identifiable.h
	g++ -c Identifiable.cc

IdList.o: IdList.cc IdList.h
	g++ -c IdList.cc

View.o: View.cc View.h
	g++ -c View.cc

clean:
	rm *.o a4
