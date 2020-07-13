#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class XTextWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "XTextWrapper"));
	}


	template <typename T = uintptr_t> T get_Text() {
		return ((T (*)(XTextWrapper*))(Il2CppBase() + 0x40A3E44))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(XTextWrapper*))(Il2CppBase() + 0x40A3EC8))(this);
	}
	template <typename T = uintptr_t> T get_ParentNode() {
		return ((T (*)(XTextWrapper*))(Il2CppBase() + 0x40A3EF4))(this);
	}

};

}
