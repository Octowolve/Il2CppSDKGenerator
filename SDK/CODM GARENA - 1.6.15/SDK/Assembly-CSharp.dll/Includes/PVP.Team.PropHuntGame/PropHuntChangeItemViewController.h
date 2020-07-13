#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntChangeItemViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntChangeItemViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_ChangeItemCnt() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateChangeItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_ChangeItemCnt() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3492E5C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3492E64))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3492F08))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x349300C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3493198))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x349349C))(this);
	}
	template <typename T = void> T OnNotifyUpdateChangeItemCount(uintptr_t msg) {
		return ((T (*)(PropHuntChangeItemViewController*, uintptr_t))(Il2CppBase() + 0x34935E8))(this, msg);
	}
	template <typename T = void> T ChangeBtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntChangeItemViewController*, uintptr_t))(Il2CppBase() + 0x3493744))(this, obj);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3493930))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3493938))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3493940))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3493948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntChangeItemViewController*))(Il2CppBase() + 0x3493950))(this);
	}

};

}
