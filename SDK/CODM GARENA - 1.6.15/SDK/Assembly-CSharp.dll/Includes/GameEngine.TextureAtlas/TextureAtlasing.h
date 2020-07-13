#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.TextureAtlas {

class TextureAtlasing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.TextureAtlas", "TextureAtlasing"));
	}

	template <typename T = int32_t> static T& MaxMaterialGroupSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinMatPerGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinMatPerMegaGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxTextureWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxTextureSizePerGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NumCellsOnAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rawMaterials() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& excludedRawMaterials() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& megaMaterialGroups() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& textureConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& useTextureConfigs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxAtlasResolution() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bakeUVWrappingIntoMesh() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& UVWrappingBaked() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = float> T& uvMetricMinValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& uvMetricRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& hasSerializedUniformArray() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> static T& TextureAltasingOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShaderPropertyName_AtlasTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TextureAtlasing*))(Il2CppBase() + 0x3435678))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TextureAtlasing*))(Il2CppBase() + 0x34357D8))(this);
	}
	template <typename T = Il2CppString*> static T GetShaderPropertyName_AtlasTrans(Il2CppString* texturePropertyName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x34358CC))(0, texturePropertyName);
	}

};

}
