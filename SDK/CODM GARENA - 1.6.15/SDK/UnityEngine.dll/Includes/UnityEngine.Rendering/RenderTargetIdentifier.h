#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Rendering {

class RenderTargetIdentifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Rendering", "RenderTargetIdentifier"));
	}

	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_NameID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_InstanceID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T op_Implicit(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E74964))(0, type);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(int32_t nameID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E74978))(0, nameID);
	}
	template <typename T = uintptr_t> static T op_Implicit_2(uintptr_t tex) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E74988))(0, tex);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RenderTargetIdentifier*))(Il2CppBase() + 0x4E74BE4))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RenderTargetIdentifier*))(Il2CppBase() + 0x4E74CBC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(RenderTargetIdentifier*, uintptr_t))(Il2CppBase() + 0x4E74D9C))(this, obj);
	}

};

}
