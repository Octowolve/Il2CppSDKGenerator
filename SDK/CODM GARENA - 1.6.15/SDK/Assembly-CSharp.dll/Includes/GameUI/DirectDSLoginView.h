#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DirectDSLoginView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DirectDSLoginView"));
	}

	template <typename T = uintptr_t> T& m_ServerListScrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_MapListScrollView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PlayerListScrollView() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_RoomListScrollView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_AIServerListScrollView() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_ServerScrollGo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_MapScrollGo() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_PlayerScrollGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_RoomScrollGo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_AIServerScrollGo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_ServerContentLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_MapContentLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_PlayerContentLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_RoomContentLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_AIServerContentLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_ServerInput() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_MapInput() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_PlayerInput() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_RoomInput() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_AIServerInput() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_ExtendInput() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_ShadowCollider() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RootGameObject() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_ButtonCancel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_ButtonOK() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_InputForm() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_ConnectingLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_ErrorDescLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_ServerDropDownBtn() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_MapDropDownBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_PlayerDropDownBtn() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_RoomDropDownBtn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_AIServerDropDownBtn() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& m_IsInErrorMode() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& m_isConnecting() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& m_CurShowStrIndex() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_LastResult() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& m_CurCallback() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ShowingStringList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ShowingStringListLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_Connector() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowErrorReconnectView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessResultOnMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsInErrorMode() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46E9250))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46EDA5C))(this);
	}
	template <typename T = void> T StartConnect(uintptr_t param, void* callback) {
		return ((T (*)(DirectDSLoginView*, uintptr_t, void*))(Il2CppBase() + 0x46E9490))(this, param, callback);
	}
	template <typename T = void> T StopConnect() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46EDC9C))(this);
	}
	template <typename T = void> T ShowErrorReconnectView(Il2CppString* desc) {
		return ((T (*)(DirectDSLoginView*, Il2CppString*))(Il2CppBase() + 0x46E9A20))(this, desc);
	}
	template <typename T = void> T RestoreInit() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46E7D28))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46EDD70))(this);
	}
	template <typename T = void> T ProcessResultOnMain() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46EDF90))(this);
	}
	template <typename T = void> T ConnectCallback(uintptr_t result) {
		return ((T (*)(DirectDSLoginView*, uintptr_t))(Il2CppBase() + 0x46EE0A4))(this, result);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DirectDSLoginView*))(Il2CppBase() + 0x46EE4A4))(this);
	}

};

}
