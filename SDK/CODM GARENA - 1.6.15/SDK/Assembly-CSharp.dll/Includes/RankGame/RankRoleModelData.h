#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankRoleModelData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankRoleModelData"));
	}

	template <typename T = uintptr_t> T& player_bag_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& loadoutBagInfoDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerBagList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetPlayerBagList(Il2CppList<uintptr_t>* list) {
		return ((T (*)(RankRoleModelData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x381271C))(this, list);
	}

};

}
