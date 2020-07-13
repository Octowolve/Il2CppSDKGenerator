#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMatchTimeBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMatchTimeBaseView"));
	}

	template <typename T = uintptr_t> T& VNG_18() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TimeCountLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CancellBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CancellParentObj() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& CostingTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& mWaitingTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomMatchTimeBaseView*))(Il2CppBase() + 0x20EFFB8))(this);
	}
	template <typename T = void> T ResetTimeCount() {
		return ((T (*)(RoomMatchTimeBaseView*))(Il2CppBase() + 0x20ED90C))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(RoomMatchTimeBaseView*, Il2CppString*))(Il2CppBase() + 0x20F0068))(this, text);
	}
	template <typename T = void> T SetSubTitle(Il2CppString* text) {
		return ((T (*)(RoomMatchTimeBaseView*, Il2CppString*))(Il2CppBase() + 0x20F015C))(this, text);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RoomMatchTimeBaseView*))(Il2CppBase() + 0x20F0250))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(RoomMatchTimeBaseView*, Il2CppString*))(Il2CppBase() + 0x20F0398))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetSubTitle(Il2CppString* P0) {
		return ((T (*)(RoomMatchTimeBaseView*, Il2CppString*))(Il2CppBase() + 0x20F03A0))(this, P0);
	}

};

}
