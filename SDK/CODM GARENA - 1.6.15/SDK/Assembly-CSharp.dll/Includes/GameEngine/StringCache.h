#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class StringCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "StringCache"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_cache_dict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIntern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Intern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T get_cacheDict() {
		return ((T (*)(StringCache*))(Il2CppBase() + 0x3404334))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(StringCache*))(Il2CppBase() + 0x340433C))(this);
	}
	template <typename T = bool> T Contains(Il2CppString* str) {
		return ((T (*)(StringCache*, Il2CppString*))(Il2CppBase() + 0x34043D4))(this, str);
	}
	template <typename T = bool> T IsIntern(Il2CppString* str) {
		return ((T (*)(StringCache*, Il2CppString*))(Il2CppBase() + 0x3404484))(this, str);
	}
	template <typename T = Il2CppString*> T Intern(Il2CppString* str) {
		return ((T (*)(StringCache*, Il2CppString*))(Il2CppBase() + 0x3404564))(this, str);
	}
	template <typename T = Il2CppString*> T Get(Il2CppString* str) {
		return ((T (*)(StringCache*, Il2CppString*))(Il2CppBase() + 0x34046A8))(this, str);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(StringCache*))(Il2CppBase() + 0x3404758))(this);
	}

};

}
