#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneStreamingLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneStreamingLayer"));
	}

	template <typename T = bool> T& drawDebug() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& layerInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sceneStreamings() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cellVerticalDepthList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> static T& unloadDistanceFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DistanceBiasRatioOnMemCritical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& distanceBias() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& realLodDistances() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& posHashSceneStreaming() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& sceneKeyedSceneStreaming() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& sceneNameKeyedSceneStreaming() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppVector2>*> T& pos2DHashVerticalDepthDict() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& isSkyOnly() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = int32_t> T& traverseNeighborCellCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& lastTickCellPosition() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_layerType() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3BFF330))(this);
	}
	template <typename T = uintptr_t> T get_debugCellColor() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C009BC))(this);
	}
	template <typename T = Il2CppVector3> T get_tileOrigin() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C009CC))(this);
	}
	template <typename T = float> T get_tileSize() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C009E0))(this);
	}
	template <typename T = float> T get_finalDistanceBias() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C009E8))(this);
	}
	template <typename T = float> T get_distanceBias() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00B48))(this);
	}
	template <typename T = void> T set_distanceBias(float value) {
		return ((T (*)(SceneStreamingLayer*, float))(Il2CppBase() + 0x3C00B50))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_realLodDistances() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00B58))(this);
	}
	template <typename T = void> T set_realLodDistances(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SceneStreamingLayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3C00B60))(this, value);
	}
	template <typename T = bool> T get_ignoreY() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00B68))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_posHashSceneStreaming() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00B70))(this);
	}
	template <typename T = void> T set_posHashSceneStreaming(Il2CppDictionary<int32_t, uintptr_t>* value) {
		return ((T (*)(SceneStreamingLayer*, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x3C00B78))(this, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_sceneKeyedSceneStreaming() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00B80))(this);
	}
	template <typename T = void> T set_sceneKeyedSceneStreaming(Il2CppDictionary<Il2CppString*, uintptr_t>* value) {
		return ((T (*)(SceneStreamingLayer*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x3C00B88))(this, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_sceneNameKeyedSceneStreaming() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00B90))(this);
	}
	template <typename T = void> T set_sceneNameKeyedSceneStreaming(Il2CppDictionary<Il2CppString*, uintptr_t>* value) {
		return ((T (*)(SceneStreamingLayer*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x3C00B98))(this, value);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppVector2>*> T get_pos2DHashVerticalDepthDict() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00BA0))(this);
	}
	template <typename T = void> T set_pos2DHashVerticalDepthDict(Il2CppDictionary<int32_t, Il2CppVector2>* value) {
		return ((T (*)(SceneStreamingLayer*, Il2CppDictionary<int32_t, Il2CppVector2>*))(Il2CppBase() + 0x3C00BA8))(this, value);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00BB0))(this);
	}
	template <typename T = bool> T get_isActive() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00C50))(this);
	}
	template <typename T = void> T set_isActive(bool value) {
		return ((T (*)(SceneStreamingLayer*, bool))(Il2CppBase() + 0x3C00C58))(this, value);
	}
	template <typename T = bool> T get_isSkyOnly() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00C60))(this);
	}
	template <typename T = void> T set_isSkyOnly(bool value) {
		return ((T (*)(SceneStreamingLayer*, bool))(Il2CppBase() + 0x3C00C68))(this, value);
	}
	template <typename T = bool> T get_showInTheSky() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00C70))(this);
	}
	template <typename T = bool> T get_activeInTheSky() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00C84))(this);
	}
	template <typename T = int32_t> T get_traverseNeighborCellCount() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C00CAC))(this);
	}
	template <typename T = void> T set_traverseNeighborCellCount(int32_t value) {
		return ((T (*)(SceneStreamingLayer*, int32_t))(Il2CppBase() + 0x3C00CB4))(this, value);
	}
	template <typename T = void> T Init(uintptr_t streamer, Il2CppList<uintptr_t>* vScenes) {
		return ((T (*)(SceneStreamingLayer*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3C00CBC))(this, streamer, vScenes);
	}
	template <typename T = void> T SetActive(bool inActive) {
		return ((T (*)(SceneStreamingLayer*, bool))(Il2CppBase() + 0x3C016C8))(this, inActive);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C017A0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(SceneStreamingLayer*))(Il2CppBase() + 0x3C01988))(this);
	}

};

}
