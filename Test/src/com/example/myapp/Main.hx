package com.example.myapp;

import haxe.io.Eof;
import sys.io.File;
import sys.io.Process;
import nme.display.Sprite;
import nme.events.Event;
import nme.Lib;

/**
 * ...
 * @author Peteragent5
 */

class Main extends Sprite 
{
	static function e(str:String)
	{
	Sys.println(str);
	//xcross.Api.message(str);
	//Sys.print(str);
	//Lib.print(str);
	//Lib.println(str);
	}
	
	public function new() 
	{
		super();
		#if iphone
		Lib.current.stage.addEventListener(Event.RESIZE, init);
		#else
		addEventListener(Event.ADDED_TO_STAGE, init);
		#end
	}

	private function init(e) 
	{
		// entry point
		
		// new to Haxe NME? please read *carefully* the readme.txt file!
	}
	
	static public function main() 
	{
		var stage = Lib.current.stage;
		stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		stage.align = nme.display.StageAlign.TOP_LEFT;
		
		Lib.current.addChild(new Main());
	  //Sys.command("cmd", ["/C clear"] );
	  e("");
	  Sys.println(" " + Sys.executablePath() );
	  e(" Operating system: " + Sys.systemName() );
	  e("");
      //Store the date
      var date = Date.now();
	  var hour = date.getHours() - 12;
      //Concatenate a message with the two elements from the date
      e(" Time is: " + (hour) + ":" + date.getMinutes() ); //Std.string( date.getMinutes() ));
	  
	  e("");
	  // The User Input ==============
      Sys.print(" Please enter your name: "); //Print a prompt
      var name = Sys.stdin().readLine(); //Read the answer
	  (if (name == "") Sys.command( Sys.executablePath() ) );
	  // The User Input ==============
	  
      //Print the welcome message
	  e("");
      e(" Welcome to my file, " + name );
	  
	  //exit with code 0
	  e("");
      Sys.print(" Press [Enter] to continue . . . ");
      var a = Sys.stdin().readLine();
	  var a = null;
	  //Sys.exit(0);
	}
	
}
