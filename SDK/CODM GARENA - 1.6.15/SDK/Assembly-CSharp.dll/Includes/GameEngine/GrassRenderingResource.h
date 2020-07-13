#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GrassRenderingResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GrassRenderingResource"));
	}

	template <typename T = uintptr_t> T& NormalMesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& NormalMaterial() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MainTextureName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TrianglesPerPlane() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalPathMesh() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BillboardPathMesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPathMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetPathMesh() {
		return ((T (*)(GrassRenderingResource*))(Il2CppBase() + 0x36F8AD8))(this);
	}
	template <typename T = uintptr_t> T GetMaterial(bool useBillboard) {
		return ((T (*)(GrassRenderingResource*, bool))(Il2CppBase() + 0x36F8B78))(this, useBillboard);
	}

};

}
