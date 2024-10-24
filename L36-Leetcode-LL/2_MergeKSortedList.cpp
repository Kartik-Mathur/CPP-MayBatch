#define node ListNode
#define pin pair<int,node*>
class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		priority_queue < pin, vector< pin >, greater< pin > > q;

		for (int i = 0 ; i < lists.size() ; i++) {
			if (lists[i]) {
				q.push({lists[i]->val, lists[i]});
			}
		}
		node* nH, *nT;
		nH = nT = new node();

		while (!q.empty()) {
			pin x = q.top();

			nT->next = new node(x.first);
			nT = nT->next;

			q.pop();
			if (x.second->next) {
				q.push({x.second->next->val, x.second->next});
			}
		}

		return nH->next;
	}
};