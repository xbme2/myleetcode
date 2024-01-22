

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *head = new ListNode(0), *tail;
    tail = head;
    int over = 0;
    while (l1 != nullptr || l2 != nullptr || over == 1)
    {
      int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + over;
      over = sum / 10;
      tail->next = new ListNode(sum % 10);
      tail = tail->next;
      if (l1)
        l1 = l1->next;
      if (l2)
        l2 = l2->next;
    }
    return head->next;
  }
};