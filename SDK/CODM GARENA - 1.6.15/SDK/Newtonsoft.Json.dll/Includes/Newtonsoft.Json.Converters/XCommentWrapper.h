#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XCommentWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XCommentWrapper"));
	}


	template <typename T = uintptr_t> T get_Text() {
		return ((T (*)(XCommentWrapper*))(Il2CppBase() + 0x40953AC))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XCommentWrapper*))(Il2CppBase() + 0x40954DC))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XCommentWrapper*))(Il2CppBase() + 0x4095508))(this);
	}

};

}
