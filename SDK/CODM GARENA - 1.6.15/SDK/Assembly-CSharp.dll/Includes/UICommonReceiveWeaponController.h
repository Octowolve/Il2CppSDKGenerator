#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonReceiveWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonReceiveWeaponController"));
	}

	template <typename T = uintptr_t> T& m_weaponUIView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Tips() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& dissolveCounter() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& dissolveTimer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& DISSOLVE_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _dissolveValue() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& dissolveMaterial() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& copyWeapon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& OriginalWeapon() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToShowAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponViewOpenFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponViewLoadAllFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMaskTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUiObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponViewShowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponViewAnimationFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponBeginTimelineAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponEndTimelineAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyWeaponAndReplaceMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDissolveFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowWeaponUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CF1E0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CF284))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CF38C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CF618))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CF734))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CFB58))(this);
	}
	template <typename T = void> T SetData(uintptr_t item, uintptr_t shareData) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39CFC18))(this, item, shareData);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39CFDF0))(this);
	}
	template <typename T = void> T StartToShowAnimation(uint32_t weaponId) {
		return ((T (*)(UICommonReceiveWeaponController*, uint32_t))(Il2CppBase() + 0x39CFEB8))(this, weaponId);
	}
	template <typename T = void> T OnNotifyAvatarWeaponViewOpenFinished(uintptr_t message) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t))(Il2CppBase() + 0x39D0878))(this, message);
	}
	template <typename T = void> T OnNotifyAvatarWeaponViewLoadAllFinish(uintptr_t message) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t))(Il2CppBase() + 0x39D09C8))(this, message);
	}
	template <typename T = void> T ShowMaskTween() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D06D8))(this);
	}
	template <typename T = void> T ShowUiObjs(bool show) {
		return ((T (*)(UICommonReceiveWeaponController*, bool))(Il2CppBase() + 0x39CF9BC))(this, show);
	}
	template <typename T = void> T OnNotifyAvatarWeaponViewShowMask(uintptr_t message) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t))(Il2CppBase() + 0x39D0A8C))(this, message);
	}
	template <typename T = void> T OnNotifyAvatarWeaponViewAnimationFinish(uintptr_t message) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t))(Il2CppBase() + 0x39D0234))(this, message);
	}
	template <typename T = void> T OnNotifyAvatarWeaponBeginTimelineAnim(uintptr_t message) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t))(Il2CppBase() + 0x39D0EB0))(this, message);
	}
	template <typename T = void> T OnNotifyAvatarWeaponEndTimelineAnim(uintptr_t message) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t))(Il2CppBase() + 0x39D0FA4))(this, message);
	}
	template <typename T = void> T CopyWeaponAndReplaceMaterial() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D1098))(this);
	}
	template <typename T = void> T OnDissolveFinish() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D0B38))(this);
	}
	template <typename T = void> T OnShowWeaponUI() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D16C8))(this);
	}
	template <typename T = void> T OnShowWeapon() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D1778))(this);
	}
	template <typename T = void> static T OnOpenm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x39D1948))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D19E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D19EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D19F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D19F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D19F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D19FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetData(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(UICommonReceiveWeaponController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39D1A00))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_InitUI() {
		return ((T (*)(UICommonReceiveWeaponController*))(Il2CppBase() + 0x39D1A04))(this);
	}

};

}
