#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPMonsterDropGoldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPMonsterDropGoldInfo"));
	}

	template <typename T = uintptr_t> T& m_EMonsterType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_DropGoldCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_DropGoldProbability() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_EMonsterType() {
		return ((T (*)(MPMonsterDropGoldInfo*))(Il2CppBase() + 0x4615B04))(this);
	}
	template <typename T = int32_t> T get_DropGoldCount() {
		return ((T (*)(MPMonsterDropGoldInfo*))(Il2CppBase() + 0x4615B0C))(this);
	}
	template <typename T = int32_t> T get_DropGoldProbability() {
		return ((T (*)(MPMonsterDropGoldInfo*))(Il2CppBase() + 0x4615B14))(this);
	}

};

}
