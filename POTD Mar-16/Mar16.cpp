
geeksforgeeks
V
My Profile
My Courses
Leaderboard
Go Premium
Transaction History
Saved Videos
Edit Profile
Logout
Courses
DSA to Development
Coding for Everyone
For Working Professionals
For Students
GATE Exam Courses
For School Students
All Courses
Tutorials
Data Structures & Algorithms
Python
ML & Data Science
System Design
Interview Corner
Languages
Web Development
CS Subjects
DevOps
Linux
School Learning
Commerce
GATE
UPSC and SSC/Banking
GeeksforGeeks Videos
Jobs
Get Hired: Apply for Jobs
Corporate Hiring Solutions
Practice
All DSA Problems
Problem of the Day
Company Wise Coding Practice
GfG SDE Sheet
Practice Problems Difficulty Wise
Language Wise Coding Practice
Curated DSA Lists
Contests
Job-A-Thon Hiring Challenge
Get Internship via GfG Weekly
All Contests and Events


Change Language
Menu


Refresh

Time (IST)	Status	Lang	Test Cases	Code
2024-03-16 11:21:54	Correct	cpp	1115 / 1115	View
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       Node *curr=del_node;
       curr->data=curr->next->data;
       curr->next=curr->next->next;
       
    }

};