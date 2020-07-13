#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessGrapple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_Grapple"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DualHandWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedQuickClickProtect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmQuickUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayCancelGrappleAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmDragUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T DualHandWeapon(int32_t ItemId) {
		return ((T (*)(BRSkillProcessGrapple*, int32_t))(Il2CppBase() + 0x1B2E870))(this, ItemId);
	}
	template <typename T = bool> T IsNeedQuickClickProtect() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2E944))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2E9E4))(this);
	}
	template <typename T = void> T OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2EDD4))(this);
	}
	template <typename T = void> T OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2EF78))(this);
	}
	template <typename T = void> T DelayCancelGrappleAction() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F01C))(this);
	}
	template <typename T = void> T OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F1C0))(this);
	}
	template <typename T = void> T DragTick(float delatTime) {
		return ((T (*)(BRSkillProcessGrapple*, float))(Il2CppBase() + 0x1B2F264))(this, delatTime);
	}
	template <typename T = void> T OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F5C0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedQuickClickProtect() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F854))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginUseSkill() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F92C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F9F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2F9FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DragTick(float P0) {
		return ((T (*)(BRSkillProcessGrapple*, float))(Il2CppBase() + 0x1B2FA00))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessGrapple*))(Il2CppBase() + 0x1B2FA04))(this);
	}

};

}
