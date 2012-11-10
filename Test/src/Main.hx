package ;
import neko.Lib;
import neko.io.File;

class Main {
	static function e(str:String)
	{
	Sys.println(str);
	//xcross.Api.message(str);
	//Sys.print(str);
	//Lib.print(str);
	//Lib.println(str);
	}

   static function main() {
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