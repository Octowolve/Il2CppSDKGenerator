#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IndividuationInGameSelectorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IndividuationInGameSelectorView"));
	}

	template <typename T = int32_t> T& MaxItemNum() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SetItemClickHandler() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerTrans() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& StartAngle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& CalcRadius() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CacheTwneer() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector2> T& SelectedDirection() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CurSelectedItem() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IniatialInnerSetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompleteSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllDataPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2331C30))(this);
	}
	template <typename T = uintptr_t> T get_CacheTwneer() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2331C3C))(this);
	}
	template <typename T = uintptr_t> T IniatialInnerSetItem(uintptr_t go, int32_t index) {
		return ((T (*)(IndividuationInGameSelectorView*, uintptr_t, int32_t))(Il2CppBase() + 0x2331D24))(this, go, index);
	}
	template <typename T = bool> T OnCompleteSelection() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2332368))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2332724))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(IndividuationInGameSelectorView*, float))(Il2CppBase() + 0x233272C))(this, dt);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2332D10))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2332E58))(this);
	}
	template <typename T = void> T OnSetItemClick(uintptr_t setItem) {
		return ((T (*)(IndividuationInGameSelectorView*, uintptr_t))(Il2CppBase() + 0x2332FA0))(this, setItem);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x233318C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x23335A0))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2330A04))(this);
	}
	template <typename T = void> T ResetAllDataPos() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x23336E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(IndividuationInGameSelectorView*, float))(Il2CppBase() + 0x2333940))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2333948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2333950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2333958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(IndividuationInGameSelectorView*))(Il2CppBase() + 0x2333960))(this);
	}

};

}
