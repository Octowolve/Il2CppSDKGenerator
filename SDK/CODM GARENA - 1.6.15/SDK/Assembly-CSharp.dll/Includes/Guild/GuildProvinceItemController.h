#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildProvinceItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildProvinceItemController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetProvinceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDF810))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDF8B4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDF9C0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDFA68))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildProvinceItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3BDFB10))(this, list, index, data);
	}
	template <typename T = Il2CppString*> T GetProvinceName() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDFCEC))(this);
	}
	template <typename T = uintptr_t> T GetTransform() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDFE6C))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BDFF98))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BE008C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BE0094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BE009C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildProvinceItemController*))(Il2CppBase() + 0x3BE00A4))(this);
	}

};

}
