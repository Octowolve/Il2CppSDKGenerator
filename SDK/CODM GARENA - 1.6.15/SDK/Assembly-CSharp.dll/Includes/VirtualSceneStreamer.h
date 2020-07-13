#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualSceneStreamer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualSceneStreamer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& streamingLayers() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& virtualSceneDB() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& maxStreamingCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& currentStreamingCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& lastCameraPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& justTeleported() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& currentStreamingPolicy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& currentHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& checkUnloadSkyOnly() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bSwitchDefaultPolicy() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pendingLoadSceneStreamings() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _scenePrefabPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_StreamerType() {
		return ((T (*)(VirtualSceneStreamer*))(Il2CppBase() + 0x488EDC0))(this);
	}
	template <typename T = uintptr_t> static T get_scenePrefabPool() {
		return ((T (*)(void *))(Il2CppBase() + 0x488DA64))(0);
	}

};

}
