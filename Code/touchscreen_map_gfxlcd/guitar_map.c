

char guitar_key_match(int x, int y)
{
	char key_note=0;
	
	if(ISBETWEEN(xmin,x,xmax) && ISBETWEEN(ymin,y,ymax))	//check if it is in logical range of lcd
	{
		if(ISBETWEEN(string1_ymin, y, string1_ymax))	//String 1 Thickest string
			key_note = 0x3C;
		else if(ISBETWEEN(string2_ymin, y, string2_ymax))	//String 2
			key_note = 0x3C;
		else if(ISBETWEEN(string3_ymin, y, string3_ymax))	//String 3
			key_note = 0x3C;
		else if(ISBETWEEN(string4_ymin, y, string4_ymax))	//String 4
			key_note = 0x3C;
		else if(ISBETWEEN(string5_ymin, y, string5_ymax))	//String 5
			key_note = 0x3C;
		else
			key_note=0;
	
	}	
	else	//bound check else
	{
		key_note=0;
	}//end of bound check

	return key_note;
}

