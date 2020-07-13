#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GPUGrassTileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GPUGrassTileInfo"));
	}

	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& AssociateGrassCellIndexList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& GrassTileHeightDensityTexture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_GrassManager() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TitleIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTilePosAndSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrassTileTextureDataLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAssociateGrassMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrassTileDataLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrassTileDataUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCellRenderingInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetTilePosAndSize() {
		return ((T (*)(GPUGrassTileInfo*))(Il2CppBase() + 0x36E71EC))(this);
	}
	template <typename T = void> T OnGrassTileTextureDataLoaded(uintptr_t splitMap) {
		return ((T (*)(GPUGrassTileInfo*, uintptr_t))(Il2CppBase() + 0x36E7350))(this, splitMap);
	}
	template <typename T = void> T UpdateAssociateGrassMaterial() {
		return ((T (*)(GPUGrassTileInfo*))(Il2CppBase() + 0x36E7400))(this);
	}
	template <typename T = void> T OnGrassTileDataLoaded(uintptr_t GrassTileInfo) {
		return ((T (*)(GPUGrassTileInfo*, uintptr_t))(Il2CppBase() + 0x36E7BA4))(this, GrassTileInfo);
	}
	template <typename T = void> T OnGrassTileDataUnload() {
		return ((T (*)(GPUGrassTileInfo*))(Il2CppBase() + 0x36E8C20))(this);
	}
	template <typename T = void> T ResetCellRenderingInfos() {
		return ((T (*)(GPUGrassTileInfo*))(Il2CppBase() + 0x36E8D70))(this);
	}

};

}
