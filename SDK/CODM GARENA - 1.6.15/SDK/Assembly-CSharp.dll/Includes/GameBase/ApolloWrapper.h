#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ApolloWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ApolloWrapper"));
	}

	template <typename T = uintptr_t> static T& ApolloDirInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& VoiceSystemInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T get_Login() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B7E93C))(0);
	}
	template <typename T = uintptr_t> static T get_Dir() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B7E9E8))(0);
	}
	template <typename T = uintptr_t> static T get_Voice() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B7EB54))(0);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ApolloWrapper*))(Il2CppBase() + 0x3B7ECC4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ApolloWrapper*))(Il2CppBase() + 0x3B7EF7C))(this);
	}
	template <typename T = void> static T ReLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B7F0E4))(0);
	}
	template <typename T = void> T OnApplicationPause(bool isPause) {
		return ((T (*)(ApolloWrapper*, bool))(Il2CppBase() + 0x3B7F304))(this, isPause);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ApolloWrapper*, float))(Il2CppBase() + 0x3B7F478))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(ApolloWrapper*))(Il2CppBase() + 0x3B7F5F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ApolloWrapper*))(Il2CppBase() + 0x3B7F5F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(ApolloWrapper*, bool))(Il2CppBase() + 0x3B7F600))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ApolloWrapper*, float))(Il2CppBase() + 0x3B7F608))(this, P0);
	}

};

}
