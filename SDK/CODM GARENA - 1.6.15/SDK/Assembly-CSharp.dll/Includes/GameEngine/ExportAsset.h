#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ExportAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ExportAsset"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& bundleName() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(ExportAsset*, uintptr_t))(Il2CppBase() + 0x51BE2D4))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ExportAsset*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x51BE3D4))(this, bytes, position);
	}

};

}
