import java.util.*;
import java.lang.*;
import java.io.*;
class node{
	int data;
	node next;
	node(int n){
		data=n;
		next=null;
	}
}
class Ideone
{
	void display(node temp)
	{
		while(temp!=null){
			System.out.print(temp.data+"\t");
			temp=temp.next;
		}
	}
	public static void main (String[] args)
	{
		node head,one,two,three;
		head=new node(1);
		one=new node(2);
		two=new node(3);
		three=new node(4);
		head.next=one;
		one.next=two;
		two.next=three;
		three.next=null;
		Ideone Ob=new Ideone();
		Ob.display(head);
	}
}
