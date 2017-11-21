/*
6.33
*/
int Visit(int u£¬int v) {
	if(u==v) return 1;
	if(L(v)==0) {
		if(R[v]==0) return 0;
		else {
			if(Visit(u,R[v])) return 1;
			else return 0;
		}
	} else {
		if(Visit(u,L[v])) return 1;
		else {
			if(R[v]==0) return 0;
			else {
				if(Vist(u,R[v])) return 1;
				else return 0;
			}
		}

	}
} 

/*
6.42
*/
Status POLeafNodeNum(int &i,BiTree &T) {
	if(T) {
		if(!T->lchild && T->rchild) i++;
		POLeafNodeNum(i,T->lchild);
		POLeafNodeNum(i,T->rchild);
	}
	return OK;
}
