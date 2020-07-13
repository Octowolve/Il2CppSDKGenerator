#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncSpawncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AsyncSpawn>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& useManagedAsset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppQuaternion> T& rot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T m__0(uintptr_t prefab) {
		return ((T (*)(AsyncSpawncAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1EC89C4))(this, prefab);
	}

};

}
