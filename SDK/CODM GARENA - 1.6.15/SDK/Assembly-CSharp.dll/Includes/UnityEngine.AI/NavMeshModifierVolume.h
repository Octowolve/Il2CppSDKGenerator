#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.AI {

class NavMeshModifierVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.AI", "NavMeshModifierVolume"));
	}

	template <typename T = Il2CppVector3> T& m_Size() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_Area() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_AffectedAgents() {
		return *(T*)((uintptr_t)this + 0x28);
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

	template <typename T = Il2CppVector3> T get_size() {
		return ((T (*)(NavMeshModifierVolume*))(Il2CppBase() + 0x420AB9C))(this);
	}
	template <typename T = void> T set_size(Il2CppVector3 value) {
		return ((T (*)(NavMeshModifierVolume*, Il2CppVector3))(Il2CppBase() + 0x420ABB0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(NavMeshModifierVolume*))(Il2CppBase() + 0x420ABBC))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(NavMeshModifierVolume*, Il2CppVector3))(Il2CppBase() + 0x420ABD0))(this, value);
	}
	template <typename T = int32_t> T get_area() {
		return ((T (*)(NavMeshModifierVolume*))(Il2CppBase() + 0x420ABDC))(this);
	}
	template <typename T = void> T set_area(int32_t value) {
		return ((T (*)(NavMeshModifierVolume*, int32_t))(Il2CppBase() + 0x420ABE4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_activeModifiers() {
		return ((T (*)(void *))(Il2CppBase() + 0x420ABEC))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(NavMeshModifierVolume*))(Il2CppBase() + 0x420AC9C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NavMeshModifierVolume*))(Il2CppBase() + 0x420AE5C))(this);
	}
	template <typename T = bool> T AffectsAgentType(int32_t agentTypeID) {
		return ((T (*)(NavMeshModifierVolume*, int32_t))(Il2CppBase() + 0x420AF9C))(this, agentTypeID);
	}

};

}
