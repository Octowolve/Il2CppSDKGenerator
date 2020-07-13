#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SatelliteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SatelliteInfo"));
	}

	template <typename T = Il2CppVector2> T& m_SceneLoc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_TVMapLoc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_DistRatio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLandmarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcDistRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetLandmarkInfo(uintptr_t inInfo) {
		return ((T (*)(SatelliteInfo*, uintptr_t))(Il2CppBase() + 0x30CDA80))(this, inInfo);
	}
	template <typename T = void> T CalcDistRatio(uintptr_t inOther) {
		return ((T (*)(SatelliteInfo*, uintptr_t))(Il2CppBase() + 0x30CDB60))(this, inOther);
	}

};

}
