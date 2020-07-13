#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VideoModuleStoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VideoModuleStoreData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& VideoModules() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(VideoModuleStoreData*, uintptr_t))(Il2CppBase() + 0x2E8FC98))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(VideoModuleStoreData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2E8FDC4))(this, bytes, position);
	}

};

}
