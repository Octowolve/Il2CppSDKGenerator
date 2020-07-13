#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildCityItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildCityItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCityName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46840))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E468E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E469F0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46A98))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildCityItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E46B40))(this, list, index, data);
	}
	template <typename T = Il2CppString*> T GetCityName() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E41598))(this);
	}
	template <typename T = uintptr_t> T GetTransform() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46D1C))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E414A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46E48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46E50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46E58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildCityItemController*))(Il2CppBase() + 0x3E46E60))(this);
	}

};

}
