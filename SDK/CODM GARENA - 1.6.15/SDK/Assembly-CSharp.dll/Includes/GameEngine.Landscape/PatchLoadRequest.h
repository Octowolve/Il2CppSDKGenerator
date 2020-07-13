#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class PatchLoadRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "PatchLoadRequest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& s_HeightDataBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_CalculatedNormalsBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& landscape() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& landscapeRenderer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& row() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& col() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& patchHeights() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& heightmapUploadBuffer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int16_t> T& maxHeightValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Perform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeNormalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntegrateMainThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Perform() {
		return ((T (*)(PatchLoadRequest*))(Il2CppBase() + 0x24899C4))(this);
	}
	template <typename T = unsigned char> T EncodeNormalComponent(float x) {
		return ((T (*)(PatchLoadRequest*, float))(Il2CppBase() + 0x2491E00))(this, x);
	}
	template <typename T = void> T IntegrateMainThread() {
		return ((T (*)(PatchLoadRequest*))(Il2CppBase() + 0x2489EC0))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(PatchLoadRequest*))(Il2CppBase() + 0x2491A08))(this);
	}

};

}
