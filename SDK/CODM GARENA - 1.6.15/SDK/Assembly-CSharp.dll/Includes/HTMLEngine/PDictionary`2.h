#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class PDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "PDictionary`2"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& dict() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnAcquire() {
		return ((T (*)(PDictionary2*))(Il2CppBase() + 0x4B5684C))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(PDictionary2*))(Il2CppBase() + 0x4B568C8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PDictionary2*))(Il2CppBase() + 0x4B56974))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PDictionary2*))(Il2CppBase() + 0x4B56A20))(this);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(PDictionary2*))(Il2CppBase() + 0x4B56A58))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(PDictionary2*))(Il2CppBase() + 0x4B56A90))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(PDictionary2*, uintptr_t))(Il2CppBase() + 0x4B56AC8))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(PDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B56BD0))(this, key, value);
	}

};

}
