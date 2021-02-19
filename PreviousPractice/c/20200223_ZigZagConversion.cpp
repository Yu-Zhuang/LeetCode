/*
if input="ABCDEFGHI" , numRows=3 ;

the structure can be seen like this:
start: A ~ E ~ I
medi: B D F H ~
e n d: C -~G ~ ~

so i write the function of start(), medi(), end() to solve it.
*/
char * convert(char * s, int numRows){
	if (numRows == 1) return s;
	int sSize=0; while(s[sSize]) sSize++;
	int max=sSize, insert=0;
	char *ret=(char*)malloc(sizeof(char)*(sSize+1));
	ret[sSize]='\0';

    insert=start(s, ret, numRows, max, insert);
	insert=medium(s, ret, numRows, max, insert);
    end(s, ret, numRows, max, insert);

	return ret;
}
int start(char *refer, char *str, int n, int max, int insert){
	int x=0;
	while(x*(2*n-2) < max){
		str[insert] = refer[x*(2*n-2)];
		insert++; x++;
	}
	return insert;
}
int medium(char *refer, char *str, int n, int max, int insert){
	int i=1, x=0, y=1;
	while(i != n-1){
        x=0; y=1;
		while((i+x*(2*n-2)) <max || (y*(2*n-2)-i) < max){
			if((i+x*(2*n-2)) < max){
				str[insert] = refer[i+x*(2*n-2)];
				insert++;
			}
			if((y*(2*n-2)-i) < max){
				str[insert] = refer[y*(2*n-2)-i];
				insert++;
			}
			x++; y++;
		}
		i++;
	}
	return insert;
}
void end(char *refer, char *str, int n, int max, int insert){
	int x=0, i=n-1;
	while(i+x*(2*n-2) < max){
		str[insert] = refer[i+x*(2*n-2)];
		insert++; x++;
	}
}
/*
6. ZigZag Conversion
medium

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I
*/