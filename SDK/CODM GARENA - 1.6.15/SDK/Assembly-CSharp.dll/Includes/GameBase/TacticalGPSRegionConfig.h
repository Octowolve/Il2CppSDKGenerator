#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalGPSRegionConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalGPSRegionConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_RegionConfigList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetRegion(Il2CppVector3 pos) {
		return ((T (*)(TacticalGPSRegionConfig*, Il2CppVector3))(Il2CppBase() + 0x30CF0EC))(this, pos);
	}
	template <typename T = bool> static T GetRegionm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30CFF08))(0, it);
	}
	template <typename T = bool> static T GetRegionm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30CFF28))(0, it);
	}

};

}
