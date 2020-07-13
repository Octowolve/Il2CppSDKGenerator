#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUVolumeCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_VolumeCache"));
	}

	template <typename T = uintptr_t> T& _heightMapVolumeData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _textureVolumeDatas() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T GenerateTerrainFromParts(uintptr_t session, Il2CppList<uintptr_t>* volumeParts, uintptr_t houdiniAsset, uintptr_t* heightLayerPart) {
		return ((T (*)(HEUVolumeCache*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2BDF518))(this, session, volumeParts, houdiniAsset, heightLayerPart);
	}
	template <typename T = void> T ParseVolumeDatas(uintptr_t session, Il2CppList<uintptr_t>* volumeParts, uintptr_t houdiniAsset, uintptr_t* heightLayerPart) {
		return ((T (*)(HEUVolumeCache*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2BF1B98))(this, session, volumeParts, houdiniAsset, heightLayerPart);
	}
	template <typename T = void> T Generate(uintptr_t session, uintptr_t houdiniAsset, uintptr_t* terrainData, uintptr_t* terrainOffsetPosition) {
		return ((T (*)(HEUVolumeCache*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2BF57C4))(this, session, houdiniAsset, terrainData, terrainOffsetPosition);
	}
	template <typename T = uintptr_t> T GetHeightfield(uintptr_t session, uintptr_t volumeData, int32_t squareSizePlusOne, float paddingValue) {
		return ((T (*)(HEUVolumeCache*, uintptr_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x2BF5924))(this, session, volumeData, squareSizePlusOne, paddingValue);
	}
	template <typename T = void> T CompleteTerrainData(uintptr_t houdiniAsset, uintptr_t terrainData, Il2CppList<uintptr_t>* protos, Il2CppList<Il2CppString*>* layerNames, Il2CppDictionary<Il2CppString*, int32_t>* channels, uintptr_t session, uintptr_t gameObject) {
		return ((T (*)(HEUVolumeCache*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<Il2CppString*>*, Il2CppDictionary<Il2CppString*, int32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BF2EB8))(this, houdiniAsset, terrainData, protos, layerNames, channels, session, gameObject);
	}

};

}
