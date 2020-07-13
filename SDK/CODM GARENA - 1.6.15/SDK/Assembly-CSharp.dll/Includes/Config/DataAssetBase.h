#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DataAssetBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DataAssetBase"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(Il2CppString* fileNameWithoutExtension) {
		return ((T (*)(DataAssetBase*, Il2CppString*))(Il2CppBase() + 0x463C9AC))(this, fileNameWithoutExtension);
	}
	template <typename T = bool> T GetBytes(Il2CppString* fileNameWithoutExtension, Il2CppArray<uintptr_t>** data, uintptr_t* count) {
		return ((T (*)(DataAssetBase*, Il2CppString*, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x463CCE0))(this, fileNameWithoutExtension, data, count);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(DataAssetBase*))(Il2CppBase() + 0x463CE14))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Serialize() {
		return ((T (*)(DataAssetBase*))(Il2CppBase() + 0x463CEAC))(this);
	}
	template <typename T = void> T Serialize_1(uintptr_t bw) {
		return ((T (*)(DataAssetBase*, uintptr_t))(Il2CppBase() + 0x0))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(DataAssetBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x463D18C))(this, bytes);
	}
	template <typename T = void> T Deserialize_1(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DataAssetBase*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, bytes, position);
	}

};

}
