#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMatchJumpControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMatchJumpController_CA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DelayAdaptationTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bNeedUpdateView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_MatchJumpDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExchangeBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FE898))(this);
	}
	template <typename T = uintptr_t> T get_MatchJumpDS() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FE948))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FE9F8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FEBD4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FEC78))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FEE04))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FEF8C))(this);
	}
	template <typename T = void> T SetActivityData(int32_t topNum, int32_t leftNum, bool bInit) {
		return ((T (*)(LiveOpsMatchJumpControllerCA*, int32_t, int32_t, bool))(Il2CppBase() + 0x34F7348))(this, topNum, leftNum, bInit);
	}
	template <typename T = void> T OnExchangeBtnClicked() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x34FFE64))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x350003C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x35007C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x35007D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x35007D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsMatchJumpControllerCA*))(Il2CppBase() + 0x35007E0))(this);
	}

};

}
