
int dataTypes(string type) {
	if(type=="Integer"){
	return sizeof(int);
	}
	else if (type=="Long"){
	return sizeof(long);
	}
	else if(type=="Float"){
	return sizeof(float);
	}
	else if(type=="Character"){
	return sizeof(char);
	}
	else if(type=="Double"){
	return sizeof(double);
	}
}