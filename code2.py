file = open("dip.txt","w");
file.writelines(["cdvdvdv\n","Vdvdfvdfvdv\n"]);
file.close();

with open("dip.txt","r") as file:
    print(file.read())
    file.seek(0)
    print(file.read())
    print(file.tell())

s="dipashiu"
arr = list(s)  
print(sorted(s))