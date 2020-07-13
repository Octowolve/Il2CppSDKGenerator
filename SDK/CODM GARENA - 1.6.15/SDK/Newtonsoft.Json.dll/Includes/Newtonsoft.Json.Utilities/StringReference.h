#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class StringReference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "StringReference"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _chars() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _startIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& _length() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = char> T get_Item(int32_t i) {
		return ((T (*)(StringReference*, int32_t))(Il2CppBase() + 0x4DFA60C))(this, i);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Chars() {
		return ((T (*)(StringReference*))(Il2CppBase() + 0x4DFA614))(this);
	}
	template <typename T = int32_t> T get_StartIndex() {
		return ((T (*)(StringReference*))(Il2CppBase() + 0x4DFA61C))(this);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(StringReference*))(Il2CppBase() + 0x4DFA624))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StringReference*))(Il2CppBase() + 0x4DFA638))(this);
	}

};

}
