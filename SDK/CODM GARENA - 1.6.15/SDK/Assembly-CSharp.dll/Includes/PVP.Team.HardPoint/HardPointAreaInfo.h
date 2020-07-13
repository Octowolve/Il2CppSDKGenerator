#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HardPointAreaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HardPointAreaInfo"));
	}

	template <typename T = int32_t> T& m_AreaID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_HPState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_OccupyTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(HardPointAreaInfo*))(Il2CppBase() + 0x402A0E8))(this);
	}
	template <typename T = uintptr_t> T get_HPState() {
		return ((T (*)(HardPointAreaInfo*))(Il2CppBase() + 0x402A0F0))(this);
	}
	template <typename T = int32_t> T get_OccupyTime() {
		return ((T (*)(HardPointAreaInfo*))(Il2CppBase() + 0x402A0F8))(this);
	}
	template <typename T = void> T Set(int32_t areaID, uintptr_t state, int32_t occupyTime) {
		return ((T (*)(HardPointAreaInfo*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x402A100))(this, areaID, state, occupyTime);
	}

};

}
