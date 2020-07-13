#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SingleSettlementItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SingleSettlementItem"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& LabelScore() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& LabelKD() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LabelAccuracy() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& LabelKill() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LabelCombo() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelTexts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(uintptr_t psd, int32_t rank, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(SingleSettlementItem*, uintptr_t, int32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x29818D4))(this, psd, rank, matchGuid, gameMode);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo, uintptr_t gameMode) {
		return ((T (*)(SingleSettlementItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2981DE4))(this, playerInfo, gameMode);
	}
	template <typename T = void> T SetLabelTexts(uintptr_t psd, int32_t curRank) {
		return ((T (*)(SingleSettlementItem*, uintptr_t, int32_t))(Il2CppBase() + 0x29819D8))(this, psd, curRank);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SingleSettlementItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29820DC))(this, P0, P1);
	}

};

}
