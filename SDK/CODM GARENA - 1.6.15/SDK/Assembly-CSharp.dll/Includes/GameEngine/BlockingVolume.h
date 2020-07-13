#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BlockingVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BlockingVolume"));
	}

	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& EnableOnAwake() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& OnlayForNavMesh() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& m_Renderer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Enable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BlockingVolume*))(Il2CppBase() + 0x3615B20))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(BlockingVolume*))(Il2CppBase() + 0x3615CB0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(BlockingVolume*))(Il2CppBase() + 0x3615DE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BlockingVolume*))(Il2CppBase() + 0x3615F10))(this);
	}

};

}
