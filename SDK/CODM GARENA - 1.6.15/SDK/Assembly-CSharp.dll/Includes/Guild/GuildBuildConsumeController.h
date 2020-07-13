#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildBuildConsumeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildBuildConsumeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mBaseInfo() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetGuildData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3E984))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3EA28))(this);
	}
	template <typename T = void> T SetGuildData(uintptr_t baseinfo, int32_t ItemId, int32_t itemCount) {
		return ((T (*)(GuildBuildConsumeController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3E3EB34))(this, baseinfo, ItemId, itemCount);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3ED54))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3EE88))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3EFA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3F0F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3F100))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3F108))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildBuildConsumeController*))(Il2CppBase() + 0x3E3F110))(this);
	}

};

}
