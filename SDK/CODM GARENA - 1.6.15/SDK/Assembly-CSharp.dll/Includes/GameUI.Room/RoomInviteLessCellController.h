#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteLessCellController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteLessCellController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x40);
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DCD2C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DCDD0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DCEDC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DCF84))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(RoomInviteLessCellController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x20DD02C))(this, list, index, dataObj);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DD17C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DD184))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DD18C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomInviteLessCellController*))(Il2CppBase() + 0x20DD194))(this);
	}

};

}
