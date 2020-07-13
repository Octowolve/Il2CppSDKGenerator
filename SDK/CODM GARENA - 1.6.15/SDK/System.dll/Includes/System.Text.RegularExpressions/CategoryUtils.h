#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class CategoryUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "CategoryUtils"));
	}


	template <typename T = uintptr_t> static T CategoryFromName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AD1BD0))(0, name);
	}
	template <typename T = bool> static T IsCategory(uintptr_t cat, char c) {
		return ((T (*)(void *, uintptr_t, char))(Il2CppBase() + 0x4AD1E78))(0, cat, c);
	}
	template <typename T = bool> static T IsCategory_1(uintptr_t uc, char c) {
		return ((T (*)(void *, uintptr_t, char))(Il2CppBase() + 0x4AD2C40))(0, uc, c);
	}

};

}
