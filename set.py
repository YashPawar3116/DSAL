def input1(set):
	a = int(input("Enter element in set: "))
	if a not in set:
		set.append(a)
		
def size(set):
	count = 0
	for i in set:
		count = count + 1
	print("The size of the set is: ",count)

def contain(set):
	x = int(input("Enter element to check: "))
	if x in set:
		return True
	else:
		return False

def main():
	set = { }
	while(True):
		print("""
		1.ADD
		2.REMOVE
		3.SIZE
		4.CONTAIN
		5.EXIT
		""")
		choice = int(input("Enter your choice: "))
		if (choice == 1):
			input1()
		elif(choice == 2):
			break
		elif(choice == 3):
		
			
		
