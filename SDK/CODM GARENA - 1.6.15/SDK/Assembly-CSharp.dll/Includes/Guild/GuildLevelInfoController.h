#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildLevelInfoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildLevelInfoController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC3FB4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC4058))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC4164))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC42AC))(this);
	}
	template <typename T = void> T SetLevelInfo(int32_t level) {
		return ((T (*)(GuildLevelInfoController*, int32_t))(Il2CppBase() + 0x3BC43F4))(this, level);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC4B58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC4B60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC4B68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildLevelInfoController*))(Il2CppBase() + 0x3BC4B70))(this);
	}

};

}
