#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TransformSocket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine", "TransformSocket"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_DetachFromParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachObjectToSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T DetachFromParent(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x421E37C))(0, transform);
	}
	template <typename T = void> static T AttachObjectToSocket(uintptr_t transform, uintptr_t targetTrans, Il2CppString* socketName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x421E510))(0, transform, targetTrans, socketName);
	}

};

}
