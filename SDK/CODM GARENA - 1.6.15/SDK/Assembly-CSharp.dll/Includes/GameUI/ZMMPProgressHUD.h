#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMMPProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMMPProgressHUD"));
	}

	template <typename T = uintptr_t> T& CurrentRound() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LeftCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_CurrentRound() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Normal() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ZMBossBloodHUD() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWaveChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A58F84))(this);
	}
	template <typename T = void> T OnWaveChange() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A5912C))(this);
	}
	template <typename T = void> T Show(bool bShow) {
		return ((T (*)(ZMMPProgressHUD*, bool))(Il2CppBase() + 0x2A59038))(this, bShow);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A591C4))(this);
	}
	template <typename T = void> T BossShow(uintptr_t netWorkBossAIPawn) {
		return ((T (*)(ZMMPProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A59368))(this, netWorkBossAIPawn);
	}
	template <typename T = uintptr_t> T Show_1(uintptr_t netWorkBossAIPawn) {
		return ((T (*)(ZMMPProgressHUD*, uintptr_t))(Il2CppBase() + 0x2A59478))(this, netWorkBossAIPawn);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A5956C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A5970C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A59714))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(ZMMPProgressHUD*))(Il2CppBase() + 0x2A5971C))(this);
	}

};

}
