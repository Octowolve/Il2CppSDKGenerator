#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class LinkStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "LinkStack"));
	}

	template <typename T = uintptr_t> T& stack() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Push() {
		return ((T (*)(LinkStack*))(Il2CppBase() + 0x4AD9B84))(this);
	}
	template <typename T = bool> T Pop() {
		return ((T (*)(LinkStack*))(Il2CppBase() + 0x4AD9BD0))(this);
	}
	template <typename T = uintptr_t> T GetCurrent() {
		return ((T (*)(LinkStack*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetCurrent(uintptr_t l) {
		return ((T (*)(LinkStack*, uintptr_t))(Il2CppBase() + 0x0))(this, l);
	}

};

}
