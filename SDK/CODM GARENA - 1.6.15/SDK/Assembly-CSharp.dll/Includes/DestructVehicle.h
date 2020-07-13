#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestructVehicle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestructVehicle"));
	}

	template <typename T = int32_t> T& normalAssetId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& brokenAssetId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& modelTrans() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& explosionEffectID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& explosionEffectTrans() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& partsBounceEffectID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& partsBounceEffectTrans() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
