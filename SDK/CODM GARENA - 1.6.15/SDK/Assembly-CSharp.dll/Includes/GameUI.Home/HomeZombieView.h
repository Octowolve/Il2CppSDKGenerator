#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class HomeZombieView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "HomeZombieView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& EntryItems() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SquadFightLock() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BtnCompaign() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnBossBattle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BtnSquadFight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BtnEndless() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnStory() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BtnLoadout() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BtnTest() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TestRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BtnGroupGrid_Single() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnGroupGrid_Multi() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnGroupGrid_LD() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnTemplate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLDLevelBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSingleLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginMultiLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginLDLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HomeZombieView*))(Il2CppBase() + 0x2326A48))(this);
	}
	template <typename T = uintptr_t> T CreateButton(Il2CppString* desc, uintptr_t parent) {
		return ((T (*)(HomeZombieView*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2327240))(this, desc, parent);
	}
	template <typename T = void> T CreateLDLevelBtn(Il2CppString* desc, int32_t levelId) {
		return ((T (*)(HomeZombieView*, Il2CppString*, int32_t))(Il2CppBase() + 0x23274E0))(this, desc, levelId);
	}
	template <typename T = void> T BeginSingleLevel(int32_t singleId) {
		return ((T (*)(HomeZombieView*, int32_t))(Il2CppBase() + 0x23276D8))(this, singleId);
	}
	template <typename T = void> T BeginMultiLevel(int32_t levelId) {
		return ((T (*)(HomeZombieView*, int32_t))(Il2CppBase() + 0x2327778))(this, levelId);
	}
	template <typename T = void> T BeginLDLevel(int32_t levelID) {
		return ((T (*)(HomeZombieView*, int32_t))(Il2CppBase() + 0x2327818))(this, levelID);
	}
	template <typename T = void> T SetBtnState(Il2CppList<uintptr_t>* entrysConfList, uintptr_t callBack) {
		return ((T (*)(HomeZombieView*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2325EAC))(this, entrysConfList, callBack);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(HomeZombieView*))(Il2CppBase() + 0x23278B8))(this);
	}

};

}
