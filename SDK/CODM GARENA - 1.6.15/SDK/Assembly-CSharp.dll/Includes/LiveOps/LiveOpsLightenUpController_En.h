#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsLightenUpControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsLightenUpController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& m_ulActivityID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& LIVEOPS_LIGHTUP_METEOR() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _shareData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ReqLightenUpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonShareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LightenUpAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetContinentByNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E88E4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E89F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E8A94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E8BC8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E8CE4))(this);
	}
	template <typename T = void> T ReqLightenUpInfo() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9220))(this);
	}
	template <typename T = void> T OnButtonShareClick() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E94E4))(this);
	}
	template <typename T = void> T LightenUpAnimation(bool isMeteor) {
		return ((T (*)(LiveOpsLightenUpControllerEn*, bool))(Il2CppBase() + 0x34E8E74))(this, isMeteor);
	}
	template <typename T = int32_t> T GetContinentByNum(Il2CppString* continent) {
		return ((T (*)(LiveOpsLightenUpControllerEn*, Il2CppString*))(Il2CppBase() + 0x34E972C))(this, continent);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsLightenUpControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x34E9B5C))(this, activity, bInit);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9C40))(this);
	}
	template <typename T = void> T OnButtonShareClickm__0() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9CE8))(this);
	}
	template <typename T = void> T LightenUpAnimationm__1() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9DF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9E1C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9E24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9E2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9E3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(LiveOpsLightenUpControllerEn*, uintptr_t, bool))(Il2CppBase() + 0x34E9E44))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LiveOpsLightenUpControllerEn*))(Il2CppBase() + 0x34E9E4C))(this);
	}

};

}
