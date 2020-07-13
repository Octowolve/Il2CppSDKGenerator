#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntCloneBtnViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntCloneBtnViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_CloneSkillCnt() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateBaitCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_CloneSkillCnt() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494158))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494160))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494204))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494308))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494494))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494798))(this);
	}
	template <typename T = void> T OnNotifyUpdateBaitCount(uintptr_t msg) {
		return ((T (*)(PropHuntCloneBtnViewController*, uintptr_t))(Il2CppBase() + 0x34948E4))(this, msg);
	}
	template <typename T = void> T CloneBtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntCloneBtnViewController*, uintptr_t))(Il2CppBase() + 0x3494A40))(this, obj);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494C30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494C38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494C40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494C48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntCloneBtnViewController*))(Il2CppBase() + 0x3494C50))(this);
	}

};

}
