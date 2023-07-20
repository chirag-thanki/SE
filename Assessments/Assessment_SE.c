int main()
{
	int i=1;
	while(i!=0)
	{
	int choice;
	printf("Main Menu:\t");
	printf("\n\t1.Reverse a string");
	printf("\n\t2.Concatenation");
	printf("\n\t3.Palindrome");
	printf("\n\t4.Copy a string");
	printf("\n\t5.Length of the string");
	printf("\n\t6.Frequency of character in s string");
	printf("\n\t7.Find number of vowels, consonants, blank spaces and digits");
	
	printf("\n\nPlease enter a choice:");
	scanf("%d", &choice);
	if(choice==1)
		{
		printf("1.Reverse");
		char string1[20]; // declare the size of character string  
    	printf ("\n Enter a string to be reversed:");  
    	scanf ("%s", &string1);  
    	// using the strrev() function to reverse a string  
    	printf("After Reverse: %s\n\n", strrev(string1));
		}
		
	else if(choice==2)
		{
		printf("2.Concatenation");
		char str1[20], str2[20];
		printf("\nEnter two strings(Format-str1 str2): ");
		scanf("%s %s",&str1,&str2);
		printf("%s", strcat(str1,str2)); 
		}
	
	else if(choice==3)
		{
		printf("3.Palindrome");
		char a[100], b[100];
		char palindrome;
		printf("\nEnter a string to check whether it is a palindrome or not?: ");
		scanf("%s", &palindrome);
//		gets(a);
		strcpy(b,a);
		strrev(b);
			if(strcmp(a,b)==0)
			printf("The string is a palidrome.\n");
			else
			printf("The string isn't a palidrome.\n");
		}	
		
	else if(choice==4)
	{
		char str1[20];
 		char str2[20];
 		printf("Enter a string:");
		scanf("%s", &str1);
  		// copying str1 to str2
  		strcpy(str2, str1);
		printf("Copied string: %s", str2);
	}
		
	else if(choice==5)
	{
		char length[200];
		printf("Enter a string:");
		scanf("%s", &length);
		printf("Length of the string is: %zu",strlen(length));
	}
	
	else if(choice==6)
	{
	 char str[1000], ch, stdin;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
	int b;
	b=0;
    for (b; str[b] !='\0'; ++b) 
		{
        if (ch == str[b])
            ++count;
    	}
    printf("Frequency of %c = %d", ch, count);
    return 0;
    }
    
    else if(choice==7)
	{
		char line[150];
  		int vowels, consonant, digit, space, stdin1;

  		// initialize all variables to 0
  		vowels = consonant = digit = space = 0;

  		// get full line of string input
  		printf("Enter a line of string: ");
  		fgets(line, sizeof(line), stdin1);

  		// loop through each character of the string
 		 int d;
  		d=0;
  		for (d; line[d] != '\0'; ++d) {

    // convert character to lowercase
    line[d] = tolower(line[d]);

    // check if the character is a vowel
    if (line[d] == 'a' || line[d] == 'e' || line[d] == 'i' ||
        line[d] == 'o' || line[d] == 'u') {

      // increment value of vowels by 1
      ++vowels;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if ((line[d] >= 'a' && line[d] <= 'z')) {
      ++consonant;
    }

    // check if the character is a digit
    else if (line[d] >= '0' && line[d] <= '9') {
      ++digit;
    }

    // check if the character is an empty space
    else if (line[d] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);
	}

	}
//Below non touchable
	printf("\nDo you want to continue? \nPress-1 to continue...\nPress-0 to exit \n");
	scanf("%d",&i);
}

