/*
	551. Student Attendance Record I
You are given a string representing an attendance record for a student. The record only contains the following three characters:
'A' : Absent.
'L' : Late.
'P' : Present.
A student could be rewarded if his attendance record doesn't contain more than one 'A' (absent) or more than two continuous 'L' (late).

You need to return whether the student could be rewarded according to his attendance record.

Example 1:

Input: "PPALLP"
Output: True
Example 2:

Input: "PPALLL"
Output: False
*/
bool checkRecord(char * s){
	int slen = strlen(s);
	int A=0, L=0;
	// go through the record
	for(int i=0;i<slen;i++){
		if(s[i]=='A')
			{A++; if(A>1) return false; }
		else if(s[i]=='L')
			{L++; if(L>2) return false; }
		else L = 0;
	}
	return true;
}
/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Student Attendance Record I.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Student Attendance Record I.
*/





