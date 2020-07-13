#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHomeBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHomeBaseView"));
	}

	template <typename T = uintptr_t> T& PlayerLevel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RoleCell() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Perk1Cell() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Perk2Cell() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Perk3Cell() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Tabs() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EquipLoadoutBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& EquipedLoadoutObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CopyLoadoutBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& NameInput() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mCacheSquadMemberData() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGerneralInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputLoadoutNameSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCHNChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StrByteCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutHomeBaseView*))(Il2CppBase() + 0x1A40144))(this);
	}
	template <typename T = void> T ShowLoadout(uintptr_t loadoutData, uintptr_t squadType) {
		return ((T (*)(LoadoutHomeBaseView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A403FC))(this, loadoutData, squadType);
	}
	template <typename T = void> T SetTabView(uintptr_t squadType, int32_t currentShowIndex, int32_t equipedIndex) {
		return ((T (*)(LoadoutHomeBaseView*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1A404D0))(this, squadType, currentShowIndex, equipedIndex);
	}
	template <typename T = void> T SetGerneralInfo() {
		return ((T (*)(LoadoutHomeBaseView*))(Il2CppBase() + 0x1A40868))(this);
	}
	template <typename T = void> T OnInputLoadoutNameSubmit() {
		return ((T (*)(LoadoutHomeBaseView*))(Il2CppBase() + 0x1A409B0))(this);
	}
	template <typename T = bool> T IsCHNChar(char c) {
		return ((T (*)(LoadoutHomeBaseView*, char))(Il2CppBase() + 0x1A40AAC))(this, c);
	}
	template <typename T = int32_t> T StrByteCount(Il2CppString* str) {
		return ((T (*)(LoadoutHomeBaseView*, Il2CppString*))(Il2CppBase() + 0x1A40B68))(this, str);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LoadoutHomeBaseView*))(Il2CppBase() + 0x1A40C78))(this);
	}

};

}
