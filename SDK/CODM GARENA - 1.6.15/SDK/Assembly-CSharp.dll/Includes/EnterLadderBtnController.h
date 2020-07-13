#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterLadderBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterLadderBtnController"));
	}

	template <typename T = uintptr_t> T& m_EnterLadderBtnView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CurladderVolume() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_PawnLadderComponent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_TickShow() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIModeActice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_stopTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterBtnLadderBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_CurLadderVolume() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCE8EC))(this);
	}
	template <typename T = void> T set_CurLadderVolume(uintptr_t value) {
		return ((T (*)(EnterLadderBtnController*, uintptr_t))(Il2CppBase() + 0x4BCE8F4))(this, value);
	}
	template <typename T = uintptr_t> T get_CurPawnLadderComponent() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCE8FC))(this);
	}
	template <typename T = void> T set_CurPawnLadderComponent(uintptr_t value) {
		return ((T (*)(EnterLadderBtnController*, uintptr_t))(Il2CppBase() + 0x4BCE904))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCE90C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCE9B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCEABC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCEC4C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCEDB8))(this);
	}
	template <typename T = void> T SetUIModeActice(bool isActive, bool enableOptimize) {
		return ((T (*)(EnterLadderBtnController*, bool, bool))(Il2CppBase() + 0x4BCF048))(this, isActive, enableOptimize);
	}
	template <typename T = void> T TickCheck() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCF3E0))(this);
	}
	template <typename T = bool> T CheckDir() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCF1B4))(this);
	}
	template <typename T = void> T stopTick() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCF5DC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCF6A4))(this);
	}
	template <typename T = void> T OnEnterBtnLadderBtnClicked() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCF754))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCFAE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCFAF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCFAF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCFB00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCFB08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIModeActice(bool P0, bool P1) {
		return ((T (*)(EnterLadderBtnController*, bool, bool))(Il2CppBase() + 0x4BCFB10))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(EnterLadderBtnController*))(Il2CppBase() + 0x4BCFB18))(this);
	}

};

}
