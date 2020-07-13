#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MPServerTimeSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MPServerTimeSync"));
	}

	template <typename T = float> static T& m_MinClientServerDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecvServerPack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeForServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x50745A4))(0);
	}
	template <typename T = void> static T RecvServerPack(float serverTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x50746AC))(0, serverTime);
	}
	template <typename T = float> static T GetTimeForServerTime(float serverTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x5074830))(0, serverTime);
	}

};

}
