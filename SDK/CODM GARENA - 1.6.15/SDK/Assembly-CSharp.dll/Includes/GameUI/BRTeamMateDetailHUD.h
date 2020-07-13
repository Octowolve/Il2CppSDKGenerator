#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRTeamMateDetailHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRTeamMateDetailHUD"));
	}

	template <typename T = uintptr_t> T& TeamMateDetailItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TeamMateGrid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CloseMask() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeamMateItemList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeamMateGridSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTeamMateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCEE44))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCEE4C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCEE58))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCF040))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCF22C))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCF3CC))(this);
	}
	template <typename T = bool> T IsTeamMate(uintptr_t pi) {
		return ((T (*)(BRTeamMateDetailHUD*, uintptr_t))(Il2CppBase() + 0x3DCF5EC))(this, pi);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DCF734))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRTeamMateDetailHUD*, float))(Il2CppBase() + 0x3DCF73C))(this, dt);
	}
	template <typename T = int32_t> T TeamMateGridSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(BRTeamMateDetailHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DCF7F0))(this, a, b);
	}
	template <typename T = void> T AddTeamMateItem(uintptr_t pi) {
		return ((T (*)(BRTeamMateDetailHUD*, uintptr_t))(Il2CppBase() + 0x3DCF9F0))(this, pi);
	}
	template <typename T = void> T Show() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DD0178))(this);
	}
	template <typename T = void> T SetContent() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DD021C))(this);
	}
	template <typename T = void> T OnCloseClick(uintptr_t obj) {
		return ((T (*)(BRTeamMateDetailHUD*, uintptr_t))(Il2CppBase() + 0x3DCEF0C))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DD0A64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DD0A6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DD0A74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRTeamMateDetailHUD*))(Il2CppBase() + 0x3DD0A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTeamMateDetailHUD*, float))(Il2CppBase() + 0x3DD0A84))(this, P0);
	}

};

}
