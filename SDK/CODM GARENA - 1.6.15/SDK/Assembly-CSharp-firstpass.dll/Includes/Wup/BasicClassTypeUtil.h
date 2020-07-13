#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup {

class BasicClassTypeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup", "BasicClassTypeUtil"));
	}


	template <typename T = Il2CppString*> static T TransTypeList(Il2CppList<Il2CppString*>* listTpye) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4F81D10))(0, listTpye);
	}
	template <typename T = uintptr_t> static T CreateObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E75034))(0);
	}
	template <typename T = uintptr_t> static T CreateObject_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F82774))(0, type);
	}
	template <typename T = uintptr_t> static T CreateListItem(uintptr_t typeList) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4F82E1C))(0, typeList);
	}
	template <typename T = Il2CppString*> static T CS2UniType(Il2CppString* srcType) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4F823E4))(0, srcType);
	}
	template <typename T = bool> static T IsQDictionary(Il2CppString* cls) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4F82E74))(0, cls);
	}

};

}
