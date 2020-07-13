#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingLODGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingLODGroup"));
	}

	template <typename T = Il2CppVector3> T& referencePoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LodAssets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& currentLODLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& oldLODLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_currentLODLevel() {
		return ((T (*)(StreamingLODGroup*))(Il2CppBase() + 0x3F23B2C))(this);
	}
	template <typename T = void> T set_currentLODLevel(int32_t value) {
		return ((T (*)(StreamingLODGroup*, int32_t))(Il2CppBase() + 0x3F23B34))(this, value);
	}
	template <typename T = void> T UpdateCameraPos(Il2CppVector3 camPos) {
		return ((T (*)(StreamingLODGroup*, Il2CppVector3))(Il2CppBase() + 0x3F23B3C))(this, camPos);
	}
	template <typename T = void> T OnLoadAssetComplete(uintptr_t lodAsset) {
		return ((T (*)(StreamingLODGroup*, uintptr_t))(Il2CppBase() + 0x3F24504))(this, lodAsset);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(StreamingLODGroup*))(Il2CppBase() + 0x3F24B10))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StreamingLODGroup*))(Il2CppBase() + 0x3F24D48))(this);
	}
	template <typename T = void> T LoadResource(uintptr_t res) {
		return ((T (*)(StreamingLODGroup*, uintptr_t))(Il2CppBase() + 0x3F24614))(this, res);
	}
	template <typename T = void> T ReleaseResource(int32_t lodLevel) {
		return ((T (*)(StreamingLODGroup*, int32_t))(Il2CppBase() + 0x3F23DF0))(this, lodLevel);
	}

};

}
