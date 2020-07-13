#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttrList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "IAttrList"));
	}


	template <typename T = int32_t> T get_Length() {
		return ((T (*)(IAttrList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetName(int32_t i) {
		return ((T (*)(IAttrList*, int32_t))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename T = Il2CppString*> T GetValue(int32_t i) {
		return ((T (*)(IAttrList*, int32_t))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename T = Il2CppString*> T GetValue_1(Il2CppString* name) {
		return ((T (*)(IAttrList*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Names() {
		return ((T (*)(IAttrList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Values() {
		return ((T (*)(IAttrList*))(Il2CppBase() + 0x0))(this);
	}

};

}
