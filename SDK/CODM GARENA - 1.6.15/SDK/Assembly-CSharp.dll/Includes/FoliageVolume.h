#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageVolume"));
	}

	template <typename T = uintptr_t> T& m_color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawTriggerGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(FoliageVolume*))(Il2CppBase() + 0x3CD8828))(this);
	}
	template <typename T = void> T DrawTriggerGizmos() {
		return ((T (*)(FoliageVolume*))(Il2CppBase() + 0x3CD88D8))(this);
	}
	template <typename T = bool> T InVolume(Il2CppVector3 position) {
		return ((T (*)(FoliageVolume*, Il2CppVector3))(Il2CppBase() + 0x3CD8F64))(this, position);
	}

};

}
