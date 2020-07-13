#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ScrollingInfomationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ScrollingInfomationController"));
	}

	template <typename T = float> static T& SCROLLING_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsScrolling() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_KillInfoDataCache() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RoomInfoDataCache() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_Model() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopUpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocKillInfoUIData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleKillInfoUIData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocRoomInfoUIData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleRoomInfoUIData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessKillInfoMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPlayerLoginOrLogoutMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ProcessPlayerLoginOrLogoutMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDataOnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_Model() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1BA48))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1BA50))(this);
	}
	template <typename T = uintptr_t> T GetData(int32_t index) {
		return ((T (*)(ScrollingInfomationController*, int32_t))(Il2CppBase() + 0x2B1BAF4))(this, index);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1BBE4))(this);
	}
	template <typename T = void> T OnInitTimer() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1BD6C))(this);
	}
	template <typename T = void> T PopUpData() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1C144))(this);
	}
	template <typename T = int32_t> T GetDataCount() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1C510))(this);
	}
	template <typename T = uintptr_t> T AllocKillInfoUIData() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1C5EC))(this);
	}
	template <typename T = void> T RecycleKillInfoUIData(uintptr_t data) {
		return ((T (*)(ScrollingInfomationController*, uintptr_t))(Il2CppBase() + 0x2B1C33C))(this, data);
	}
	template <typename T = uintptr_t> T AllocRoomInfoUIData() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1C768))(this);
	}
	template <typename T = void> T RecycleRoomInfoUIData(uintptr_t data) {
		return ((T (*)(ScrollingInfomationController*, uintptr_t))(Il2CppBase() + 0x2B1C430))(this, data);
	}
	template <typename T = void> T ProcessKillInfoMsg(uintptr_t msg) {
		return ((T (*)(ScrollingInfomationController*, uintptr_t))(Il2CppBase() + 0x2B1C8E0))(this, msg);
	}
	template <typename T = void> T ProcessPlayerLoginOrLogoutMsg(uintptr_t msg) {
		return ((T (*)(ScrollingInfomationController*, uintptr_t))(Il2CppBase() + 0x2B1D2B4))(this, msg);
	}
	template <typename T = void> T ProcessPlayerLoginOrLogoutMsg_1(Il2CppString* nickName, bool isLogin, uintptr_t loginMsgType) {
		return ((T (*)(ScrollingInfomationController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x2B1BE7C))(this, nickName, isLogin, loginMsgType);
	}
	template <typename T = void> T ResetDataOnRoundStart() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1D784))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1D06C))(this);
	}
	template <typename T = void> T OnTimer() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1DD48))(this);
	}
	template <typename T = void> T UpdateAnchors() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1DEA0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1E054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ScrollingInfomationController*))(Il2CppBase() + 0x2B1E05C))(this);
	}

};

}
