#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalGPSRegionConfigItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalGPSRegionConfigItem"));
	}

	template <typename T = Il2CppString*> T& RegionName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& TransitionRegion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RegionId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MapReplace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Bounds() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Inited() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalGPSRegionConfigItem*))(Il2CppBase() + 0x30D0054))(this);
	}
	template <typename T = bool> T IsPointInSide(Il2CppVector3 point) {
		return ((T (*)(TacticalGPSRegionConfigItem*, Il2CppVector3))(Il2CppBase() + 0x30CFE24))(this, point);
	}

};

}
