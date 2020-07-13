#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class HelperGameObjectFinder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "HelperGameObjectFinder"));
	}

	template <typename T = uintptr_t> static T& lastResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindGameObjectInScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindGameObjectInChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T FindGameObject(int32_t instanceId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x422D548))(0, instanceId);
	}
	template <typename T = uintptr_t> static T FindGameObjectInScene(int32_t instanceId, uintptr_t scene) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x422F1C4))(0, instanceId, scene);
	}
	template <typename T = uintptr_t> static T FindGameObjectInChildren(int32_t instanceId, uintptr_t gameObject) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x422F334))(0, instanceId, gameObject);
	}

};

}
