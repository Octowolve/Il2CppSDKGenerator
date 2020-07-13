#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class PVPStorageScorestreakRankView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "PVPStorageScorestreakRankView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RankList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ScoreRankListGrid() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T ShowName(bool flag) {
		return ((T (*)(PVPStorageScorestreakRankView*, bool))(Il2CppBase() + 0x4A32AA4))(this, flag);
	}

};

}
