#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoteHierarchyUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoteHierarchyUtil"));
	}

	template <typename T = Il2CppString*> static T& RemoteInspectorGameObjectName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenRemoteInspector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> static T OpenRemoteInspector(bool createNew, int16_t port) {
		return ((T (*)(void *, bool, int16_t))(Il2CppBase() + 0x382AF48))(0, createNew, port);
	}

};

}
