#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Landscape {

class HeightmapAtlas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Landscape", "HeightmapAtlas"));
	}

	template <typename T = int32_t> T& atlasWidth() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& atlasHeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& blockSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& freeBlockList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& numFreeBlocks() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& atlas() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& dirty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppRect> T& dirtyRect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& canUseApplyRect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtlasTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTotalBlockCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFreeBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Commit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUvScaleOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUvScaleOffsetParamsForShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateNormals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetAtlasTexture() {
		return ((T (*)(HeightmapAtlas*))(Il2CppBase() + 0x247C494))(this);
	}
	template <typename T = void> T Initialize(uintptr_t renderer, int32_t atlasWidth, int32_t atlasHeight, int32_t blockSize) {
		return ((T (*)(HeightmapAtlas*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x247C0D4))(this, renderer, atlasWidth, atlasHeight, blockSize);
	}
	template <typename T = void> T Release() {
		return ((T (*)(HeightmapAtlas*))(Il2CppBase() + 0x247C604))(this);
	}
	template <typename T = int32_t> T GetTotalBlockCount() {
		return ((T (*)(HeightmapAtlas*))(Il2CppBase() + 0x247C010))(this);
	}
	template <typename T = bool> T HasFreeBlock() {
		return ((T (*)(HeightmapAtlas*))(Il2CppBase() + 0x247C744))(this);
	}
	template <typename T = int32_t> T UploadBlock(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(HeightmapAtlas*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x247C7F0))(this, buffer);
	}
	template <typename T = void> T Commit() {
		return ((T (*)(HeightmapAtlas*))(Il2CppBase() + 0x247CAEC))(this);
	}
	template <typename T = void> T ReleaseBlock(int32_t blockIndex) {
		return ((T (*)(HeightmapAtlas*, int32_t))(Il2CppBase() + 0x247CC70))(this, blockIndex);
	}
	template <typename T = uintptr_t> T GetUvScaleOffset(int32_t blockIndex) {
		return ((T (*)(HeightmapAtlas*, int32_t))(Il2CppBase() + 0x247CD54))(this, blockIndex);
	}
	template <typename T = void> T GetUvScaleOffsetParamsForShader(uintptr_t* params0, uintptr_t* params1) {
		return ((T (*)(HeightmapAtlas*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x247CF3C))(this, params0, params1);
	}
	template <typename T = void> static T CalculateNormals(uintptr_t landscape, Il2CppArray<uintptr_t>* heights, int32_t dimension, Il2CppArray<uintptr_t>* normals, int32_t level) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x247D104))(0, landscape, heights, dimension, normals, level);
	}

};

}
