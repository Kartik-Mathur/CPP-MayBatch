#define node ListNode
class Solution {
public:

	node* reverse(node* head, int k) {
		node* c = head, *p = NULL, *n;
		for (int i = 0; i < k; ++i)
		{
			n = c->next;
			c->next = p;
			p = c;
			c = n;
		}

		return p;
	}

	ListNode* reverseKGroup(ListNode* head, int k) {

		node* og = NULL, pt = NULL;
		node* temp = head;
		while (temp) {
			// To ensure ki memory leak na ho
			int i = 0;
			while (i < k and temp) {
				temp = temp->next;
				i++;
			}

			if (i == k) { // To ensure there are k nodes available to reverse
				// Now reverse the K nodes
				node* nH = reverse(head, k);
				if (og == NULL) og = nH;
				if (pt) pt->next = nH;
				pt = head;
				head->next = t;
				head = t;
			}

		}

		return og;
	}
};















