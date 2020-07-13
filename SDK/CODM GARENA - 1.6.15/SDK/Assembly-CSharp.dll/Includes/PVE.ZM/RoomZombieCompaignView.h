#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class RoomZombieCompaignView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "RoomZombieCompaignView"));
	}

	template <typename T = uintptr_t> T& GridDifficulty() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ToggleNormal() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnNormal() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ToggleHard() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BtnHard() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ToggleHell() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BtnHell() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelRecommendSpi() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& FlowTable() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ChapterSelector() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecommendSpi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDifficultyToggleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateToggleView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetRecommendSpi(int32_t spi) {
		return ((T (*)(RoomZombieCompaignView*, int32_t))(Il2CppBase() + 0x405AF10))(this, spi);
	}
	template <typename T = void> T SetDifficultyToggleValue(int32_t difficultyLevel) {
		return ((T (*)(RoomZombieCompaignView*, int32_t))(Il2CppBase() + 0x405A120))(this, difficultyLevel);
	}
	template <typename T = void> T UpdateToggleView(Il2CppList<uintptr_t>* list) {
		return ((T (*)(RoomZombieCompaignView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x40599D8))(this, list);
	}
	template <typename T = bool> static T UpdateToggleViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x405D0F0))(0, it);
	}
	template <typename T = bool> static T UpdateToggleViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x405D100))(0, it);
	}
	template <typename T = bool> static T UpdateToggleViewm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x405D110))(0, it);
	}

};

}
