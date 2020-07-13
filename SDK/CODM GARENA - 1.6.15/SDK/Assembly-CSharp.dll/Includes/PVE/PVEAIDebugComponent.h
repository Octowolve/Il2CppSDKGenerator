#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIDebugComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIDebugComponent"));
	}

	template <typename T = uintptr_t> T& OwnerController() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x4377DE0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x4377E84))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x4377F94))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x4378038))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x43780FC))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x4378194))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x437822C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PVEAIDebugComponent*))(Il2CppBase() + 0x437849C))(this);
	}

};

}
