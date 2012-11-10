#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_com_example_myapp_Main
#include <com/example/myapp/Main.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_display_StageAlign
#include <neash/display/StageAlign.h>
#endif
#ifndef INCLUDED_neash_display_StageScaleMode
#include <neash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
namespace com{
namespace example{
namespace myapp{

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","com/example/myapp/Main.hx",27);
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(32)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( Dynamic e){
{
		HX_STACK_PUSH("Main::init","com/example/myapp/Main.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

Void Main_obj::e( ::String str){
{
		HX_STACK_PUSH("Main::e","com/example/myapp/Main.hx",18);
		HX_STACK_ARG(str,"str");
		HX_STACK_LINE(18)
		::Sys_obj::println(str);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,e,(void))

Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","com/example/myapp/Main.hx",44);
		HX_STACK_LINE(45)
		::neash::display::Stage stage = ::nme::Lib_obj::nmeGetCurrent()->nmeGetStage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(46)
		stage->nmeSetScaleMode(::neash::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_STACK_LINE(47)
		stage->nmeSetAlign(::neash::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_STACK_LINE(49)
		::nme::Lib_obj::nmeGetCurrent()->addChild(::com::example::myapp::Main_obj::__new());
		HX_STACK_LINE(51)
		::com::example::myapp::Main_obj::e(HX_CSTRING(""));
		HX_STACK_LINE(52)
		::Sys_obj::println((HX_CSTRING(" ") + ::Sys_obj::executablePath()));
		HX_STACK_LINE(53)
		::com::example::myapp::Main_obj::e((HX_CSTRING(" Operating system: ") + ::Sys_obj::systemName()));
		HX_STACK_LINE(54)
		::com::example::myapp::Main_obj::e(HX_CSTRING(""));
		HX_STACK_LINE(56)
		::Date date = ::Date_obj::now();		HX_STACK_VAR(date,"date");
		HX_STACK_LINE(57)
		int hour = (date->getHours() - (int)12);		HX_STACK_VAR(hour,"hour");
		HX_STACK_LINE(59)
		::com::example::myapp::Main_obj::e((((HX_CSTRING(" Time is: ") + hour) + HX_CSTRING(":")) + date->getMinutes()));
		HX_STACK_LINE(61)
		::com::example::myapp::Main_obj::e(HX_CSTRING(""));
		HX_STACK_LINE(63)
		::Sys_obj::print(HX_CSTRING(" Please enter your name: "));
		HX_STACK_LINE(64)
		::String name = ::Sys_obj::_stdin()->readLine();		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(65)
		if (((name == HX_CSTRING("")))){
			HX_STACK_LINE(65)
			::Sys_obj::command(::Sys_obj::executablePath(),null());
		}
		HX_STACK_LINE(69)
		::com::example::myapp::Main_obj::e(HX_CSTRING(""));
		HX_STACK_LINE(70)
		::com::example::myapp::Main_obj::e((HX_CSTRING(" Welcome to my file, ") + name));
		HX_STACK_LINE(73)
		::com::example::myapp::Main_obj::e(HX_CSTRING(""));
		HX_STACK_LINE(74)
		::Sys_obj::print(HX_CSTRING(" Press [Enter] to continue . . . "));
		HX_STACK_LINE(75)
		::String a = ::Sys_obj::_stdin()->readLine();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(76)
		Dynamic a1 = null();		HX_STACK_VAR(a1,"a1");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { return e_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("e"),
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.example.myapp.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

} // end namespace com
} // end namespace example
} // end namespace myapp
