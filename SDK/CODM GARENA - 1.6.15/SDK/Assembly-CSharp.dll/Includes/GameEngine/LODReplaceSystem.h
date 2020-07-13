#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LODReplaceSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LODReplaceSystem"));
	}

	template <typename T = uintptr_t> static T& m_GlobalStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& m_CachedList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLODZeroReplace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T Register(uintptr_t lodRB) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A28FC))(0, lodRB);
	}
	template <typename T = void> static T UnRegister(uintptr_t lodRB) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A2758))(0, lodRB);
	}
	template <typename T = void> T ApplyLODZeroReplace(uintptr_t toStatus) {
		return ((T (*)(LODReplaceSystem*, uintptr_t))(Il2CppBase() + 0x24A3348))(this, toStatus);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LODReplaceSystem*))(Il2CppBase() + 0x24A3634))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(LODReplaceSystem*))(Il2CppBase() + 0x24A3708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(LODReplaceSystem*))(Il2CppBase() + 0x24A3904))(this);
	}

};

}
