#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsSignInController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsSignInController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LiveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_TopIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_LeftIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_LiveOpsDataStore() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354ECD0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354ED80))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354EE8C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354EF30))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354F064))(this);
	}
	template <typename T = void> T OnBtnGoClick() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354F180))(this);
	}
	template <typename T = void> T UpdateView(int32_t topIndex, int32_t leftIndex) {
		return ((T (*)(CodLiveOpsSignInController*, int32_t, int32_t))(Il2CppBase() + 0x3547224))(this, topIndex, leftIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354F698))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354F6A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354F6A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodLiveOpsSignInController*))(Il2CppBase() + 0x354F6B0))(this);
	}

};

}
