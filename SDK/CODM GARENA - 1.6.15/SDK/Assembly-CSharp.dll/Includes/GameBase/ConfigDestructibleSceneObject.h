#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ConfigDestructibleSceneObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ConfigDestructibleSceneObject"));
	}

	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ObjectAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SceneObjectType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& HalfExtent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Preview() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
