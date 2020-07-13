#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneStageShowManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneStageShowManager"));
	}

	template <typename T = bool> static T& OpenSceneStageShowManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& rt1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rt2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& rt3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rt4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& BestPlayerStage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BestPlayerItem() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ShowCamera1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Config() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStageReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadTestAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33EFD6C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33EFED4))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33F00CC))(this);
	}
	template <typename T = void> T LoadStage() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33F01A0))(this);
	}
	template <typename T = void> T OnStageReady(int32_t id, uintptr_t obj) {
		return ((T (*)(SceneStageShowManager*, int32_t, uintptr_t))(Il2CppBase() + 0x33F0334))(this, id, obj);
	}
	template <typename T = void> T LoadTestAvatar() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33F05E0))(this);
	}
	template <typename T = void> T DoSample() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33F0884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33F0C0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(SceneStageShowManager*))(Il2CppBase() + 0x33F0C14))(this);
	}

};

}
