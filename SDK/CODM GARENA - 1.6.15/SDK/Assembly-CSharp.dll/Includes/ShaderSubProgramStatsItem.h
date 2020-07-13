#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderSubProgramStatsItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShaderSubProgramStatsItem"));
	}

	template <typename T = Il2CppString*> T& shaderName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& passType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& keywords() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& matching() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ShaderSubProgramStatsItem*, uintptr_t))(Il2CppBase() + 0x3C6F37C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(ShaderSubProgramStatsItem*, uintptr_t))(Il2CppBase() + 0x3C6F4BC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ShaderSubProgramStatsItem*))(Il2CppBase() + 0x3C6F5E0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(ShaderSubProgramStatsItem*, uintptr_t))(Il2CppBase() + 0x3C6F6A0))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(ShaderSubProgramStatsItem*))(Il2CppBase() + 0x3C6F758))(this);
	}

};

}
