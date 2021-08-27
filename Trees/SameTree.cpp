bool isIdentical(Node *p, Node *q)
    {
        //Your Code here
        
        
       queue<pair<Node *, Node *>> que;
        que.push({p, q});
        while (!que.empty()) {
            Node* node1 = que.front().first;
            Node* node2 = que.front().second;
            que.pop();
            if (!node1 && !node2)
                continue;
            else if (!node1 || !node2)
                return false;
            else {
                if (node1->data != node2->data) return false;
                que.push({node1->left, node2->left});
                que.push({node1->right, node2->right});
            }
        }
        return true;
    }
