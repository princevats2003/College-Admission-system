void provideroll()
{
   printf("Your roll no. is : %ld\n",s.roll);
   fprintf(data,"Your roll is : ");
   fprintf(data,"%ld",s.roll);
   fprintf(data,"\n");
   s.roll++;
 }
void updatetofile()
{
data = fopen("name.txt", "a");
	fprintf(data, "%s ", s.name);
	fprintf(data, "%d ", s.marks);
	fprintf(data,"%s ",s.mobile);
	fprintf(data, "%s ",s.email);
	fprintf(data,"%ld",s.roll);
	fprintf(data, "\n ");
 }