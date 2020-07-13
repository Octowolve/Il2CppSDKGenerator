#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingLODManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingLODManager"));
	}

	template <typename T = Il2CppString*> T& LODGroupTag() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allStreamingLOD() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lodAssets() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& checkReleaseResourceInterval() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lastCheckStreamoutTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadLODAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitResourceLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F241D4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(StreamingLODManager*))(Il2CppBase() + 0x3F2519C))(this);
	}
	template <typename T = void> T TickStreaming(float deltaTime, Il2CppVector3 cameraPos, Il2CppVector3 playerPos, float distanceToGround, uintptr_t camera) {
		return ((T (*)(StreamingLODManager*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3F25260))(this, deltaTime, cameraPos, playerPos, distanceToGround, camera);
	}
	template <typename T = void> T Register(uintptr_t lodGroup) {
		return ((T (*)(StreamingLODManager*, uintptr_t))(Il2CppBase() + 0x3F24C30))(this, lodGroup);
	}
	template <typename T = void> T UnRegister(uintptr_t lodGroup) {
		return ((T (*)(StreamingLODManager*, uintptr_t))(Il2CppBase() + 0x3F24E60))(this, lodGroup);
	}
	template <typename T = void> T LoadLODAssetAsync(Il2CppString* assetName, void* loadHandler) {
		return ((T (*)(StreamingLODManager*, Il2CppString*, void*))(Il2CppBase() + 0x3F2431C))(this, assetName, loadHandler);
	}
	template <typename T = uintptr_t> T WaitResourceLoad(Il2CppString* inAssetPath, void* loadHandler) {
		return ((T (*)(StreamingLODManager*, Il2CppString*, void*))(Il2CppBase() + 0x3F25764))(this, inAssetPath, loadHandler);
	}
	template <typename T = void> T UpdateCameraPos(Il2CppVector3 camPos) {
		return ((T (*)(StreamingLODManager*, Il2CppVector3))(Il2CppBase() + 0x3F25360))(this, camPos);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(StreamingLODManager*))(Il2CppBase() + 0x3F25874))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickStreaming(float P0, Il2CppVector3 P1, Il2CppVector3 P2, float P3, uintptr_t P4) {
		return ((T (*)(StreamingLODManager*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x3F2587C))(this, P0, P1, P2, P3, P4);
	}

};

}
