#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementRankWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementRankWindowView"));
	}

	template <typename T = uintptr_t> T& LabelStatus() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelModeMapName() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LabelMap() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LabelRound() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& BtnBP() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BtnExpDetail() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BtnGrid() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RankList() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& PVEClassicColor() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& PVEBossColor() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& bAnimationPlayed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& SpriteRoleBuf() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& expBuffView() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSettlementInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetSettlementInfo(uintptr_t ds) {
		return ((T (*)(PVESettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3B370CC))(this, ds);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t ds) {
		return ((T (*)(PVESettlementRankWindowView*, uintptr_t))(Il2CppBase() + 0x3B37BEC))(this, ds);
	}
	template <typename T = bool> static T SetPlayerInfom__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B38D64))(0, s);
	}

};

}
