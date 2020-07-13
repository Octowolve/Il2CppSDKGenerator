#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyQuickMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyQuickMainView"));
	}

	template <typename T = uintptr_t> T& RootGameObject() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RootCollider() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NearbyListRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SwitchNearbyListBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SwitchNearbyListBtnOnImg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SwitchNearbyListBtnOffImg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NearbyListScrollView() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& NearbyListBG() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRNearbyQuickMainView*))(Il2CppBase() + 0x1ABE590))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRNearbyQuickMainView*))(Il2CppBase() + 0x1ABE598))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyQuickMainView*))(Il2CppBase() + 0x1ABE5A8))(this);
	}
	template <typename T = void> T UpdateUIFrame(int32_t count, bool isNearbyListVisible) {
		return ((T (*)(BRNearbyQuickMainView*, int32_t, bool))(Il2CppBase() + 0x1ABCFF0))(this, count, isNearbyListVisible);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRNearbyQuickMainView*))(Il2CppBase() + 0x1ABE668))(this);
	}
	template <typename T = void> T Tick(float _) {
		return ((T (*)(BRNearbyQuickMainView*, float))(Il2CppBase() + 0x1ABE670))(this, _);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyQuickMainView*))(Il2CppBase() + 0x1ABE7A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRNearbyQuickMainView*, float))(Il2CppBase() + 0x1ABE7B0))(this, P0);
	}

};

}
