#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ftLightmapsStorage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ftLightmapsStorage"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& maps() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& masks() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dirMaps() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rnmMaps0() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rnmMaps1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rnmMaps2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& mapsMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakedRenderers() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& bakedIDs() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakedScaleOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakedVertexColorMesh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& nonBakedRenderers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakedLights() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& bakedLightChannels() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakedRenderersTerrain() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<int32_t>*> T& bakedIDsTerrain() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakedScaleOffsetTerrain() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& assetList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<int32_t>*> T& uvOverlapAssetList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& idremap() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& usesRealtimeGI() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& emptyDirectionTex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lightmapsToApply() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_lightmapsToApply() {
		return ((T (*)(ftLightmapsStorage*))(Il2CppBase() + 0x3B631E4))(this);
	}
	template <typename T = void> T set_lightmapsToApply(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ftLightmapsStorage*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B631DC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ftLightmapsStorage*))(Il2CppBase() + 0x3B63AF4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ftLightmapsStorage*))(Il2CppBase() + 0x3B63AF8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ftLightmapsStorage*))(Il2CppBase() + 0x3B63AFC))(this);
	}

};

}
