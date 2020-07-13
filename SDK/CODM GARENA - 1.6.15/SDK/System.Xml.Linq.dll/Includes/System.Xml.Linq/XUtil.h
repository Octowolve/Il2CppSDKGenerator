#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Linq {

class XUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.Linq.dll", "System.Xml.Linq", "XUtil"));
	}


	template <typename T = Il2CppString*> static T ToString(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51C33F8))(0, o);
	}
	template <typename T = uintptr_t> static T ExpandArray(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51C4C44))(0, o);
	}
	template <typename T = uintptr_t> static T ToNode(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51C4CF4))(0, o);
	}
	template <typename T = uintptr_t> static T GetDetachedObject(uintptr_t child) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51C5094))(0, child);
	}
	template <typename T = uintptr_t> static T Clone(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51CE038))(0, o);
	}

};

}
