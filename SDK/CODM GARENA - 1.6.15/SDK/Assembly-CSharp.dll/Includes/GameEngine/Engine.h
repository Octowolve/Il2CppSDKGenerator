#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Engine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Engine"));
	}

	template <typename T = uintptr_t> T& m_GamePlayer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupServices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T SetupServices() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51B9768))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51B9FD4))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51BA2EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51BA58C))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51BA698))(this);
	}
	template <typename T = void> T CreateLocalPlayer() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51BA214))(this);
	}
	template <typename T = void> T DestroyLocalPlayer() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51BA4E8))(this);
	}
	template <typename T = uintptr_t> T GetGamePlayer() {
		return ((T (*)(Engine*))(Il2CppBase() + 0x51BAB38))(this);
	}
	template <typename T = bool> T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(Engine*, uint32_t))(Il2CppBase() + 0x51BABD8))(this, PlayerID);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(Engine*, float))(Il2CppBase() + 0x51BACD4))(this, deltaTime);
	}
	template <typename T = void> T ChangeState(uintptr_t targetState) {
		return ((T (*)(Engine*, uintptr_t))(Il2CppBase() + 0x51BA108))(this, targetState);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x51BADF8))(0);
	}
	template <typename T = void> static T set_Instance(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x51BAE78))(0, value);
	}
	template <typename T = void> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x51BAEFC))(0);
	}
	template <typename T = void> static T ShutDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x51BB074))(0);
	}

};

}
