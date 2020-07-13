#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPRewardLevelDropInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPRewardLevelDropInfo"));
	}

	template <typename T = int32_t> T& m_MaxGoldCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& m_GoldScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_MonsterDropGoldInfoDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDropGoldCountByMonsterID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_MaxGoldCount() {
		return ((T (*)(MPRewardLevelDropInfo*))(Il2CppBase() + 0x4624F58))(this);
	}
	template <typename T = unsigned char> T get_GoldScale() {
		return ((T (*)(MPRewardLevelDropInfo*))(Il2CppBase() + 0x4624F60))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_MonsterDropGoldInfoDic() {
		return ((T (*)(MPRewardLevelDropInfo*))(Il2CppBase() + 0x4624F68))(this);
	}
	template <typename T = int32_t> T GetDropGoldCountByMonsterID(int32_t inMonsterID) {
		return ((T (*)(MPRewardLevelDropInfo*, int32_t))(Il2CppBase() + 0x4614210))(this, inMonsterID);
	}

};

}
