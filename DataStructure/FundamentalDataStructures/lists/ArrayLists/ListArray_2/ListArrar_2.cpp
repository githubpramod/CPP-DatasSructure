#include<iostream>
#include<string>
using namespace std;

template<class item> class AList {
        private:
                int listSize;
                int maxSize;
                int fence;
                item* listArray;
        public:
                AList(int size = 100){
                        maxSize = size;
                        listSize = fence = 0;
                        listArray = new item[maxSize];
                }
                ~AList(){
                        delete [] listArray;
                }
                bool insert(const item& data){
                        if(listSize == maxSize) return false;
                        for(int i=listSize;i<fence;i--)
                                listArray[i] = listArray[i-1];
			listArray[fence]=data;
                        listSize++;
                        return true;

                }
		bool append(const item& data){
			if(listSize == maxSize) return false;
			listArray[listSize++]=data;
			return false;
		}
		void setStart(){
			fence=0;
		}
		void setEnd(){
			fence=listSize;
		}
		void prev(){
			if(fence!=0)
				fence--;
		}
		void next(){
			if(fence<listSize)
				fence++;
		}
		int leftLength(){
			return fence;
		}
		int rightLength(){
			return listSize-fence;
		}
		bool setPos(int pos){
			if((pos>0)&&(pos<=listSize))
				fence=pos;
			return ((pos>0)&&(pos<=listSize));
		}
		bool getValue(const int& val){
			if(rightLength()==0) return false;
			else{val=listArray[fence];}
		}
		void clear(){
			delete [] listArray;
			fence=listSize=0;
			listArray=new item[maxSize];
		}
		bool remove(int& val){
			if(rightLength()==0)
				return false;
			val=listArray[fence];
			for(int i=fence;i<listSize-1;i++)
				listArray[i]=listArray[i+1];
			fence--;
			return true;
		}
		void print(){
		
			int temp=0;
			cout<<"< ";
			while(temp<fence) cout<<listArray[temp++]<<" ";
			cout<<"! ";
			while(temp<listSize) cout<<listArray[temp++]<<" ";
			cout<<">\n ";
		}
};


int main(int argc, char** argv) {
	cout << "List Main Start!!!" << endl;
	AList<int> l1(30);
	AList<string> l2(30);
	//AList<item*> l1(20);
	
	l1.insert(3);
	l1.insert(5);
	l1.insert(67);
	l1.insert(34);
	l1.insert(1);
	l1.insert(59);
	l1.print();
	cout << "Set the fence position!!!" <<endl;
	l1.setPos(2);
	l1.print();
	l1.insert(4);
	l1.print();
	l1.append(100);
	l1.print();
	l1.insert(300);
	l1.insert(551);
	l1.insert(677);
	cout << "set the fence one position back!!" <<endl;
	l1.prev();
	l1.print();
	l1.insert(304);
	l1.insert(10);
	cout << "set the fence next position" <<endl;
	l1.next();
	l1.print();
	l1.insert(590);
	l1.print();
	cout << "set fence at starting position!!" <<endl;
	l1.setStart();
	l1.print();
	cout << "set fence at end position!!!" <<endl;
	l1.setEnd();
	l1.print();
	cout<<"leftLength"<<l1.leftLength()<<endl;
	cout<<"rightLength"<<l1.rightLength()<<endl;
	
	out<<"Obj2!!"<<endl;
	l1.insert("Dhar");
	/*c	l1.insert("ram");
	l1.insert("George");
	l1.insert("Andrea");
	l1.insert("Saj");
	l1.insert("Sun");
	l1.print();
	cout << "Set the fence position!!!" <<endl;
	l1.setPos("Sun");
	l1.print();
	l1.insert("Dharm");
	l1.print();
	l1.append("Roland");
	l1.print();
	l1.insert("jokim");
	l1.insert("Dennis");
	l1.insert("Deniel");
	cout << "set the fence one position back!!" <<endl;
	l1.prev();
	l1.print();
	l1.insert("Dana");
	l1.insert("Luips");
	cout << "set the fence next position" <<endl;
	l1.next();
	l1.print();
	l1.insert("Adina");
	l1.print();
	cout << "set fence at starting position!!" <<endl;
	l1.setStart();
	l1.print();
	cout << "set fence at end position!!!" <<endl;
	l1.setEnd();
	l1.print();
	cout<<"leftLength"<<l1.leftLength()<<endl;
	cout<<"rightLength"<<l1.rightLength()<<endl;
	*/
	return 0;
}
