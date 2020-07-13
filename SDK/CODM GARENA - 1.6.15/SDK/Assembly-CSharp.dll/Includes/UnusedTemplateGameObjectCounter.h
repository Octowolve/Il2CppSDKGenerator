#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnusedTemplateGameObjectCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnusedTemplateGameObjectCounter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& unused_names() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& insert_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& kDefaultCacheCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& onDestroy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Add(Il2CppString* name) {
		return ((T (*)(UnusedTemplateGameObjectCounter*, Il2CppString*))(Il2CppBase() + 0x422B948))(this, name);
	}
	template <typename T = void> T Remove(Il2CppString* name) {
		return ((T (*)(UnusedTemplateGameObjectCounter*, Il2CppString*))(Il2CppBase() + 0x422BF50))(this, name);
	}
	template <typename T = void> T DestroyAll() {
		return ((T (*)(UnusedTemplateGameObjectCounter*))(Il2CppBase() + 0x422C070))(this);
	}
	template <typename T = void> T DestroyAt(int32_t index) {
		return ((T (*)(UnusedTemplateGameObjectCounter*, int32_t))(Il2CppBase() + 0x422BDB8))(this, index);
	}
	template <typename T = int32_t> T Find(Il2CppString* name) {
		return ((T (*)(UnusedTemplateGameObjectCounter*, Il2CppString*))(Il2CppBase() + 0x422BBFC))(this, name);
	}

};

}
