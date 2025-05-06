class Set:
    s1=[]
    s2=[]

    def contains(self,l,key=0):
            if key in l:
                print(key,"Element present in Set")
            else:
                print(key,"Element not present in Set")

    def add_element(self):
        n=int(input("Enter size of set 1:"))
        for i in range(0,n):
            self.s1.append(int(input("Enter element:")))

        n=int(input("Enter size of set 2:"))
        for i in range(0,n):
            self.s2.append(int(input("Enter Element:")))

    def remove_element(self,key):
        self.s1.remove(key)
    def set_Size(self,l):   #total elements
        count=0
        for i in l:
            count+=1
        print("Total Elements in Set:",count)
    def intersection(self,l1,l2):   #common elements
        l3=[]
        for i in l1:
            if i in l2:
                l3.append(i)
            return l3
    def union(self,l1,l2):  #common elements without duplication
        l3=[]
        for i in l1:
            if i not in l3:
                l3.append(i)
        for i in l2:
            if i not in l3:
                l3.append(i)
        return l3
    def difference(self,l1,l2):
        l3=[]
        for i in l1:
            if i not in l2:
                l3.append(i)
        return l3
    def set_subset(self,l1,l2):
        flag=0
        for i in l1:
            if i in l2:
                continue
        if flag==0:
            print("Subset")
        else:
            print("Not Subset")
s=Set()
while True:
    print("1.Add Element in Set")
    print("2.Set Contains")
    print("3.Remove Element")
    print("4.total Count")
    print("5.intersection of set")
    print("6.Union")
    print("7.Difference")
    print("8.Subset")
    ch=int(input("Enter your Choice"))
    if ch==1:
        s.add_element()
        print("Element added!!!")
    elif ch==2:
        s.contains(s.s1,int(input("Enter Element")))
    elif ch==3: 
       if s.remove_element(int(input("Enter Element to be delete")))==True:
           print("Element Removed")
    elif ch==4:
        s.set_Size(s.s1)
    elif ch==5:
        print(s.intersection(s.s1,s.s2))
    elif ch==6:
        print(s.union(s.s1,s.s2))
    elif ch==7:
        print(s.difference(s.s1,s.s2))
    elif ch==8:
        s.set_subset(s.s1,s.s2)
    elif ch==9:
        exit()
      
        
    
            
