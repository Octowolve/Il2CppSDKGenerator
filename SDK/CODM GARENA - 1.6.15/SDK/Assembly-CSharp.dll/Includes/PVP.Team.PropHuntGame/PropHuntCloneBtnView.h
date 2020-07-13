#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntCloneBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntCloneBtnView"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SkillCntLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_CurIsLocked() {
		return *(T*)((uintptr_t)this + 0x98);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x34939FC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493AA4))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493AAC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493AB8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493AC8))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493B70))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493C44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493CEC))(this);
	}
	template <typename T = float> T GetRateScale() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493D94))(this);
	}
	template <typename T = void> T CloneBtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntCloneBtnView*, uintptr_t))(Il2CppBase() + 0x3493E34))(this, obj);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3493F2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3494084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x349408C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x3494094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x349409C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x34940A4))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(PropHuntCloneBtnView*))(Il2CppBase() + 0x34940AC))(this);
	}

};

}
