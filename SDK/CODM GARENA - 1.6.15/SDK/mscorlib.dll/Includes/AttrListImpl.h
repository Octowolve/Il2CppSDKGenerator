#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttrListImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "AttrListImpl"));
	}

	template <typename T = uintptr_t> T& attrNames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& attrValues() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_Length() {
		return ((T (*)(AttrListImpl*))(Il2CppBase() + 0x3FC70E4))(this);
	}
	template <typename T = Il2CppString*> T GetName(int32_t i) {
		return ((T (*)(AttrListImpl*, int32_t))(Il2CppBase() + 0x3FC7118))(this, i);
	}
	template <typename T = Il2CppString*> T GetValue(int32_t i) {
		return ((T (*)(AttrListImpl*, int32_t))(Il2CppBase() + 0x3FC72B8))(this, i);
	}
	template <typename T = Il2CppString*> T GetValue_1(Il2CppString* name) {
		return ((T (*)(AttrListImpl*, Il2CppString*))(Il2CppBase() + 0x3FC7458))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Names() {
		return ((T (*)(AttrListImpl*))(Il2CppBase() + 0x3FC77A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Values() {
		return ((T (*)(AttrListImpl*))(Il2CppBase() + 0x3FC78B8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AttrListImpl*))(Il2CppBase() + 0x3FC6B5C))(this);
	}
	template <typename T = void> T Add(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(AttrListImpl*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FC7088))(this, name, value);
	}

};

}
