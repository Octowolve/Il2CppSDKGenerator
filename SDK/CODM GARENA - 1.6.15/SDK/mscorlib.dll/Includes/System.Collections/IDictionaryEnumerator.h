#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IDictionaryEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IDictionaryEnumerator"));
	}


	template <typename T = uintptr_t> T get_Entry() {
		return ((T (*)(IDictionaryEnumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Key() {
		return ((T (*)(IDictionaryEnumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(IDictionaryEnumerator*))(Il2CppBase() + 0x0))(this);
	}

};

}
