
#include <iostream>
using namespace std;
template<typename T>
struct Node
{
	T val;
	Node* next;
	Node(T val = 0, Node<T>* next = NULL)
	{
		this->val = val;
		this->next = next;
	}
};
template<typename T>
class List
{
	Node<T>* head;
	public:
	List<T>()
	{
		head = NULL;
	}
	void AddEnd(T value )
	{
		if (head == NULL)
			head = new Node<T>(value);
		else {
			Node<T>* pref = head;
			Node<T>* curent = head->next;
			while (curent != NULL) {
				curent = curent->next;
				pref = pref->next;
			}
			curent = new Node<T>(value);
			pref->next = curent;
		}
	}
	Node<T>* getNode() 
	{
		return head;
	}
	int getLeng() 
	{
		int leng = 0;
		Node<T>* current = head;
		while (current!=NULL)
		{
			leng++;
			current = current->next;
		}
		return leng;
	}

};
int main()
{
	List<int>* list = new List<int>();
	list->AddEnd(1);
	list->AddEnd(2);
	list->AddEnd(3);
	list->AddEnd(45);
	cout << list->getLeng()<< endl;

	

}

