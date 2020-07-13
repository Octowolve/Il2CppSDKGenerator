#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class PIgnoreCaseDictionary1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "PIgnoreCaseDictionary`1"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& dict() {
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
		return ((T (*)(PIgnoreCaseDictionary1*))(Il2CppBase() + 0x4B56CE0))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(PIgnoreCaseDictionary1*))(Il2CppBase() + 0x4B56D5C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PIgnoreCaseDictionary1*))(Il2CppBase() + 0x4B56E08))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PIgnoreCaseDictionary1*))(Il2CppBase() + 0x4B56EB4))(this);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(PIgnoreCaseDictionary1*))(Il2CppBase() + 0x4B56EEC))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(PIgnoreCaseDictionary1*))(Il2CppBase() + 0x4B56F24))(this);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* key) {
		return ((T (*)(PIgnoreCaseDictionary1*, Il2CppString*))(Il2CppBase() + 0x4B56F5C))(this, key);
	}
	template <typename T = void> T set_Item(Il2CppString* key, uintptr_t value) {
		return ((T (*)(PIgnoreCaseDictionary1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B5706C))(this, key, value);
	}

};

}
