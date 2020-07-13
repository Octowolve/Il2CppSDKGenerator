#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayerDataChangeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayerDataChangeManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ListenerDsList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSubscriber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseFunctionWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubscribers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RegisterSubscriber(uintptr_t Subscriber) {
		return ((T (*)(PlayerDataChangeManager*, uintptr_t))(Il2CppBase() + 0x16E1DE0))(this, Subscriber);
	}
	template <typename T = void> T UnRegisterSubscriber(uintptr_t Subscriber) {
		return ((T (*)(PlayerDataChangeManager*, uintptr_t))(Il2CppBase() + 0x16E1F28))(this, Subscriber);
	}
	template <typename T = void> T CloseFunctionWindow(uintptr_t changeddata) {
		return ((T (*)(PlayerDataChangeManager*, uintptr_t))(Il2CppBase() + 0x16E2038))(this, changeddata);
	}
	template <typename T = void> T RefreshSubscribers(uintptr_t changeddata) {
		return ((T (*)(PlayerDataChangeManager*, uintptr_t))(Il2CppBase() + 0x16E2108))(this, changeddata);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PlayerDataChangeManager*))(Il2CppBase() + 0x16E2300))(this);
	}

};

}
