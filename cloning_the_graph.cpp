#include <bits/stdc++.h> 
using namespace std;
// /***************************************************************************

	// Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}
       graphNode(int val, vector<graphNode*> neighbours) {

    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
       }
	};

// ******************************************************************************/

graphNode *cloneGraph(graphNode *node)
{
    // create a graphNode copy_node
	graphNode* copy_node;
	unordered_map<graphNode*,graphNode*> um; // create an unordered_map
	// if node is not null
	if(node)
	{
       copy_node=new graphNode(node->data);
	   um[node]=copy_node;
	}
	queue<graphNode*> q;
	q.push(node);
	// in this we deals with a original node and create duplicate one
	while(!q.empty()) 
	{
		auto temp=q.front();
		// we take the node of the original graph
		q.pop();
		//traverse its neighbours
		for(auto nb:temp->neighbours)
		{
			// if u wonn't find original element in the array 
			//element at the index level is found through below mentioned function
			if(um.find(nb)==um.end())
			{
			//crated a new node if not created earlier
               graphNode* nen=new graphNode(nb->data);
			//    pushed in the map
			   um[nb]=nen;  // here value contains the created one
			//    pushed in the queue that node
			   q.push(nb);
			}
			// same created node is inserted in the neighbours vector
			// 1-->2<--3 like in this example
		    um[temp]->neighbours.push_back(um[nb]);
		}
	}
	return copy_node;
	


}

int main()
{
    return 0;
}