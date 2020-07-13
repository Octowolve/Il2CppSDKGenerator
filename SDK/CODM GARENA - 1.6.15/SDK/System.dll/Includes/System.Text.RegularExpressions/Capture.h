#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Capture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Capture"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(Capture*))(Il2CppBase() + 0x4AD1948))(this);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(Capture*))(Il2CppBase() + 0x4AD1950))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(Capture*))(Il2CppBase() + 0x4AD1958))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Capture*))(Il2CppBase() + 0x4AD1A24))(this);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(Capture*))(Il2CppBase() + 0x4AD1A28))(this);
	}

};

}
