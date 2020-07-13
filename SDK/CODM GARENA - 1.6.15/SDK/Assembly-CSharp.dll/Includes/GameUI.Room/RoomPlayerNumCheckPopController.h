#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomPlayerNumCheckPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomPlayerNumCheckPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IgnoreFlag() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIgnoreBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FBA70))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FBB14))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FBC20))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FBDC0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FBF3C))(this);
	}
	template <typename T = void> T OnIgnoreBtnClick() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FBFE4))(this);
	}
	template <typename T = void> T OnOKBtnClick() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FC1C0))(this);
	}
	template <typename T = void> T SetTipContent(Il2CppString* tips) {
		return ((T (*)(RoomPlayerNumCheckPopController*, Il2CppString*))(Il2CppBase() + 0x20FC2BC))(this, tips);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FC4D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FC4D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FC4E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FC4E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomPlayerNumCheckPopController*))(Il2CppBase() + 0x20FC4F0))(this);
	}

};

}
