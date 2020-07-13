#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyWealthView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyWealthView"));
	}

	template <typename T = uintptr_t> T& wealthType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& itemSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& itemCountLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& itemEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& itemAddButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& deltaWidth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& WholeWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& lobbyWealthReposition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& itemNum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& viewTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& localData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& INCREASE_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIncreaseId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalWidthAndPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWealthData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WealthChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWealthByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppString*> static T GetIncreaseId() {
		return ((T (*)(void *))(Il2CppBase() + 0x36B4A30))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B4BC8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B5108))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B5224))(this);
	}
	template <typename T = void> T SetData(bool isNeedEffect) {
		return ((T (*)(LobbyWealthView*, bool))(Il2CppBase() + 0x36B5334))(this, isNeedEffect);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B55EC))(this);
	}
	template <typename T = void> T CalWidthAndPosition() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B56D4))(this);
	}
	template <typename T = void> T SetItemData() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B4E04))(this);
	}
	template <typename T = void> T SetWealthData(bool isNeedEffect) {
		return ((T (*)(LobbyWealthView*, bool))(Il2CppBase() + 0x36B541C))(this, isNeedEffect);
	}
	template <typename T = void> T WealthChange() {
		return ((T (*)(LobbyWealthView*))(Il2CppBase() + 0x36B5030))(this);
	}
	template <typename T = float> T GetWealthByType(uintptr_t t) {
		return ((T (*)(LobbyWealthView*, uintptr_t))(Il2CppBase() + 0x36B597C))(this, t);
	}
	template <typename T = void> T OnAddButtonClick(uintptr_t obj) {
		return ((T (*)(LobbyWealthView*, uintptr_t))(Il2CppBase() + 0x36B5AE4))(this, obj);
	}

};

}
