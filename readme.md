Lion seeker; Open-Source Mass SQL Injection Checker
This program is not live yet. This is our initial launch to make it open source. Check the beta development branch for live(and potentially unstable) commits.
IRC: We use freenode. Check us out at #lionseeker
We would greatly appreciate any help we could get. The more help we have, the faster we can get this launched. The core team is also fairly new into programming, so we will gladly accept beginners, but you must be willing to learn, and use our proper code structure. 
LionSeeker is a mass SQL Injection Checker. Its goals is to test websites for basic SQL vulnerabilities. 
Note: This is not a tool for hacking websites, merely it is designed to show you the vulnerabilities of many websites. You will have to use another tool to actually do automated SQL injection. That is not in the philosophy of our product nor do we wish to implement such things.
	Core Commands
-	H
The help command will allow the user to get help information. Such as: Contact, IRC and Email. 

-	S # 
# represents a number.  Ex –S 10 would equate to allowing the user to enter 10 websites to check. 

Initial Structure of BETA

Lionseeker.py- this will be the core of the program 

Checker.py- This will do all the dirty work of checking. 

Rely.py – This will get the information from checker.py and format it nicely for the user to see the results of each site in command line. 
