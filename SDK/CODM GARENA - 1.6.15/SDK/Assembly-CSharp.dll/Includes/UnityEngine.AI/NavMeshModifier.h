#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.AI", "NavMeshModifier"));
	}

	template <typename T = bool> T& m_OverrideArea() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Area() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IgnoreFromBuild() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_AffectedAgents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& s_NavMeshModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AffectsAgentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_overrideArea() {
		return ((T (*)(NavMeshModifier*))(Il2CppBase() + 0x420A38C))(this);
	}
	template <typename T = void> T set_overrideArea(bool value) {
		return ((T (*)(NavMeshModifier*, bool))(Il2CppBase() + 0x420A394))(this, value);
	}
	template <typename T = int32_t> T get_area() {
		return ((T (*)(NavMeshModifier*))(Il2CppBase() + 0x420A39C))(this);
	}
	template <typename T = void> T set_area(int32_t value) {
		return ((T (*)(NavMeshModifier*, int32_t))(Il2CppBase() + 0x420A3A4))(this, value);
	}
	template <typename T = bool> T get_ignoreFromBuild() {
		return ((T (*)(NavMeshModifier*))(Il2CppBase() + 0x420A3AC))(this);
	}
	template <typename T = void> T set_ignoreFromBuild(bool value) {
		return ((T (*)(NavMeshModifier*, bool))(Il2CppBase() + 0x420A3B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_activeModifiers() {
		return ((T (*)(void *))(Il2CppBase() + 0x420A3BC))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(NavMeshModifier*))(Il2CppBase() + 0x420A46C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NavMeshModifier*))(Il2CppBase() + 0x420A62C))(this);
	}
	template <typename T = bool> T AffectsAgentType(int32_t agentTypeID) {
		return ((T (*)(NavMeshModifier*, int32_t))(Il2CppBase() + 0x420A76C))(this, agentTypeID);
	}

};

}
